#include "circle_detector/circle_config.hpp"
#include "cv_bridge/cv_bridge.hpp"
#include "opencv2/opencv.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/camera_info.hpp"
#include "sensor_msgs/msg/image.hpp"

using namespace cv;

class CircleDetectorNode : public rclcpp::Node {
   public:
    CircleDetectorNode() : Node("circle_detector_node") {
        target_inner_dia = TARGET_INNER_DIAMETER;
        target_outer_dia = TARGET_OUTER_DIAMETER;

        // ========== 调试窗口：全部打开，看过程 ==========
        namedWindow("Circle Detector", WINDOW_NORMAL);
        namedWindow("[DEBUG] Gray Depth", WINDOW_NORMAL);
        namedWindow("[DEBUG] Blur", WINDOW_NORMAL);
        namedWindow("[DEBUG] Canny Edges", WINDOW_NORMAL);

        // 调参条
        createTrackbar("Blur Kernel", "Circle Detector", &blur_kernel, 30);
        createTrackbar("Canny Thresh", "Circle Detector", &canny_thresh, 100);
        createTrackbar("Hough Accum", "Circle Detector", &hough_accum, 100);
        createTrackbar("Inner Dia(mm)", "Circle Detector", &target_inner_dia, 2000);
        createTrackbar("Outer Dia(mm)", "Circle Detector", &target_outer_dia, 2000);

        depth_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/camera/depth/image_raw", 10, std::bind(&CircleDetectorNode::depth_cb, this, std::placeholders::_1));

        info_sub_ = this->create_subscription<sensor_msgs::msg::CameraInfo>(
            "/camera/depth/camera_info", 10, std::bind(&CircleDetectorNode::info_cb, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "✅ 圆环检测节点启动！");
        RCLCPP_INFO(this->get_logger(), "📏 目标：内径 %d mm | 外径 %d mm", target_inner_dia, target_outer_dia);
    }

   private:
    void info_cb(const sensor_msgs::msg::CameraInfo::SharedPtr msg) {
        fx = msg->k[0];
        fy = msg->k[4];
        cx = msg->k[2];
        cy = msg->k[5];
        has_intrinsic = true;
        RCLCPP_INFO(this->get_logger(), "✅ 已获取内参 fx=%.2f, fy=%.2f, cx=%.2f, cy=%.2f", fx, fy, cx, cy);
    }

    void depth_cb(const sensor_msgs::msg::Image::SharedPtr msg) {
        if (!has_intrinsic) return;

        cv_bridge::CvImagePtr cv_ptr;
        try {
            cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::TYPE_16UC1);
        } catch (...) {
            return;
        }

        Mat depth = cv_ptr->image;
        Mat gray, blur, edges, show;

        // ==============================================
        // 调试步骤1：原始深度转8位灰度图
        // ==============================================
        depth.convertTo(gray, CV_8UC1, 0.1);
        imshow("[DEBUG] Gray Depth", gray);

        // ==============================================
        // 调试步骤2：模糊去噪
        // ==============================================
        int k = getBlurKernel();
        GaussianBlur(gray, blur, Size(k, k), 2);
        imshow("[DEBUG] Blur", blur);

        // ==============================================
        // 调试步骤3：Canny边缘检测
        // ==============================================
        Canny(blur, edges, canny_thresh, canny_thresh * 2);
        imshow("[DEBUG] Canny Edges", edges);

        // 结果图
        cvtColor(gray, show, COLOR_GRAY2BGR);

        // ==============================================
        // 霍夫圆检测
        // ==============================================
        std::vector<Vec3f> circles;
        HoughCircles(blur, circles, HOUGH_GRADIENT, 1, 50, canny_thresh, hough_accum, 1, 1000);

        // ==============================================
        // 先把所有检测到的圆都画出来（红色，调试用）
        // ==============================================
        for (auto& c : circles) {
            int u = cvRound(c[0]);
            int v = cvRound(c[1]);
            int r = cvRound(c[2]);
            circle(show, Point(u, v), r, Scalar(0, 0, 255), 1);
        }

        // ==============================================
        // 筛选目标圆（绿色）
        // ==============================================
        for (auto& c : circles) {
            int u = cvRound(c[0]);
            int v = cvRound(c[1]);
            int r = cvRound(c[2]);

            if (u < 0 || v < 0 || u >= depth.cols || v >= depth.rows) continue;

            uint16_t Z = depth.at<uint16_t>(v, u);
            if (Z < MIN_DETECT_DISTANCE || Z > MAX_DETECT_DISTANCE || Z == 0) continue;

            float real_diameter = 2.0f * r * Z / fx;
            bool is_target = (real_diameter >= target_inner_dia) && (real_diameter <= target_outer_dia);

            if (is_target) {
                float X = (u - cx) * Z / fx;
                float Y = (v - cy) * Z / fy;

                circle(show, Point(u, v), r, Scalar(0, 255, 0), 2);
                circle(show, Point(u, v), 3, Scalar(0, 255, 0), 2);

                RCLCPP_INFO(this->get_logger(), "✅ 目标圆 | 直径:%.1f | Z:%d | 3D:(%.1f,%.1f,%d)", real_diameter, Z, X,
                            Y, Z);
            }
        }

        imshow("Circle Detector", show);
        waitKey(1);
    }

    int getBlurKernel() {
        int k = blur_kernel;
        if (k % 2 == 0) k++;
        return (k < 1) ? 1 : k;
    }

    bool has_intrinsic = false;
    float fx = 0, fy = 0, cx = 0, cy = 0;

    int blur_kernel = BLUR_KERNEL_SIZE;
    int canny_thresh = CANNY_THRESHOLD;
    int hough_accum = HOUGH_ACCUM_THRESH;

    int target_inner_dia;
    int target_outer_dia;

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr depth_sub_;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr info_sub_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CircleDetectorNode>());
    rclcpp::shutdown();
    return 0;
}

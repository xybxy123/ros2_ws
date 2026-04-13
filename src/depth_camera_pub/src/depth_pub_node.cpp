#include <cstdio>
#include <cv_bridge/cv_bridge.hpp>
#include <libobsensor/ObSensor.hpp>
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/camera_info.hpp>  // 加内参消息
#include <sensor_msgs/msg/image.hpp>

class DepthCameraPublisher : public rclcpp::Node {
   public:
    DepthCameraPublisher() : Node("depth_camera_pub_node") {
        publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/camera/depth/image_raw", 10);
        // 发布内参
        info_pub_ = this->create_publisher<sensor_msgs::msg::CameraInfo>("/camera/depth/camera_info", 10);

        context_ = std::make_shared<ob::Context>();
        auto dev_list = context_->queryDeviceList();

        if (dev_list->deviceCount() == 0) {
            RCLCPP_ERROR(this->get_logger(), "未找到相机！");
            return;
        }

        device_ = dev_list->getDevice(0);
        pipeline_ = std::make_shared<ob::Pipeline>(device_);

        auto config = std::make_shared<ob::Config>();
        auto profiles = pipeline_->getStreamProfileList(OB_SENSOR_DEPTH);
        auto depth_profile = profiles->getProfile(0)->as<ob::VideoStreamProfile>();

        config->enableStream(depth_profile);
        pipeline_->start(config);

        // ==========================
        // ✅ 获取深度相机内参
        // ==========================
        auto camera_param = pipeline_->getCameraParam();
        fx = camera_param.depthIntrinsic.fx;
        fy = camera_param.depthIntrinsic.fy;
        cx = camera_param.depthIntrinsic.cx;
        cy = camera_param.depthIntrinsic.cy;

        RCLCPP_INFO(this->get_logger(), "✅ 深度相机内参：");
        RCLCPP_INFO(this->get_logger(), "fx: %.2f, fy: %.2f", fx, fy);
        RCLCPP_INFO(this->get_logger(), "cx: %.2f, cy: %.2f", cx, cy);

        timer_ = this->create_wall_timer(std::chrono::milliseconds(33),
                                         std::bind(&DepthCameraPublisher::timer_callback, this));

        RCLCPP_INFO(this->get_logger(), "✅ 深度相机启动成功！");
        RCLCPP_INFO(this->get_logger(), "分辨率: %dx%d 帧率: %d", depth_profile->width(), depth_profile->height(),
                    depth_profile->fps());
    }

    ~DepthCameraPublisher() { pipeline_->stop(); }

   private:
    void timer_callback() {
        auto frame_set = pipeline_->waitForFrames(100);
        if (!frame_set) return;

        auto depth_frame = frame_set->depthFrame();
        if (!depth_frame) return;

        cv::Mat depth_mat(depth_frame->height(), depth_frame->width(), CV_16UC1, (void*)depth_frame->data());
        auto msg = cv_bridge::CvImage(std_msgs::msg::Header(), "16UC1", depth_mat).toImageMsg();
        msg->header.stamp = this->now();
        msg->header.frame_id = "camera_link";
        publisher_->publish(*msg);

        // 发布内参
        sensor_msgs::msg::CameraInfo info;
        info.header = msg->header;
        info.width = depth_mat.cols;
        info.height = depth_mat.rows;
        info.k[0] = fx;
        info.k[2] = cx;
        info.k[4] = fy;
        info.k[5] = cy;
        info_pub_->publish(info);
    }

    // 内参
    float fx, fy, cx, cy;

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
    rclcpp::Publisher<sensor_msgs::msg::CameraInfo>::SharedPtr info_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::shared_ptr<ob::Context> context_;
    std::shared_ptr<ob::Device> device_;
    std::shared_ptr<ob::Pipeline> pipeline_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DepthCameraPublisher>());
    rclcpp::shutdown();
    return 0;
}

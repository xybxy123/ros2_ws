#include <cstdio>
#include <cv_bridge/cv_bridge.hpp>
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>

class ImagePublisher : public rclcpp::Node {
   public:
    ImagePublisher() : Node("yolo_main_node") {
        // 创建发布者，发布到 /camera/image_raw
        publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/camera/image_raw", 10);

        // 打开摄像头 /dev/video4 (索引通常为 4)
        cap_.open(4);
        if (!cap_.isOpened()) {
            RCLCPP_ERROR(this->get_logger(), "无法打开摄像头 /dev/video4，请检查设备权限或路径！");
            return;
        }

        // 设置定时器，以 30fps 的频率读取并发布
        timer_ =
            this->create_wall_timer(std::chrono::milliseconds(33), std::bind(&ImagePublisher::timer_callback, this));

        RCLCPP_INFO(this->get_logger(), "摄像头节点已启动，正在发布图像...");
    }

   private:
    void timer_callback() {
        cv::Mat frame;
        cap_ >> frame;

        if (!frame.empty()) {
            // 将 OpenCV Mat 转换为 ROS Image 消息
            auto msg = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", frame).toImageMsg();
            msg->header.stamp = this->now();
            msg->header.frame_id = "camera_link";

            publisher_->publish(*msg);
        }
    }

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    cv::VideoCapture cap_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ImagePublisher>());
    rclcpp::shutdown();
    return 0;
}
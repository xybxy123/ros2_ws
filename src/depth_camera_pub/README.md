# 奥比 Orbbec 深度相机 ROS 2 使用教程（纯深度图 + 圆环检测）
**适配设备**：DaBai DCW / DaBai Pro  
**系统**：Ubuntu 22.04  
**ROS 版本**：ROS 2 Jazzy  
**功能**：发布深度图 + 纯深度圆环检测（内径900mm/外径1200mm可配置）

---

## 一、前期准备：安装 Orbbec SDK 与 UDEV 规则
### 1. 下载官方 SDK
```bash
cd ~
git clone https://github.com/Orbbec/OrbbecSDK.git
cd OrbbecSDK
```

### 2. 安装 UDEV 规则（必须，否则无法打开相机）
```bash
cd misc/scripts
sudo chmod +x install_udev_rules.sh
sudo ./install_udev_rules.sh
```

### 3. 编译并安装 SDK
```bash
mkdir build && cd build
cmake ..
make -j$(nproc)
sudo make install
```
安装完成后，库文件位于：  
`~/OrbbecSDK/build/install/`

---

## 二、创建 ROS 2 工作空间（如已有可跳过）
```bash
mkdir -p ~/w_work/ros2_ws/src
cd ~/w_work/ros2_ws
```

---

## 三、创建深度相机发布节点
### 1. 进入 src 目录
```bash
cd ~/w_work/ros2_ws/src
```

### 2. 创建功能包
```bash
ros2 pkg create --build-type ament_cmake depth_camera_pub --dependencies rclcpp sensor_msgs cv_bridge opencv4
```

### 3. 替换源码：`src/depth_camera_pub/src/depth_pub_node.cpp`
```cpp
#include <cstdio>
#include <cv_bridge/cv_bridge.hpp>
#include <libobsensor/ObSensor.hpp>
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>

class DepthCameraPublisher : public rclcpp::Node {
public:
  DepthCameraPublisher() : Node("depth_camera_pub_node") {
    publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/camera/depth/image_raw", 10);

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

    timer_ = this->create_wall_timer(std::chrono::milliseconds(33),
                                    std::bind(&DepthCameraPublisher::timer_callback, this));

    RCLCPP_INFO(this->get_logger(), "✅ 深度相机启动成功！");
    RCLCPP_INFO(this->get_logger(), "分辨率: %dx%d 帧率: %d", 
                depth_profile->width(), depth_profile->height(), depth_profile->fps());
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
  }

  rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
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
```

### 4. 替换 CMakeLists.txt
```cmake
cmake_minimum_required(VERSION 3.8)
project(depth_camera_pub)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(OpenCV_DIR /usr/local/lib/cmake/opencv4/)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV 4 REQUIRED)

include_directories(
  /home/xybxy123/OrbbecSDK/include
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(depth_camera_pub_node src/depth_pub_node.cpp)

ament_target_dependencies(depth_camera_pub_node
  rclcpp
  sensor_msgs
  cv_bridge
  OpenCV
)

target_link_libraries(depth_camera_pub_node
  /home/xybxy123/OrbbecSDK/build/install/lib/libOrbbecSDK.so
  ${OpenCV_LIBS}
)

install(TARGETS
  depth_camera_pub_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
```

---

## 四、创建圆环检测节点
### 1. 创建功能包
```bash
cd ~/w_work/ros2_ws/src
ros2 pkg create --build-type ament_cmake circle_detector --dependencies rclcpp sensor_msgs cv_bridge opencv4
```

### 2. 创建配置头文件
`include/circle_detector/circle_config.hpp`
```cpp
#ifndef CIRCLE_CONFIG_HPP
#define CIRCLE_CONFIG_HPP

// 目标圆环尺寸（mm）
#define TARGET_INNER_DIAMETER  900
#define TARGET_OUTER_DIAMETER  1200

// 检测距离范围
#define MIN_DETECT_DISTANCE    300
#define MAX_DETECT_DISTANCE    2000

// 算法参数
#define BLUR_KERNEL_SIZE       9
#define CANNY_THRESHOLD        30
#define HOUGH_ACCUM_THRESH     50
#define DEFAULT_MIN_RADIUS     20
#define DEFAULT_MAX_RADIUS     300

#endif
```

### 3. 替换源码：`src/circle_detector.cpp`
```cpp
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "cv_bridge/cv_bridge.hpp"
#include "opencv2/opencv.hpp"
#include "circle_detector/circle_config.hpp"

using namespace cv;

class CircleDetectorNode : public rclcpp::Node {
public:
  CircleDetectorNode() : Node("circle_detector_node") {
    depth_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
      "/camera/depth/image_raw", 10,
      std::bind(&CircleDetectorNode::depth_cb, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "✅ 圆环检测节点启动");
    RCLCPP_INFO(this->get_logger(), "目标圆环：内径 %d mm 外径 %d mm",
                TARGET_INNER_DIAMETER, TARGET_OUTER_DIAMETER);
  }

private:
  void depth_cb(const sensor_msgs::msg::Image::SharedPtr msg) {
    cv_bridge::CvImagePtr cv_ptr;
    try {
      cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::TYPE_16UC1);
    } catch (...) { return; }

    Mat depth = cv_ptr->image;
    Mat gray, show;
    depth.convertTo(gray, CV_8UC1, 0.1);
    GaussianBlur(gray, gray, Size(BLUR_KERNEL_SIZE, BLUR_KERNEL_SIZE), 2);
    cvtColor(gray, show, COLOR_GRAY2BGR);

    std::vector<Vec3f> circles;
    HoughCircles(gray, circles, HOUGH_GRADIENT, 1, 50,
                 CANNY_THRESHOLD, HOUGH_ACCUM_THRESH,
                 DEFAULT_MIN_RADIUS, DEFAULT_MAX_RADIUS);

    for (auto &c : circles) {
      int u = cvRound(c[0]);
      int v = cvRound(c[1]);
      int r = cvRound(c[2]);
      if (u < 0 || v < 0 || u >= depth.cols || v >= depth.rows) continue;

      uint16_t z = depth.at<uint16_t>(v, u);
      if (z < MIN_DETECT_DISTANCE || z > MAX_DETECT_DISTANCE) continue;

      float real_d = 2.0f * r * z / 500.0f;
      bool match = (real_d >= TARGET_INNER_DIAMETER - 100 && real_d <= TARGET_OUTER_DIAMETER + 100);

      if (match) {
        circle(show, Point(u, v), r, Scalar(0,255,0), 2);
        circle(show, Point(u, v), 3, Scalar(0,255,0), -1);
        RCLCPP_INFO(this->get_logger(), "🎯 目标圆环 半径:%d 深度:%d mm 直径:%.1f mm",
                    r, z, real_d);
      }
    }

    imshow("Circle Detector", show);
    waitKey(1);
  }

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr depth_sub_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CircleDetectorNode>());
  rclcpp::shutdown();
  return 0;
}
```

### 4. 替换 CMakeLists.txt
```cmake
cmake_minimum_required(VERSION 3.8)
project(circle_detector)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(
  include
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(circle_detector_node src/circle_detector.cpp)

ament_target_dependencies(circle_detector_node
  rclcpp
  sensor_msgs
  cv_bridge
  OpenCV
)

target_link_libraries(circle_detector_node
  ${OpenCV_LIBS}
)

install(TARGETS
  circle_detector_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/ DESTINATION include)
ament_package()
```

---

## 五、编译 & 运行
### 1. 编译
```bash
cd ~/w_work/ros2_ws
colcon build --packages-select depth_camera_pub circle_detector
source install/setup.bash
```

### 2. 配置动态库（仅第一次）
```bash
echo "/home/xybxy123/OrbbecSDK/build/install/lib" | sudo tee /etc/ld.so.conf.d/orbbec.conf
sudo ldconfig
```

### 3. 启动深度相机
```bash
ros2 run depth_camera_pub depth_camera_pub_node
```

### 4. 启动圆环检测
```bash
ros2 run circle_detector circle_detector_node
```

---

## 六、效果说明
- 深度图话题：`/camera/depth/image_raw`  
- 自动识别：内径900mm、外径1200mm圆环  
- 窗口显示：绿色圆心 + 红色圆环  
- 终端输出：半径、深度、真实物理直径  

---

## 七、参数修改（头文件配置）
修改文件：  
`include/circle_detector/circle_config.hpp`
```cpp
#define TARGET_INNER_DIAMETER  900    // 内径
#define TARGET_OUTER_DIAMETER  1200   // 外径
```

---

[产品手册](https://my.feishu.cn/file/RaDubmzXXoHfPuxeauUcgsg0noc)


[函数接口](https://www.orbbec.com.cn/index/Gemini330/info.html?cate=119&id=98)
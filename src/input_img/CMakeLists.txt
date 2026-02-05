cmake_minimum_required(VERSION 3.8)
project(input_img)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 显式指定OpenCV路径
set(OpenCV_DIR /usr/local/lib/cmake/opencv4/)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED) # 必须包含，用于图像转换
find_package(OpenCV 4 REQUIRED COMPONENTS core highgui videoio imgproc dnn)

include_directories(
  include
  ${cv_bridge_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(yolo_main_node
  src/yolo_node.cpp
  src/predict.cpp
  src/track.cpp
)

# 绑定依赖
ament_target_dependencies(yolo_main_node
  rclcpp
  sensor_msgs
  cv_bridge
)

target_link_libraries(yolo_main_node
  ${OpenCV_LIBS}
)

install(TARGETS
  yolo_main_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
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
  /home/xybxy123/soft/OrbbecSDK/include
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(depth_camera_pub_node src/depth_pub_node.cpp)

ament_target_dependencies(depth_camera_pub_node
  rclcpp
  sensor_msgs
  cv_bridge
  OpenCV
)

# 正确的库！！！！
target_link_libraries(depth_camera_pub_node
  /home/xybxy123/soft/OrbbecSDK/build/install/lib/libOrbbecSDK.so
  ${OpenCV_LIBS}
)

install(TARGETS
  depth_camera_pub_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

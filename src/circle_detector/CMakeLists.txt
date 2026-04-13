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

install(
  DIRECTORY include/
  DESTINATION include
)

ament_package()

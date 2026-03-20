// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_yolos_cpp:msg/OBBDetection2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/obb_detection2_d_array.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__BUILDER_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_yolos_cpp/msg/detail/obb_detection2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_yolos_cpp
{

namespace msg
{

namespace builder
{

class Init_OBBDetection2DArray_detections
{
public:
  explicit Init_OBBDetection2DArray_detections(::ros2_yolos_cpp::msg::OBBDetection2DArray & msg)
  : msg_(msg)
  {}
  ::ros2_yolos_cpp::msg::OBBDetection2DArray detections(::ros2_yolos_cpp::msg::OBBDetection2DArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OBBDetection2DArray msg_;
};

class Init_OBBDetection2DArray_header
{
public:
  Init_OBBDetection2DArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OBBDetection2DArray_detections header(::ros2_yolos_cpp::msg::OBBDetection2DArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OBBDetection2DArray_detections(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OBBDetection2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_yolos_cpp::msg::OBBDetection2DArray>()
{
  return ros2_yolos_cpp::msg::builder::Init_OBBDetection2DArray_header();
}

}  // namespace ros2_yolos_cpp

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__BUILDER_HPP_

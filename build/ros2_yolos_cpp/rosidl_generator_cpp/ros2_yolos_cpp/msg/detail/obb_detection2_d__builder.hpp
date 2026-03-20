// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_yolos_cpp:msg/OBBDetection2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/obb_detection2_d.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__BUILDER_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_yolos_cpp
{

namespace msg
{

namespace builder
{

class Init_OBBDetection2D_score
{
public:
  explicit Init_OBBDetection2D_score(::ros2_yolos_cpp::msg::OBBDetection2D & msg)
  : msg_(msg)
  {}
  ::ros2_yolos_cpp::msg::OBBDetection2D score(::ros2_yolos_cpp::msg::OBBDetection2D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OBBDetection2D msg_;
};

class Init_OBBDetection2D_class_name
{
public:
  explicit Init_OBBDetection2D_class_name(::ros2_yolos_cpp::msg::OBBDetection2D & msg)
  : msg_(msg)
  {}
  Init_OBBDetection2D_score class_name(::ros2_yolos_cpp::msg::OBBDetection2D::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_OBBDetection2D_score(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OBBDetection2D msg_;
};

class Init_OBBDetection2D_class_id
{
public:
  explicit Init_OBBDetection2D_class_id(::ros2_yolos_cpp::msg::OBBDetection2D & msg)
  : msg_(msg)
  {}
  Init_OBBDetection2D_class_name class_id(::ros2_yolos_cpp::msg::OBBDetection2D::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_OBBDetection2D_class_name(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OBBDetection2D msg_;
};

class Init_OBBDetection2D_bbox
{
public:
  explicit Init_OBBDetection2D_bbox(::ros2_yolos_cpp::msg::OBBDetection2D & msg)
  : msg_(msg)
  {}
  Init_OBBDetection2D_class_id bbox(::ros2_yolos_cpp::msg::OBBDetection2D::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_OBBDetection2D_class_id(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OBBDetection2D msg_;
};

class Init_OBBDetection2D_header
{
public:
  Init_OBBDetection2D_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OBBDetection2D_bbox header(::ros2_yolos_cpp::msg::OBBDetection2D::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OBBDetection2D_bbox(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OBBDetection2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_yolos_cpp::msg::OBBDetection2D>()
{
  return ros2_yolos_cpp::msg::builder::Init_OBBDetection2D_header();
}

}  // namespace ros2_yolos_cpp

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__BUILDER_HPP_

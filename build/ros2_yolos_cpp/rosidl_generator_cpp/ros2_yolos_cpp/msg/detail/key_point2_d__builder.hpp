// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_yolos_cpp:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/key_point2_d.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__BUILDER_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_yolos_cpp/msg/detail/key_point2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_yolos_cpp
{

namespace msg
{

namespace builder
{

class Init_KeyPoint2D_id
{
public:
  explicit Init_KeyPoint2D_id(::ros2_yolos_cpp::msg::KeyPoint2D & msg)
  : msg_(msg)
  {}
  ::ros2_yolos_cpp::msg::KeyPoint2D id(::ros2_yolos_cpp::msg::KeyPoint2D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2D msg_;
};

class Init_KeyPoint2D_confidence
{
public:
  explicit Init_KeyPoint2D_confidence(::ros2_yolos_cpp::msg::KeyPoint2D & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2D_id confidence(::ros2_yolos_cpp::msg::KeyPoint2D::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_KeyPoint2D_id(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2D msg_;
};

class Init_KeyPoint2D_y
{
public:
  explicit Init_KeyPoint2D_y(::ros2_yolos_cpp::msg::KeyPoint2D & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2D_confidence y(::ros2_yolos_cpp::msg::KeyPoint2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_KeyPoint2D_confidence(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2D msg_;
};

class Init_KeyPoint2D_x
{
public:
  Init_KeyPoint2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint2D_y x(::ros2_yolos_cpp::msg::KeyPoint2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_KeyPoint2D_y(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_yolos_cpp::msg::KeyPoint2D>()
{
  return ros2_yolos_cpp::msg::builder::Init_KeyPoint2D_x();
}

}  // namespace ros2_yolos_cpp

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__BUILDER_HPP_

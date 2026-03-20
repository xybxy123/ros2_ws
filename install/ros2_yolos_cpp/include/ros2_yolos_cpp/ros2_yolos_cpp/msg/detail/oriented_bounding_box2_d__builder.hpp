// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_yolos_cpp:msg/OrientedBoundingBox2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/oriented_bounding_box2_d.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__BUILDER_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_yolos_cpp
{

namespace msg
{

namespace builder
{

class Init_OrientedBoundingBox2D_theta
{
public:
  explicit Init_OrientedBoundingBox2D_theta(::ros2_yolos_cpp::msg::OrientedBoundingBox2D & msg)
  : msg_(msg)
  {}
  ::ros2_yolos_cpp::msg::OrientedBoundingBox2D theta(::ros2_yolos_cpp::msg::OrientedBoundingBox2D::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OrientedBoundingBox2D msg_;
};

class Init_OrientedBoundingBox2D_size_y
{
public:
  explicit Init_OrientedBoundingBox2D_size_y(::ros2_yolos_cpp::msg::OrientedBoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_OrientedBoundingBox2D_theta size_y(::ros2_yolos_cpp::msg::OrientedBoundingBox2D::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return Init_OrientedBoundingBox2D_theta(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OrientedBoundingBox2D msg_;
};

class Init_OrientedBoundingBox2D_size_x
{
public:
  explicit Init_OrientedBoundingBox2D_size_x(::ros2_yolos_cpp::msg::OrientedBoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_OrientedBoundingBox2D_size_y size_x(::ros2_yolos_cpp::msg::OrientedBoundingBox2D::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_OrientedBoundingBox2D_size_y(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OrientedBoundingBox2D msg_;
};

class Init_OrientedBoundingBox2D_center
{
public:
  Init_OrientedBoundingBox2D_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrientedBoundingBox2D_size_x center(::ros2_yolos_cpp::msg::OrientedBoundingBox2D::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_OrientedBoundingBox2D_size_x(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::OrientedBoundingBox2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_yolos_cpp::msg::OrientedBoundingBox2D>()
{
  return ros2_yolos_cpp::msg::builder::Init_OrientedBoundingBox2D_center();
}

}  // namespace ros2_yolos_cpp

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__BUILDER_HPP_

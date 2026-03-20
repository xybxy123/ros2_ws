// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/key_point2_d_array.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_yolos_cpp
{

namespace msg
{

namespace builder
{

class Init_KeyPoint2DArray_class_id
{
public:
  explicit Init_KeyPoint2DArray_class_id(::ros2_yolos_cpp::msg::KeyPoint2DArray & msg)
  : msg_(msg)
  {}
  ::ros2_yolos_cpp::msg::KeyPoint2DArray class_id(::ros2_yolos_cpp::msg::KeyPoint2DArray::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2DArray msg_;
};

class Init_KeyPoint2DArray_confidence
{
public:
  explicit Init_KeyPoint2DArray_confidence(::ros2_yolos_cpp::msg::KeyPoint2DArray & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2DArray_class_id confidence(::ros2_yolos_cpp::msg::KeyPoint2DArray::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_KeyPoint2DArray_class_id(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2DArray msg_;
};

class Init_KeyPoint2DArray_bounding_box_size_y
{
public:
  explicit Init_KeyPoint2DArray_bounding_box_size_y(::ros2_yolos_cpp::msg::KeyPoint2DArray & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2DArray_confidence bounding_box_size_y(::ros2_yolos_cpp::msg::KeyPoint2DArray::_bounding_box_size_y_type arg)
  {
    msg_.bounding_box_size_y = std::move(arg);
    return Init_KeyPoint2DArray_confidence(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2DArray msg_;
};

class Init_KeyPoint2DArray_bounding_box_size_x
{
public:
  explicit Init_KeyPoint2DArray_bounding_box_size_x(::ros2_yolos_cpp::msg::KeyPoint2DArray & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2DArray_bounding_box_size_y bounding_box_size_x(::ros2_yolos_cpp::msg::KeyPoint2DArray::_bounding_box_size_x_type arg)
  {
    msg_.bounding_box_size_x = std::move(arg);
    return Init_KeyPoint2DArray_bounding_box_size_y(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2DArray msg_;
};

class Init_KeyPoint2DArray_bounding_box_center
{
public:
  explicit Init_KeyPoint2DArray_bounding_box_center(::ros2_yolos_cpp::msg::KeyPoint2DArray & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2DArray_bounding_box_size_x bounding_box_center(::ros2_yolos_cpp::msg::KeyPoint2DArray::_bounding_box_center_type arg)
  {
    msg_.bounding_box_center = std::move(arg);
    return Init_KeyPoint2DArray_bounding_box_size_x(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2DArray msg_;
};

class Init_KeyPoint2DArray_keypoints
{
public:
  explicit Init_KeyPoint2DArray_keypoints(::ros2_yolos_cpp::msg::KeyPoint2DArray & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2DArray_bounding_box_center keypoints(::ros2_yolos_cpp::msg::KeyPoint2DArray::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return Init_KeyPoint2DArray_bounding_box_center(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2DArray msg_;
};

class Init_KeyPoint2DArray_header
{
public:
  Init_KeyPoint2DArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint2DArray_keypoints header(::ros2_yolos_cpp::msg::KeyPoint2DArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KeyPoint2DArray_keypoints(msg_);
  }

private:
  ::ros2_yolos_cpp::msg::KeyPoint2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_yolos_cpp::msg::KeyPoint2DArray>()
{
  return ros2_yolos_cpp::msg::builder::Init_KeyPoint2DArray_header();
}

}  // namespace ros2_yolos_cpp

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_

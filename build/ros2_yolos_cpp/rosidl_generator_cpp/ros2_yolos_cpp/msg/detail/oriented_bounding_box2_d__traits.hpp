// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_yolos_cpp:msg/OrientedBoundingBox2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/oriented_bounding_box2_d.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__TRAITS_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace ros2_yolos_cpp
{

namespace msg
{

inline void to_flow_style_yaml(
  const OrientedBoundingBox2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: size_x
  {
    out << "size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.size_x, out);
    out << ", ";
  }

  // member: size_y
  {
    out << "size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.size_y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrientedBoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: size_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.size_x, out);
    out << "\n";
  }

  // member: size_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.size_y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OrientedBoundingBox2D & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_yolos_cpp

namespace rosidl_generator_traits
{

[[deprecated("use ros2_yolos_cpp::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_yolos_cpp::msg::OrientedBoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_yolos_cpp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_yolos_cpp::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_yolos_cpp::msg::OrientedBoundingBox2D & msg)
{
  return ros2_yolos_cpp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_yolos_cpp::msg::OrientedBoundingBox2D>()
{
  return "ros2_yolos_cpp::msg::OrientedBoundingBox2D";
}

template<>
inline const char * name<ros2_yolos_cpp::msg::OrientedBoundingBox2D>()
{
  return "ros2_yolos_cpp/msg/OrientedBoundingBox2D";
}

template<>
struct has_fixed_size<ros2_yolos_cpp::msg::OrientedBoundingBox2D>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<ros2_yolos_cpp::msg::OrientedBoundingBox2D>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<ros2_yolos_cpp::msg::OrientedBoundingBox2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__TRAITS_HPP_

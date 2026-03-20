// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_yolos_cpp:msg/OBBDetection2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/obb_detection2_d.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__TRAITS_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bbox'
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__traits.hpp"

namespace ros2_yolos_cpp
{

namespace msg
{

inline void to_flow_style_yaml(
  const OBBDetection2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OBBDetection2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OBBDetection2D & msg, bool use_flow_style = false)
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
  const ros2_yolos_cpp::msg::OBBDetection2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_yolos_cpp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_yolos_cpp::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_yolos_cpp::msg::OBBDetection2D & msg)
{
  return ros2_yolos_cpp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_yolos_cpp::msg::OBBDetection2D>()
{
  return "ros2_yolos_cpp::msg::OBBDetection2D";
}

template<>
inline const char * name<ros2_yolos_cpp::msg::OBBDetection2D>()
{
  return "ros2_yolos_cpp/msg/OBBDetection2D";
}

template<>
struct has_fixed_size<ros2_yolos_cpp::msg::OBBDetection2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_yolos_cpp::msg::OBBDetection2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_yolos_cpp::msg::OBBDetection2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_yolos_cpp:msg/OBBDetection2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/obb_detection2_d_array.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__TRAITS_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_yolos_cpp/msg/detail/obb_detection2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__traits.hpp"

namespace ros2_yolos_cpp
{

namespace msg
{

inline void to_flow_style_yaml(
  const OBBDetection2DArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OBBDetection2DArray & msg,
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

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OBBDetection2DArray & msg, bool use_flow_style = false)
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
  const ros2_yolos_cpp::msg::OBBDetection2DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_yolos_cpp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_yolos_cpp::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_yolos_cpp::msg::OBBDetection2DArray & msg)
{
  return ros2_yolos_cpp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_yolos_cpp::msg::OBBDetection2DArray>()
{
  return "ros2_yolos_cpp::msg::OBBDetection2DArray";
}

template<>
inline const char * name<ros2_yolos_cpp::msg::OBBDetection2DArray>()
{
  return "ros2_yolos_cpp/msg/OBBDetection2DArray";
}

template<>
struct has_fixed_size<ros2_yolos_cpp::msg::OBBDetection2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_yolos_cpp::msg::OBBDetection2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_yolos_cpp::msg::OBBDetection2DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__TRAITS_HPP_

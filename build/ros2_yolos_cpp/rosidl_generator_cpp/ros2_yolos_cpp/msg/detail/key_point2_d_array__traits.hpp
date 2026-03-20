// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/key_point2_d_array.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__TRAITS_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'keypoints'
#include "ros2_yolos_cpp/msg/detail/key_point2_d__traits.hpp"
// Member 'bounding_box_center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace ros2_yolos_cpp
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyPoint2DArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: keypoints
  {
    if (msg.keypoints.size() == 0) {
      out << "keypoints: []";
    } else {
      out << "keypoints: [";
      size_t pending_items = msg.keypoints.size();
      for (auto item : msg.keypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bounding_box_center
  {
    out << "bounding_box_center: ";
    to_flow_style_yaml(msg.bounding_box_center, out);
    out << ", ";
  }

  // member: bounding_box_size_x
  {
    out << "bounding_box_size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_size_x, out);
    out << ", ";
  }

  // member: bounding_box_size_y
  {
    out << "bounding_box_size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_size_y, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyPoint2DArray & msg,
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

  // member: keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keypoints.size() == 0) {
      out << "keypoints: []\n";
    } else {
      out << "keypoints:\n";
      for (auto item : msg.keypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bounding_box_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_center:\n";
    to_block_style_yaml(msg.bounding_box_center, out, indentation + 2);
  }

  // member: bounding_box_size_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_size_x, out);
    out << "\n";
  }

  // member: bounding_box_size_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_size_y, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyPoint2DArray & msg, bool use_flow_style = false)
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
  const ros2_yolos_cpp::msg::KeyPoint2DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_yolos_cpp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_yolos_cpp::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_yolos_cpp::msg::KeyPoint2DArray & msg)
{
  return ros2_yolos_cpp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_yolos_cpp::msg::KeyPoint2DArray>()
{
  return "ros2_yolos_cpp::msg::KeyPoint2DArray";
}

template<>
inline const char * name<ros2_yolos_cpp::msg::KeyPoint2DArray>()
{
  return "ros2_yolos_cpp/msg/KeyPoint2DArray";
}

template<>
struct has_fixed_size<ros2_yolos_cpp::msg::KeyPoint2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_yolos_cpp::msg::KeyPoint2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_yolos_cpp::msg::KeyPoint2DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__TRAITS_HPP_

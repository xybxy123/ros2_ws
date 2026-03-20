// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__functions.h"
#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_yolos_cpp
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KeyPoint2DArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_yolos_cpp::msg::KeyPoint2DArray(_init);
}

void KeyPoint2DArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_yolos_cpp::msg::KeyPoint2DArray *>(message_memory);
  typed_message->~KeyPoint2DArray();
}

size_t size_function__KeyPoint2DArray__keypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_yolos_cpp::msg::KeyPoint2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KeyPoint2DArray__keypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_yolos_cpp::msg::KeyPoint2D> *>(untyped_member);
  return &member[index];
}

void * get_function__KeyPoint2DArray__keypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_yolos_cpp::msg::KeyPoint2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__KeyPoint2DArray__keypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_yolos_cpp::msg::KeyPoint2D *>(
    get_const_function__KeyPoint2DArray__keypoints(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_yolos_cpp::msg::KeyPoint2D *>(untyped_value);
  value = item;
}

void assign_function__KeyPoint2DArray__keypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_yolos_cpp::msg::KeyPoint2D *>(
    get_function__KeyPoint2DArray__keypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_yolos_cpp::msg::KeyPoint2D *>(untyped_value);
  item = value;
}

void resize_function__KeyPoint2DArray__keypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_yolos_cpp::msg::KeyPoint2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyPoint2DArray_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::KeyPoint2DArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "keypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_yolos_cpp::msg::KeyPoint2D>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::KeyPoint2DArray, keypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__KeyPoint2DArray__keypoints,  // size() function pointer
    get_const_function__KeyPoint2DArray__keypoints,  // get_const(index) function pointer
    get_function__KeyPoint2DArray__keypoints,  // get(index) function pointer
    fetch_function__KeyPoint2DArray__keypoints,  // fetch(index, &value) function pointer
    assign_function__KeyPoint2DArray__keypoints,  // assign(index, value) function pointer
    resize_function__KeyPoint2DArray__keypoints  // resize(index) function pointer
  },
  {
    "bounding_box_center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::KeyPoint2DArray, bounding_box_center),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounding_box_size_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::KeyPoint2DArray, bounding_box_size_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounding_box_size_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::KeyPoint2DArray, bounding_box_size_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::KeyPoint2DArray, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "class_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::KeyPoint2DArray, class_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyPoint2DArray_message_members = {
  "ros2_yolos_cpp::msg",  // message namespace
  "KeyPoint2DArray",  // message name
  7,  // number of fields
  sizeof(ros2_yolos_cpp::msg::KeyPoint2DArray),
  false,  // has_any_key_member_
  KeyPoint2DArray_message_member_array,  // message members
  KeyPoint2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyPoint2DArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyPoint2DArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyPoint2DArray_message_members,
  get_message_typesupport_handle_function,
  &ros2_yolos_cpp__msg__KeyPoint2DArray__get_type_hash,
  &ros2_yolos_cpp__msg__KeyPoint2DArray__get_type_description,
  &ros2_yolos_cpp__msg__KeyPoint2DArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_yolos_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_yolos_cpp::msg::KeyPoint2DArray>()
{
  return &::ros2_yolos_cpp::msg::rosidl_typesupport_introspection_cpp::KeyPoint2DArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_yolos_cpp, msg, KeyPoint2DArray)() {
  return &::ros2_yolos_cpp::msg::rosidl_typesupport_introspection_cpp::KeyPoint2DArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

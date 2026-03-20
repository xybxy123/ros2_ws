// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_yolos_cpp:msg/OrientedBoundingBox2D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__functions.h"
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__struct.hpp"
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

void OrientedBoundingBox2D_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_yolos_cpp::msg::OrientedBoundingBox2D(_init);
}

void OrientedBoundingBox2D_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_yolos_cpp::msg::OrientedBoundingBox2D *>(message_memory);
  typed_message->~OrientedBoundingBox2D();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OrientedBoundingBox2D_message_member_array[4] = {
  {
    "center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::OrientedBoundingBox2D, center),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "size_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::OrientedBoundingBox2D, size_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "size_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::OrientedBoundingBox2D, size_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp::msg::OrientedBoundingBox2D, theta),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OrientedBoundingBox2D_message_members = {
  "ros2_yolos_cpp::msg",  // message namespace
  "OrientedBoundingBox2D",  // message name
  4,  // number of fields
  sizeof(ros2_yolos_cpp::msg::OrientedBoundingBox2D),
  false,  // has_any_key_member_
  OrientedBoundingBox2D_message_member_array,  // message members
  OrientedBoundingBox2D_init_function,  // function to initialize message memory (memory has to be allocated)
  OrientedBoundingBox2D_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OrientedBoundingBox2D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OrientedBoundingBox2D_message_members,
  get_message_typesupport_handle_function,
  &ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_hash,
  &ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_description,
  &ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_yolos_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_yolos_cpp::msg::OrientedBoundingBox2D>()
{
  return &::ros2_yolos_cpp::msg::rosidl_typesupport_introspection_cpp::OrientedBoundingBox2D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_yolos_cpp, msg, OrientedBoundingBox2D)() {
  return &::ros2_yolos_cpp::msg::rosidl_typesupport_introspection_cpp::OrientedBoundingBox2D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

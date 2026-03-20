// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_yolos_cpp:msg/OrientedBoundingBox2D.idl
// generated code does not contain a copyright notice
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_yolos_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__struct.h"
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // center

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_yolos_cpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _OrientedBoundingBox2D__ros_msg_type = ros2_yolos_cpp__msg__OrientedBoundingBox2D;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
bool cdr_serialize_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
  const ros2_yolos_cpp__msg__OrientedBoundingBox2D * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: center
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->center, cdr);
  }

  // Field name: size_x
  {
    cdr << ros_message->size_x;
  }

  // Field name: size_y
  {
    cdr << ros_message->size_y;
  }

  // Field name: theta
  {
    cdr << ros_message->theta;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
bool cdr_deserialize_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
  eprosima::fastcdr::Cdr & cdr,
  ros2_yolos_cpp__msg__OrientedBoundingBox2D * ros_message)
{
  // Field name: center
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->center);
  }

  // Field name: size_x
  {
    cdr >> ros_message->size_x;
  }

  // Field name: size_y
  {
    cdr >> ros_message->size_y;
  }

  // Field name: theta
  {
    cdr >> ros_message->theta;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t get_serialized_size_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OrientedBoundingBox2D__ros_msg_type * ros_message = static_cast<const _OrientedBoundingBox2D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: center
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->center), current_alignment);

  // Field name: size_x
  {
    size_t item_size = sizeof(ros_message->size_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: size_y
  {
    size_t item_size = sizeof(ros_message->size_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: theta
  {
    size_t item_size = sizeof(ros_message->theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t max_serialized_size_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: size_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: size_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: theta
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_yolos_cpp__msg__OrientedBoundingBox2D;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
bool cdr_serialize_key_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
  const ros2_yolos_cpp__msg__OrientedBoundingBox2D * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: center
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->center, cdr);
  }

  // Field name: size_x
  {
    cdr << ros_message->size_x;
  }

  // Field name: size_y
  {
    cdr << ros_message->size_y;
  }

  // Field name: theta
  {
    cdr << ros_message->theta;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t get_serialized_size_key_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OrientedBoundingBox2D__ros_msg_type * ros_message = static_cast<const _OrientedBoundingBox2D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: center
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->center), current_alignment);

  // Field name: size_x
  {
    size_t item_size = sizeof(ros_message->size_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: size_y
  {
    size_t item_size = sizeof(ros_message->size_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: theta
  {
    size_t item_size = sizeof(ros_message->theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t max_serialized_size_key_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: size_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: size_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: theta
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_yolos_cpp__msg__OrientedBoundingBox2D;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _OrientedBoundingBox2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros2_yolos_cpp__msg__OrientedBoundingBox2D * ros_message = static_cast<const ros2_yolos_cpp__msg__OrientedBoundingBox2D *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros2_yolos_cpp__msg__OrientedBoundingBox2D(ros_message, cdr);
}

static bool _OrientedBoundingBox2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros2_yolos_cpp__msg__OrientedBoundingBox2D * ros_message = static_cast<ros2_yolos_cpp__msg__OrientedBoundingBox2D *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros2_yolos_cpp__msg__OrientedBoundingBox2D(cdr, ros_message);
}

static uint32_t _OrientedBoundingBox2D__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
      untyped_ros_message, 0));
}

static size_t _OrientedBoundingBox2D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_yolos_cpp__msg__OrientedBoundingBox2D(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OrientedBoundingBox2D = {
  "ros2_yolos_cpp::msg",
  "OrientedBoundingBox2D",
  _OrientedBoundingBox2D__cdr_serialize,
  _OrientedBoundingBox2D__cdr_deserialize,
  _OrientedBoundingBox2D__get_serialized_size,
  _OrientedBoundingBox2D__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _OrientedBoundingBox2D__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OrientedBoundingBox2D,
  get_message_typesupport_handle_function,
  &ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_hash,
  &ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_description,
  &ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_yolos_cpp, msg, OrientedBoundingBox2D)() {
  return &_OrientedBoundingBox2D__type_support;
}

#if defined(__cplusplus)
}
#endif

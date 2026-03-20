// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_yolos_cpp:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

#include "ros2_yolos_cpp/msg/detail/key_point2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_yolos_cpp
const rosidl_type_hash_t *
ros2_yolos_cpp__msg__KeyPoint2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x12, 0x06, 0xf4, 0x14, 0x8b, 0x3e, 0x48,
      0x8a, 0xbe, 0x39, 0x39, 0xc2, 0x72, 0x40, 0xd1,
      0x50, 0xb7, 0xab, 0x2d, 0x21, 0xa7, 0x98, 0xd1,
      0xff, 0x55, 0xb4, 0xb8, 0xf7, 0x43, 0xd1, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2_yolos_cpp__msg__KeyPoint2D__TYPE_NAME[] = "ros2_yolos_cpp/msg/KeyPoint2D";

// Define type names, field names, and default values
static char ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__x[] = "x";
static char ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__y[] = "y";
static char ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__confidence[] = "confidence";
static char ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field ros2_yolos_cpp__msg__KeyPoint2D__FIELDS[] = {
  {
    {ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__KeyPoint2D__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_yolos_cpp__msg__KeyPoint2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_yolos_cpp__msg__KeyPoint2D__TYPE_NAME, 29, 29},
      {ros2_yolos_cpp__msg__KeyPoint2D__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# KeyPoint2D.msg\n"
  "# A single 2D keypoint with confidence\n"
  "\n"
  "# X coordinate in pixels\n"
  "float64 x\n"
  "\n"
  "# Y coordinate in pixels\n"
  "float64 y\n"
  "\n"
  "# Confidence score (0.0 - 1.0)\n"
  "float64 confidence\n"
  "\n"
  "# Keypoint index (according to COCO format)\n"
  "int32 id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_yolos_cpp__msg__KeyPoint2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_yolos_cpp__msg__KeyPoint2D__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 233, 233},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_yolos_cpp__msg__KeyPoint2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_yolos_cpp__msg__KeyPoint2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

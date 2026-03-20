// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_yolos_cpp:msg/OBBDetection2D.idl
// generated code does not contain a copyright notice
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bbox`
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__functions.h"
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_yolos_cpp__msg__OBBDetection2D__init(ros2_yolos_cpp__msg__OBBDetection2D * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_yolos_cpp__msg__OBBDetection2D__fini(msg);
    return false;
  }
  // bbox
  if (!ros2_yolos_cpp__msg__OrientedBoundingBox2D__init(&msg->bbox)) {
    ros2_yolos_cpp__msg__OBBDetection2D__fini(msg);
    return false;
  }
  // class_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    ros2_yolos_cpp__msg__OBBDetection2D__fini(msg);
    return false;
  }
  // score
  return true;
}

void
ros2_yolos_cpp__msg__OBBDetection2D__fini(ros2_yolos_cpp__msg__OBBDetection2D * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bbox
  ros2_yolos_cpp__msg__OrientedBoundingBox2D__fini(&msg->bbox);
  // class_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // score
}

bool
ros2_yolos_cpp__msg__OBBDetection2D__are_equal(const ros2_yolos_cpp__msg__OBBDetection2D * lhs, const ros2_yolos_cpp__msg__OBBDetection2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // bbox
  if (!ros2_yolos_cpp__msg__OrientedBoundingBox2D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  return true;
}

bool
ros2_yolos_cpp__msg__OBBDetection2D__copy(
  const ros2_yolos_cpp__msg__OBBDetection2D * input,
  ros2_yolos_cpp__msg__OBBDetection2D * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // bbox
  if (!ros2_yolos_cpp__msg__OrientedBoundingBox2D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // class_id
  output->class_id = input->class_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // score
  output->score = input->score;
  return true;
}

ros2_yolos_cpp__msg__OBBDetection2D *
ros2_yolos_cpp__msg__OBBDetection2D__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_yolos_cpp__msg__OBBDetection2D * msg = (ros2_yolos_cpp__msg__OBBDetection2D *)allocator.allocate(sizeof(ros2_yolos_cpp__msg__OBBDetection2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_yolos_cpp__msg__OBBDetection2D));
  bool success = ros2_yolos_cpp__msg__OBBDetection2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_yolos_cpp__msg__OBBDetection2D__destroy(ros2_yolos_cpp__msg__OBBDetection2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_yolos_cpp__msg__OBBDetection2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_yolos_cpp__msg__OBBDetection2D__Sequence__init(ros2_yolos_cpp__msg__OBBDetection2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_yolos_cpp__msg__OBBDetection2D * data = NULL;

  if (size) {
    data = (ros2_yolos_cpp__msg__OBBDetection2D *)allocator.zero_allocate(size, sizeof(ros2_yolos_cpp__msg__OBBDetection2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_yolos_cpp__msg__OBBDetection2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_yolos_cpp__msg__OBBDetection2D__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_yolos_cpp__msg__OBBDetection2D__Sequence__fini(ros2_yolos_cpp__msg__OBBDetection2D__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_yolos_cpp__msg__OBBDetection2D__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_yolos_cpp__msg__OBBDetection2D__Sequence *
ros2_yolos_cpp__msg__OBBDetection2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_yolos_cpp__msg__OBBDetection2D__Sequence * array = (ros2_yolos_cpp__msg__OBBDetection2D__Sequence *)allocator.allocate(sizeof(ros2_yolos_cpp__msg__OBBDetection2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_yolos_cpp__msg__OBBDetection2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_yolos_cpp__msg__OBBDetection2D__Sequence__destroy(ros2_yolos_cpp__msg__OBBDetection2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_yolos_cpp__msg__OBBDetection2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_yolos_cpp__msg__OBBDetection2D__Sequence__are_equal(const ros2_yolos_cpp__msg__OBBDetection2D__Sequence * lhs, const ros2_yolos_cpp__msg__OBBDetection2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_yolos_cpp__msg__OBBDetection2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_yolos_cpp__msg__OBBDetection2D__Sequence__copy(
  const ros2_yolos_cpp__msg__OBBDetection2D__Sequence * input,
  ros2_yolos_cpp__msg__OBBDetection2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_yolos_cpp__msg__OBBDetection2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_yolos_cpp__msg__OBBDetection2D * data =
      (ros2_yolos_cpp__msg__OBBDetection2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_yolos_cpp__msg__OBBDetection2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_yolos_cpp__msg__OBBDetection2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_yolos_cpp__msg__OBBDetection2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice
#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `keypoints`
#include "ros2_yolos_cpp/msg/detail/key_point2_d__functions.h"
// Member `bounding_box_center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
ros2_yolos_cpp__msg__KeyPoint2DArray__init(ros2_yolos_cpp__msg__KeyPoint2DArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_yolos_cpp__msg__KeyPoint2DArray__fini(msg);
    return false;
  }
  // keypoints
  if (!ros2_yolos_cpp__msg__KeyPoint2D__Sequence__init(&msg->keypoints, 0)) {
    ros2_yolos_cpp__msg__KeyPoint2DArray__fini(msg);
    return false;
  }
  // bounding_box_center
  if (!geometry_msgs__msg__Point__init(&msg->bounding_box_center)) {
    ros2_yolos_cpp__msg__KeyPoint2DArray__fini(msg);
    return false;
  }
  // bounding_box_size_x
  // bounding_box_size_y
  // confidence
  // class_id
  return true;
}

void
ros2_yolos_cpp__msg__KeyPoint2DArray__fini(ros2_yolos_cpp__msg__KeyPoint2DArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // keypoints
  ros2_yolos_cpp__msg__KeyPoint2D__Sequence__fini(&msg->keypoints);
  // bounding_box_center
  geometry_msgs__msg__Point__fini(&msg->bounding_box_center);
  // bounding_box_size_x
  // bounding_box_size_y
  // confidence
  // class_id
}

bool
ros2_yolos_cpp__msg__KeyPoint2DArray__are_equal(const ros2_yolos_cpp__msg__KeyPoint2DArray * lhs, const ros2_yolos_cpp__msg__KeyPoint2DArray * rhs)
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
  // keypoints
  if (!ros2_yolos_cpp__msg__KeyPoint2D__Sequence__are_equal(
      &(lhs->keypoints), &(rhs->keypoints)))
  {
    return false;
  }
  // bounding_box_center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->bounding_box_center), &(rhs->bounding_box_center)))
  {
    return false;
  }
  // bounding_box_size_x
  if (lhs->bounding_box_size_x != rhs->bounding_box_size_x) {
    return false;
  }
  // bounding_box_size_y
  if (lhs->bounding_box_size_y != rhs->bounding_box_size_y) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  return true;
}

bool
ros2_yolos_cpp__msg__KeyPoint2DArray__copy(
  const ros2_yolos_cpp__msg__KeyPoint2DArray * input,
  ros2_yolos_cpp__msg__KeyPoint2DArray * output)
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
  // keypoints
  if (!ros2_yolos_cpp__msg__KeyPoint2D__Sequence__copy(
      &(input->keypoints), &(output->keypoints)))
  {
    return false;
  }
  // bounding_box_center
  if (!geometry_msgs__msg__Point__copy(
      &(input->bounding_box_center), &(output->bounding_box_center)))
  {
    return false;
  }
  // bounding_box_size_x
  output->bounding_box_size_x = input->bounding_box_size_x;
  // bounding_box_size_y
  output->bounding_box_size_y = input->bounding_box_size_y;
  // confidence
  output->confidence = input->confidence;
  // class_id
  output->class_id = input->class_id;
  return true;
}

ros2_yolos_cpp__msg__KeyPoint2DArray *
ros2_yolos_cpp__msg__KeyPoint2DArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_yolos_cpp__msg__KeyPoint2DArray * msg = (ros2_yolos_cpp__msg__KeyPoint2DArray *)allocator.allocate(sizeof(ros2_yolos_cpp__msg__KeyPoint2DArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_yolos_cpp__msg__KeyPoint2DArray));
  bool success = ros2_yolos_cpp__msg__KeyPoint2DArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_yolos_cpp__msg__KeyPoint2DArray__destroy(ros2_yolos_cpp__msg__KeyPoint2DArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_yolos_cpp__msg__KeyPoint2DArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__init(ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_yolos_cpp__msg__KeyPoint2DArray * data = NULL;

  if (size) {
    data = (ros2_yolos_cpp__msg__KeyPoint2DArray *)allocator.zero_allocate(size, sizeof(ros2_yolos_cpp__msg__KeyPoint2DArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_yolos_cpp__msg__KeyPoint2DArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_yolos_cpp__msg__KeyPoint2DArray__fini(&data[i - 1]);
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
ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__fini(ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * array)
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
      ros2_yolos_cpp__msg__KeyPoint2DArray__fini(&array->data[i]);
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

ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence *
ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * array = (ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence *)allocator.allocate(sizeof(ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__destroy(ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__are_equal(const ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * lhs, const ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_yolos_cpp__msg__KeyPoint2DArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence__copy(
  const ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * input,
  ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_yolos_cpp__msg__KeyPoint2DArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_yolos_cpp__msg__KeyPoint2DArray * data =
      (ros2_yolos_cpp__msg__KeyPoint2DArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_yolos_cpp__msg__KeyPoint2DArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_yolos_cpp__msg__KeyPoint2DArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_yolos_cpp__msg__KeyPoint2DArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ia_msgs:msg/TryAgain.idl
// generated code does not contain a copyright notice
#include "ia_msgs/msg/try_again__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ia_msgs__msg__TryAgain__init(ia_msgs__msg__TryAgain * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ia_msgs__msg__TryAgain__fini(ia_msgs__msg__TryAgain * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

ia_msgs__msg__TryAgain *
ia_msgs__msg__TryAgain__create()
{
  ia_msgs__msg__TryAgain * msg = (ia_msgs__msg__TryAgain *)malloc(sizeof(ia_msgs__msg__TryAgain));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ia_msgs__msg__TryAgain));
  bool success = ia_msgs__msg__TryAgain__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ia_msgs__msg__TryAgain__destroy(ia_msgs__msg__TryAgain * msg)
{
  if (msg) {
    ia_msgs__msg__TryAgain__fini(msg);
  }
  free(msg);
}


bool
ia_msgs__msg__TryAgain__Sequence__init(ia_msgs__msg__TryAgain__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ia_msgs__msg__TryAgain * data = NULL;
  if (size) {
    data = (ia_msgs__msg__TryAgain *)calloc(size, sizeof(ia_msgs__msg__TryAgain));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ia_msgs__msg__TryAgain__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ia_msgs__msg__TryAgain__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ia_msgs__msg__TryAgain__Sequence__fini(ia_msgs__msg__TryAgain__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ia_msgs__msg__TryAgain__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ia_msgs__msg__TryAgain__Sequence *
ia_msgs__msg__TryAgain__Sequence__create(size_t size)
{
  ia_msgs__msg__TryAgain__Sequence * array = (ia_msgs__msg__TryAgain__Sequence *)malloc(sizeof(ia_msgs__msg__TryAgain__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ia_msgs__msg__TryAgain__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ia_msgs__msg__TryAgain__Sequence__destroy(ia_msgs__msg__TryAgain__Sequence * array)
{
  if (array) {
    ia_msgs__msg__TryAgain__Sequence__fini(array);
  }
  free(array);
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ia_msgs:msg/NewMsg.idl
// generated code does not contain a copyright notice
#include "ia_msgs/msg/new_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `s`
#include "ia_msgs/msg/some_info__functions.h"

bool
ia_msgs__msg__NewMsg__init(ia_msgs__msg__NewMsg * msg)
{
  if (!msg) {
    return false;
  }
  // s
  if (!ia_msgs__msg__SomeInfo__init(&msg->s)) {
    ia_msgs__msg__NewMsg__destroy(msg);
    return false;
  }
  // f
  return true;
}

void
ia_msgs__msg__NewMsg__fini(ia_msgs__msg__NewMsg * msg)
{
  if (!msg) {
    return;
  }
  // s
  ia_msgs__msg__SomeInfo__fini(&msg->s);
  // f
}

ia_msgs__msg__NewMsg *
ia_msgs__msg__NewMsg__create()
{
  ia_msgs__msg__NewMsg * msg = (ia_msgs__msg__NewMsg *)malloc(sizeof(ia_msgs__msg__NewMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ia_msgs__msg__NewMsg));
  bool success = ia_msgs__msg__NewMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ia_msgs__msg__NewMsg__destroy(ia_msgs__msg__NewMsg * msg)
{
  if (msg) {
    ia_msgs__msg__NewMsg__fini(msg);
  }
  free(msg);
}


bool
ia_msgs__msg__NewMsg__Sequence__init(ia_msgs__msg__NewMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ia_msgs__msg__NewMsg * data = NULL;
  if (size) {
    data = (ia_msgs__msg__NewMsg *)calloc(size, sizeof(ia_msgs__msg__NewMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ia_msgs__msg__NewMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ia_msgs__msg__NewMsg__fini(&data[i - 1]);
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
ia_msgs__msg__NewMsg__Sequence__fini(ia_msgs__msg__NewMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ia_msgs__msg__NewMsg__fini(&array->data[i]);
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

ia_msgs__msg__NewMsg__Sequence *
ia_msgs__msg__NewMsg__Sequence__create(size_t size)
{
  ia_msgs__msg__NewMsg__Sequence * array = (ia_msgs__msg__NewMsg__Sequence *)malloc(sizeof(ia_msgs__msg__NewMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ia_msgs__msg__NewMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ia_msgs__msg__NewMsg__Sequence__destroy(ia_msgs__msg__NewMsg__Sequence * array)
{
  if (array) {
    ia_msgs__msg__NewMsg__Sequence__fini(array);
  }
  free(array);
}

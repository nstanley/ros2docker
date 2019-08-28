// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ia_msgs:msg/BaseStruct.idl
// generated code does not contain a copyright notice
#include "ia_msgs/msg/base_struct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ia_msgs__msg__BaseStruct__init(ia_msgs__msg__BaseStruct * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // info
  return true;
}

void
ia_msgs__msg__BaseStruct__fini(ia_msgs__msg__BaseStruct * msg)
{
  if (!msg) {
    return;
  }
  // id
  // info
}

ia_msgs__msg__BaseStruct *
ia_msgs__msg__BaseStruct__create()
{
  ia_msgs__msg__BaseStruct * msg = (ia_msgs__msg__BaseStruct *)malloc(sizeof(ia_msgs__msg__BaseStruct));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ia_msgs__msg__BaseStruct));
  bool success = ia_msgs__msg__BaseStruct__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ia_msgs__msg__BaseStruct__destroy(ia_msgs__msg__BaseStruct * msg)
{
  if (msg) {
    ia_msgs__msg__BaseStruct__fini(msg);
  }
  free(msg);
}


bool
ia_msgs__msg__BaseStruct__Sequence__init(ia_msgs__msg__BaseStruct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ia_msgs__msg__BaseStruct * data = NULL;
  if (size) {
    data = (ia_msgs__msg__BaseStruct *)calloc(size, sizeof(ia_msgs__msg__BaseStruct));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ia_msgs__msg__BaseStruct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ia_msgs__msg__BaseStruct__fini(&data[i - 1]);
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
ia_msgs__msg__BaseStruct__Sequence__fini(ia_msgs__msg__BaseStruct__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ia_msgs__msg__BaseStruct__fini(&array->data[i]);
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

ia_msgs__msg__BaseStruct__Sequence *
ia_msgs__msg__BaseStruct__Sequence__create(size_t size)
{
  ia_msgs__msg__BaseStruct__Sequence * array = (ia_msgs__msg__BaseStruct__Sequence *)malloc(sizeof(ia_msgs__msg__BaseStruct__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ia_msgs__msg__BaseStruct__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ia_msgs__msg__BaseStruct__Sequence__destroy(ia_msgs__msg__BaseStruct__Sequence * array)
{
  if (array) {
    ia_msgs__msg__BaseStruct__Sequence__fini(array);
  }
  free(array);
}

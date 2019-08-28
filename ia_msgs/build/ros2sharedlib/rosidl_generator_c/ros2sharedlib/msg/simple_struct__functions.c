// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2sharedlib:msg/SimpleStruct.idl
// generated code does not contain a copyright notice
#include "ros2sharedlib/msg/simple_struct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `s`
#include "rosidl_generator_c/string_functions.h"

bool
ros2sharedlib__msg__SimpleStruct__init(ros2sharedlib__msg__SimpleStruct * msg)
{
  if (!msg) {
    return false;
  }
  // s
  if (!rosidl_generator_c__String__init(&msg->s)) {
    ros2sharedlib__msg__SimpleStruct__destroy(msg);
    return false;
  }
  // i
  return true;
}

void
ros2sharedlib__msg__SimpleStruct__fini(ros2sharedlib__msg__SimpleStruct * msg)
{
  if (!msg) {
    return;
  }
  // s
  rosidl_generator_c__String__fini(&msg->s);
  // i
}

ros2sharedlib__msg__SimpleStruct *
ros2sharedlib__msg__SimpleStruct__create()
{
  ros2sharedlib__msg__SimpleStruct * msg = (ros2sharedlib__msg__SimpleStruct *)malloc(sizeof(ros2sharedlib__msg__SimpleStruct));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2sharedlib__msg__SimpleStruct));
  bool success = ros2sharedlib__msg__SimpleStruct__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2sharedlib__msg__SimpleStruct__destroy(ros2sharedlib__msg__SimpleStruct * msg)
{
  if (msg) {
    ros2sharedlib__msg__SimpleStruct__fini(msg);
  }
  free(msg);
}


bool
ros2sharedlib__msg__SimpleStruct__Sequence__init(ros2sharedlib__msg__SimpleStruct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2sharedlib__msg__SimpleStruct * data = NULL;
  if (size) {
    data = (ros2sharedlib__msg__SimpleStruct *)calloc(size, sizeof(ros2sharedlib__msg__SimpleStruct));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2sharedlib__msg__SimpleStruct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2sharedlib__msg__SimpleStruct__fini(&data[i - 1]);
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
ros2sharedlib__msg__SimpleStruct__Sequence__fini(ros2sharedlib__msg__SimpleStruct__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2sharedlib__msg__SimpleStruct__fini(&array->data[i]);
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

ros2sharedlib__msg__SimpleStruct__Sequence *
ros2sharedlib__msg__SimpleStruct__Sequence__create(size_t size)
{
  ros2sharedlib__msg__SimpleStruct__Sequence * array = (ros2sharedlib__msg__SimpleStruct__Sequence *)malloc(sizeof(ros2sharedlib__msg__SimpleStruct__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2sharedlib__msg__SimpleStruct__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2sharedlib__msg__SimpleStruct__Sequence__destroy(ros2sharedlib__msg__SimpleStruct__Sequence * array)
{
  if (array) {
    ros2sharedlib__msg__SimpleStruct__Sequence__fini(array);
  }
  free(array);
}

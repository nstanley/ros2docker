// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2sharedlib:msg/AnotherStruct.idl
// generated code does not contain a copyright notice
#include "ros2sharedlib/msg/another_struct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `str`
#include "rosidl_generator_c/string_functions.h"

bool
ros2sharedlib__msg__AnotherStruct__init(ros2sharedlib__msg__AnotherStruct * msg)
{
  if (!msg) {
    return false;
  }
  // str
  if (!rosidl_generator_c__String__init(&msg->str)) {
    ros2sharedlib__msg__AnotherStruct__destroy(msg);
    return false;
  }
  // num
  return true;
}

void
ros2sharedlib__msg__AnotherStruct__fini(ros2sharedlib__msg__AnotherStruct * msg)
{
  if (!msg) {
    return;
  }
  // str
  rosidl_generator_c__String__fini(&msg->str);
  // num
}

ros2sharedlib__msg__AnotherStruct *
ros2sharedlib__msg__AnotherStruct__create()
{
  ros2sharedlib__msg__AnotherStruct * msg = (ros2sharedlib__msg__AnotherStruct *)malloc(sizeof(ros2sharedlib__msg__AnotherStruct));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2sharedlib__msg__AnotherStruct));
  bool success = ros2sharedlib__msg__AnotherStruct__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2sharedlib__msg__AnotherStruct__destroy(ros2sharedlib__msg__AnotherStruct * msg)
{
  if (msg) {
    ros2sharedlib__msg__AnotherStruct__fini(msg);
  }
  free(msg);
}


bool
ros2sharedlib__msg__AnotherStruct__Sequence__init(ros2sharedlib__msg__AnotherStruct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2sharedlib__msg__AnotherStruct * data = NULL;
  if (size) {
    data = (ros2sharedlib__msg__AnotherStruct *)calloc(size, sizeof(ros2sharedlib__msg__AnotherStruct));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2sharedlib__msg__AnotherStruct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2sharedlib__msg__AnotherStruct__fini(&data[i - 1]);
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
ros2sharedlib__msg__AnotherStruct__Sequence__fini(ros2sharedlib__msg__AnotherStruct__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2sharedlib__msg__AnotherStruct__fini(&array->data[i]);
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

ros2sharedlib__msg__AnotherStruct__Sequence *
ros2sharedlib__msg__AnotherStruct__Sequence__create(size_t size)
{
  ros2sharedlib__msg__AnotherStruct__Sequence * array = (ros2sharedlib__msg__AnotherStruct__Sequence *)malloc(sizeof(ros2sharedlib__msg__AnotherStruct__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2sharedlib__msg__AnotherStruct__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2sharedlib__msg__AnotherStruct__Sequence__destroy(ros2sharedlib__msg__AnotherStruct__Sequence * array)
{
  if (array) {
    ros2sharedlib__msg__AnotherStruct__Sequence__fini(array);
  }
  free(array);
}

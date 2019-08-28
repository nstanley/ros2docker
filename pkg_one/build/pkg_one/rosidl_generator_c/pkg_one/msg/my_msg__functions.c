// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pkg_one:msg/MyMsg.idl
// generated code does not contain a copyright notice
#include "pkg_one/msg/my_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
pkg_one__msg__MyMsg__init(pkg_one__msg__MyMsg * msg)
{
  if (!msg) {
    return false;
  }
  // an_int
  // a_uint
  return true;
}

void
pkg_one__msg__MyMsg__fini(pkg_one__msg__MyMsg * msg)
{
  if (!msg) {
    return;
  }
  // an_int
  // a_uint
}

pkg_one__msg__MyMsg *
pkg_one__msg__MyMsg__create()
{
  pkg_one__msg__MyMsg * msg = (pkg_one__msg__MyMsg *)malloc(sizeof(pkg_one__msg__MyMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pkg_one__msg__MyMsg));
  bool success = pkg_one__msg__MyMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pkg_one__msg__MyMsg__destroy(pkg_one__msg__MyMsg * msg)
{
  if (msg) {
    pkg_one__msg__MyMsg__fini(msg);
  }
  free(msg);
}


bool
pkg_one__msg__MyMsg__Sequence__init(pkg_one__msg__MyMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pkg_one__msg__MyMsg * data = NULL;
  if (size) {
    data = (pkg_one__msg__MyMsg *)calloc(size, sizeof(pkg_one__msg__MyMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pkg_one__msg__MyMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pkg_one__msg__MyMsg__fini(&data[i - 1]);
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
pkg_one__msg__MyMsg__Sequence__fini(pkg_one__msg__MyMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pkg_one__msg__MyMsg__fini(&array->data[i]);
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

pkg_one__msg__MyMsg__Sequence *
pkg_one__msg__MyMsg__Sequence__create(size_t size)
{
  pkg_one__msg__MyMsg__Sequence * array = (pkg_one__msg__MyMsg__Sequence *)malloc(sizeof(pkg_one__msg__MyMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pkg_one__msg__MyMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pkg_one__msg__MyMsg__Sequence__destroy(pkg_one__msg__MyMsg__Sequence * array)
{
  if (array) {
    pkg_one__msg__MyMsg__Sequence__fini(array);
  }
  free(array);
}

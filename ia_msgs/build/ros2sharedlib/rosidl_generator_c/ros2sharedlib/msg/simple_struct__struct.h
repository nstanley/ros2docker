// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2sharedlib:msg/SimpleStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__STRUCT_H_
#define ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 's'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/SimpleStruct in the package ros2sharedlib.
typedef struct ros2sharedlib__msg__SimpleStruct
{
  rosidl_generator_c__String s;
  int32_t i;
} ros2sharedlib__msg__SimpleStruct;

// Struct for a sequence of ros2sharedlib__msg__SimpleStruct.
typedef struct ros2sharedlib__msg__SimpleStruct__Sequence
{
  ros2sharedlib__msg__SimpleStruct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2sharedlib__msg__SimpleStruct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__STRUCT_H_

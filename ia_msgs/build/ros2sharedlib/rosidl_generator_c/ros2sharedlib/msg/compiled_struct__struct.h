// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2sharedlib:msg/CompiledStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__COMPILED_STRUCT__STRUCT_H_
#define ROS2SHAREDLIB__MSG__COMPILED_STRUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ss'
#include "ros2sharedlib/msg/simple_struct__struct.h"
// Member 'as'
#include "ros2sharedlib/msg/another_struct__struct.h"

// Struct defined in msg/CompiledStruct in the package ros2sharedlib.
typedef struct ros2sharedlib__msg__CompiledStruct
{
  ros2sharedlib__msg__SimpleStruct ss;
  ros2sharedlib__msg__AnotherStruct as;
} ros2sharedlib__msg__CompiledStruct;

// Struct for a sequence of ros2sharedlib__msg__CompiledStruct.
typedef struct ros2sharedlib__msg__CompiledStruct__Sequence
{
  ros2sharedlib__msg__CompiledStruct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2sharedlib__msg__CompiledStruct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SHAREDLIB__MSG__COMPILED_STRUCT__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ia_msgs:msg/SomeInfo.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__SOME_INFO__STRUCT_H_
#define IA_MSGS__MSG__SOME_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'core'
#include "ia_msgs/msg/base_struct__struct.h"

// Struct defined in msg/SomeInfo in the package ia_msgs.
typedef struct ia_msgs__msg__SomeInfo
{
  ia_msgs__msg__BaseStruct core;
  uint32_t timestamp;
} ia_msgs__msg__SomeInfo;

// Struct for a sequence of ia_msgs__msg__SomeInfo.
typedef struct ia_msgs__msg__SomeInfo__Sequence
{
  ia_msgs__msg__SomeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ia_msgs__msg__SomeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IA_MSGS__MSG__SOME_INFO__STRUCT_H_

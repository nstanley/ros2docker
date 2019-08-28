// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ia_msgs:msg/BaseStruct.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__BASE_STRUCT__STRUCT_H_
#define IA_MSGS__MSG__BASE_STRUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BaseStruct in the package ia_msgs.
typedef struct ia_msgs__msg__BaseStruct
{
  uint32_t id;
  double info;
} ia_msgs__msg__BaseStruct;

// Struct for a sequence of ia_msgs__msg__BaseStruct.
typedef struct ia_msgs__msg__BaseStruct__Sequence
{
  ia_msgs__msg__BaseStruct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ia_msgs__msg__BaseStruct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IA_MSGS__MSG__BASE_STRUCT__STRUCT_H_

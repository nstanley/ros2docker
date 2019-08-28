// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ia_msgs:msg/TryAgain.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__TRY_AGAIN__STRUCT_H_
#define IA_MSGS__MSG__TRY_AGAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TryAgain in the package ia_msgs.
typedef struct ia_msgs__msg__TryAgain
{
  uint8_t structure_needs_at_least_one_member;
} ia_msgs__msg__TryAgain;

// Struct for a sequence of ia_msgs__msg__TryAgain.
typedef struct ia_msgs__msg__TryAgain__Sequence
{
  ia_msgs__msg__TryAgain * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ia_msgs__msg__TryAgain__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IA_MSGS__MSG__TRY_AGAIN__STRUCT_H_

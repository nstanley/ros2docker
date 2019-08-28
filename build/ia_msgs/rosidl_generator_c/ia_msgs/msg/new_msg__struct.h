// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ia_msgs:msg/NewMsg.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__NEW_MSG__STRUCT_H_
#define IA_MSGS__MSG__NEW_MSG__STRUCT_H_

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
#include "ia_msgs/msg/some_info__struct.h"

// Struct defined in msg/NewMsg in the package ia_msgs.
typedef struct ia_msgs__msg__NewMsg
{
  ia_msgs__msg__SomeInfo s;
  double f;
} ia_msgs__msg__NewMsg;

// Struct for a sequence of ia_msgs__msg__NewMsg.
typedef struct ia_msgs__msg__NewMsg__Sequence
{
  ia_msgs__msg__NewMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ia_msgs__msg__NewMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IA_MSGS__MSG__NEW_MSG__STRUCT_H_

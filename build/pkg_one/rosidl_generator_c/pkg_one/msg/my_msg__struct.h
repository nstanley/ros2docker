// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg_one:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef PKG_ONE__MSG__MY_MSG__STRUCT_H_
#define PKG_ONE__MSG__MY_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MyMsg in the package pkg_one.
typedef struct pkg_one__msg__MyMsg
{
  int32_t an_int;
  uint32_t a_uint;
} pkg_one__msg__MyMsg;

// Struct for a sequence of pkg_one__msg__MyMsg.
typedef struct pkg_one__msg__MyMsg__Sequence
{
  pkg_one__msg__MyMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg_one__msg__MyMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG_ONE__MSG__MY_MSG__STRUCT_H_

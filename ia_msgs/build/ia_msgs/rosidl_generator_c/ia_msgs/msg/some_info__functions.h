// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ia_msgs:msg/SomeInfo.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__SOME_INFO__FUNCTIONS_H_
#define IA_MSGS__MSG__SOME_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "ia_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ia_msgs/msg/some_info__struct.h"

/// Initialize msg/SomeInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ia_msgs__msg__SomeInfo
 * )) before or use
 * ia_msgs__msg__SomeInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
bool
ia_msgs__msg__SomeInfo__init(ia_msgs__msg__SomeInfo * msg);

/// Finalize msg/SomeInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
void
ia_msgs__msg__SomeInfo__fini(ia_msgs__msg__SomeInfo * msg);

/// Create msg/SomeInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ia_msgs__msg__SomeInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
ia_msgs__msg__SomeInfo *
ia_msgs__msg__SomeInfo__create();

/// Destroy msg/SomeInfo message.
/**
 * It calls
 * ia_msgs__msg__SomeInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
void
ia_msgs__msg__SomeInfo__destroy(ia_msgs__msg__SomeInfo * msg);


/// Initialize array of msg/SomeInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * ia_msgs__msg__SomeInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
bool
ia_msgs__msg__SomeInfo__Sequence__init(ia_msgs__msg__SomeInfo__Sequence * array, size_t size);

/// Finalize array of msg/SomeInfo messages.
/**
 * It calls
 * ia_msgs__msg__SomeInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
void
ia_msgs__msg__SomeInfo__Sequence__fini(ia_msgs__msg__SomeInfo__Sequence * array);

/// Create array of msg/SomeInfo messages.
/**
 * It allocates the memory for the array and calls
 * ia_msgs__msg__SomeInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
ia_msgs__msg__SomeInfo__Sequence *
ia_msgs__msg__SomeInfo__Sequence__create(size_t size);

/// Destroy array of msg/SomeInfo messages.
/**
 * It calls
 * ia_msgs__msg__SomeInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ia_msgs
void
ia_msgs__msg__SomeInfo__Sequence__destroy(ia_msgs__msg__SomeInfo__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // IA_MSGS__MSG__SOME_INFO__FUNCTIONS_H_

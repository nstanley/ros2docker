// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2sharedlib:msg/SimpleStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__FUNCTIONS_H_
#define ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "ros2sharedlib/msg/rosidl_generator_c__visibility_control.h"

#include "ros2sharedlib/msg/simple_struct__struct.h"

/// Initialize msg/SimpleStruct message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2sharedlib__msg__SimpleStruct
 * )) before or use
 * ros2sharedlib__msg__SimpleStruct__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
bool
ros2sharedlib__msg__SimpleStruct__init(ros2sharedlib__msg__SimpleStruct * msg);

/// Finalize msg/SimpleStruct message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__SimpleStruct__fini(ros2sharedlib__msg__SimpleStruct * msg);

/// Create msg/SimpleStruct message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2sharedlib__msg__SimpleStruct__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
ros2sharedlib__msg__SimpleStruct *
ros2sharedlib__msg__SimpleStruct__create();

/// Destroy msg/SimpleStruct message.
/**
 * It calls
 * ros2sharedlib__msg__SimpleStruct__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__SimpleStruct__destroy(ros2sharedlib__msg__SimpleStruct * msg);


/// Initialize array of msg/SimpleStruct messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2sharedlib__msg__SimpleStruct__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
bool
ros2sharedlib__msg__SimpleStruct__Sequence__init(ros2sharedlib__msg__SimpleStruct__Sequence * array, size_t size);

/// Finalize array of msg/SimpleStruct messages.
/**
 * It calls
 * ros2sharedlib__msg__SimpleStruct__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__SimpleStruct__Sequence__fini(ros2sharedlib__msg__SimpleStruct__Sequence * array);

/// Create array of msg/SimpleStruct messages.
/**
 * It allocates the memory for the array and calls
 * ros2sharedlib__msg__SimpleStruct__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
ros2sharedlib__msg__SimpleStruct__Sequence *
ros2sharedlib__msg__SimpleStruct__Sequence__create(size_t size);

/// Destroy array of msg/SimpleStruct messages.
/**
 * It calls
 * ros2sharedlib__msg__SimpleStruct__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__SimpleStruct__Sequence__destroy(ros2sharedlib__msg__SimpleStruct__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__FUNCTIONS_H_

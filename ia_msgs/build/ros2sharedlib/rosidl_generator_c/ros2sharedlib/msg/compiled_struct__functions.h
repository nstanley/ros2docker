// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2sharedlib:msg/CompiledStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__COMPILED_STRUCT__FUNCTIONS_H_
#define ROS2SHAREDLIB__MSG__COMPILED_STRUCT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "ros2sharedlib/msg/rosidl_generator_c__visibility_control.h"

#include "ros2sharedlib/msg/compiled_struct__struct.h"

/// Initialize msg/CompiledStruct message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2sharedlib__msg__CompiledStruct
 * )) before or use
 * ros2sharedlib__msg__CompiledStruct__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
bool
ros2sharedlib__msg__CompiledStruct__init(ros2sharedlib__msg__CompiledStruct * msg);

/// Finalize msg/CompiledStruct message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__CompiledStruct__fini(ros2sharedlib__msg__CompiledStruct * msg);

/// Create msg/CompiledStruct message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2sharedlib__msg__CompiledStruct__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
ros2sharedlib__msg__CompiledStruct *
ros2sharedlib__msg__CompiledStruct__create();

/// Destroy msg/CompiledStruct message.
/**
 * It calls
 * ros2sharedlib__msg__CompiledStruct__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__CompiledStruct__destroy(ros2sharedlib__msg__CompiledStruct * msg);


/// Initialize array of msg/CompiledStruct messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2sharedlib__msg__CompiledStruct__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
bool
ros2sharedlib__msg__CompiledStruct__Sequence__init(ros2sharedlib__msg__CompiledStruct__Sequence * array, size_t size);

/// Finalize array of msg/CompiledStruct messages.
/**
 * It calls
 * ros2sharedlib__msg__CompiledStruct__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__CompiledStruct__Sequence__fini(ros2sharedlib__msg__CompiledStruct__Sequence * array);

/// Create array of msg/CompiledStruct messages.
/**
 * It allocates the memory for the array and calls
 * ros2sharedlib__msg__CompiledStruct__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
ros2sharedlib__msg__CompiledStruct__Sequence *
ros2sharedlib__msg__CompiledStruct__Sequence__create(size_t size);

/// Destroy array of msg/CompiledStruct messages.
/**
 * It calls
 * ros2sharedlib__msg__CompiledStruct__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2sharedlib
void
ros2sharedlib__msg__CompiledStruct__Sequence__destroy(ros2sharedlib__msg__CompiledStruct__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2SHAREDLIB__MSG__COMPILED_STRUCT__FUNCTIONS_H_

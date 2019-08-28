// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2sharedlib:msg/CompiledStruct.idl
// generated code does not contain a copyright notice
#include "ros2sharedlib/msg/compiled_struct__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2sharedlib/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2sharedlib/msg/compiled_struct__struct.h"
#include "ros2sharedlib/msg/compiled_struct__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ros2sharedlib/msg/another_struct__functions.h"  // as
#include "ros2sharedlib/msg/simple_struct__functions.h"  // ss

// forward declare type support functions
size_t get_serialized_size_ros2sharedlib__msg__AnotherStruct(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2sharedlib__msg__AnotherStruct(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, AnotherStruct)();
size_t get_serialized_size_ros2sharedlib__msg__SimpleStruct(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2sharedlib__msg__SimpleStruct(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, SimpleStruct)();


using _CompiledStruct__ros_msg_type = ros2sharedlib__msg__CompiledStruct;

static bool _CompiledStruct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CompiledStruct__ros_msg_type * ros_message = static_cast<const _CompiledStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: ss
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, SimpleStruct
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ss, cdr))
    {
      return false;
    }
  }

  // Field name: as
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, AnotherStruct
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->as, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CompiledStruct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CompiledStruct__ros_msg_type * ros_message = static_cast<_CompiledStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: ss
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, SimpleStruct
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ss))
    {
      return false;
    }
  }

  // Field name: as
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, AnotherStruct
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->as))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2sharedlib
size_t get_serialized_size_ros2sharedlib__msg__CompiledStruct(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CompiledStruct__ros_msg_type * ros_message = static_cast<const _CompiledStruct__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ss

  current_alignment += get_serialized_size_ros2sharedlib__msg__SimpleStruct(
    &(ros_message->ss), current_alignment);
  // field.name as

  current_alignment += get_serialized_size_ros2sharedlib__msg__AnotherStruct(
    &(ros_message->as), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CompiledStruct__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2sharedlib__msg__CompiledStruct(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2sharedlib
size_t max_serialized_size_ros2sharedlib__msg__CompiledStruct(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ss
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ros2sharedlib__msg__SimpleStruct(
        full_bounded, current_alignment);
    }
  }
  // member: as
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ros2sharedlib__msg__AnotherStruct(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CompiledStruct__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2sharedlib__msg__CompiledStruct(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CompiledStruct = {
  "ros2sharedlib::msg",
  "CompiledStruct",
  _CompiledStruct__cdr_serialize,
  _CompiledStruct__cdr_deserialize,
  _CompiledStruct__get_serialized_size,
  _CompiledStruct__max_serialized_size
};

static rosidl_message_type_support_t _CompiledStruct__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CompiledStruct,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, CompiledStruct)() {
  return &_CompiledStruct__type_support;
}

#if defined(__cplusplus)
}
#endif

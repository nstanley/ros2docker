// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ia_msgs:msg/SomeInfo.idl
// generated code does not contain a copyright notice
#include "ia_msgs/msg/some_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ia_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ia_msgs/msg/some_info__struct.h"
#include "ia_msgs/msg/some_info__functions.h"
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

#include "ia_msgs/msg/base_struct__functions.h"  // core

// forward declare type support functions
size_t get_serialized_size_ia_msgs__msg__BaseStruct(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ia_msgs__msg__BaseStruct(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, BaseStruct)();


using _SomeInfo__ros_msg_type = ia_msgs__msg__SomeInfo;

static bool _SomeInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SomeInfo__ros_msg_type * ros_message = static_cast<const _SomeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: core
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, BaseStruct
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->core, cdr))
    {
      return false;
    }
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  return true;
}

static bool _SomeInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SomeInfo__ros_msg_type * ros_message = static_cast<_SomeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: core
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, BaseStruct
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->core))
    {
      return false;
    }
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ia_msgs
size_t get_serialized_size_ia_msgs__msg__SomeInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SomeInfo__ros_msg_type * ros_message = static_cast<const _SomeInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name core

  current_alignment += get_serialized_size_ia_msgs__msg__BaseStruct(
    &(ros_message->core), current_alignment);
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SomeInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ia_msgs__msg__SomeInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ia_msgs
size_t max_serialized_size_ia_msgs__msg__SomeInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: core
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ia_msgs__msg__BaseStruct(
        full_bounded, current_alignment);
    }
  }
  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SomeInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ia_msgs__msg__SomeInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SomeInfo = {
  "ia_msgs::msg",
  "SomeInfo",
  _SomeInfo__cdr_serialize,
  _SomeInfo__cdr_deserialize,
  _SomeInfo__get_serialized_size,
  _SomeInfo__max_serialized_size
};

static rosidl_message_type_support_t _SomeInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SomeInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, SomeInfo)() {
  return &_SomeInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

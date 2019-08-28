// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ia_msgs:msg/NewMsg.idl
// generated code does not contain a copyright notice
#include "ia_msgs/msg/new_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ia_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ia_msgs/msg/new_msg__struct.h"
#include "ia_msgs/msg/new_msg__functions.h"
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

#include "ia_msgs/msg/some_info__functions.h"  // s

// forward declare type support functions
size_t get_serialized_size_ia_msgs__msg__SomeInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ia_msgs__msg__SomeInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, SomeInfo)();


using _NewMsg__ros_msg_type = ia_msgs__msg__NewMsg;

static bool _NewMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NewMsg__ros_msg_type * ros_message = static_cast<const _NewMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: s
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, SomeInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->s, cdr))
    {
      return false;
    }
  }

  // Field name: f
  {
    cdr << ros_message->f;
  }

  return true;
}

static bool _NewMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NewMsg__ros_msg_type * ros_message = static_cast<_NewMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: s
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, SomeInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->s))
    {
      return false;
    }
  }

  // Field name: f
  {
    cdr >> ros_message->f;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ia_msgs
size_t get_serialized_size_ia_msgs__msg__NewMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NewMsg__ros_msg_type * ros_message = static_cast<const _NewMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name s

  current_alignment += get_serialized_size_ia_msgs__msg__SomeInfo(
    &(ros_message->s), current_alignment);
  // field.name f
  {
    size_t item_size = sizeof(ros_message->f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NewMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ia_msgs__msg__NewMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ia_msgs
size_t max_serialized_size_ia_msgs__msg__NewMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: s
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ia_msgs__msg__SomeInfo(
        full_bounded, current_alignment);
    }
  }
  // member: f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NewMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ia_msgs__msg__NewMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NewMsg = {
  "ia_msgs::msg",
  "NewMsg",
  _NewMsg__cdr_serialize,
  _NewMsg__cdr_deserialize,
  _NewMsg__get_serialized_size,
  _NewMsg__max_serialized_size
};

static rosidl_message_type_support_t _NewMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NewMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ia_msgs, msg, NewMsg)() {
  return &_NewMsg__type_support;
}

#if defined(__cplusplus)
}
#endif

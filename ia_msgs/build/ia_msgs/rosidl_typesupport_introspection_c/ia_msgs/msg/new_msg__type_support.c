// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ia_msgs:msg/NewMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ia_msgs/msg/new_msg__rosidl_typesupport_introspection_c.h"
#include "ia_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ia_msgs/msg/new_msg__struct.h"


// Include directives for member types
// Member `s`
#include "ia_msgs/msg/some_info.h"
// Member `s`
#include "ia_msgs/msg/some_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_member_array[2] = {
  {
    "s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ia_msgs__msg__NewMsg, s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ia_msgs__msg__NewMsg, f),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_members = {
  "ia_msgs__msg",  // message namespace
  "NewMsg",  // message name
  2,  // number of fields
  sizeof(ia_msgs__msg__NewMsg),
  NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_type_support_handle = {
  0,
  &NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ia_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ia_msgs, msg, NewMsg)() {
  NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ia_msgs, msg, SomeInfo)();
  if (!NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_type_support_handle.typesupport_identifier) {
    NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NewMsg__rosidl_typesupport_introspection_c__NewMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

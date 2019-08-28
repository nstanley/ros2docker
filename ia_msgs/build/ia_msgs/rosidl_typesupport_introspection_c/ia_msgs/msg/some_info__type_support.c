// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ia_msgs:msg/SomeInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ia_msgs/msg/some_info__rosidl_typesupport_introspection_c.h"
#include "ia_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ia_msgs/msg/some_info__struct.h"


// Include directives for member types
// Member `core`
#include "ia_msgs/msg/base_struct.h"
// Member `core`
#include "ia_msgs/msg/base_struct__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_member_array[2] = {
  {
    "core",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ia_msgs__msg__SomeInfo, core),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ia_msgs__msg__SomeInfo, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_members = {
  "ia_msgs__msg",  // message namespace
  "SomeInfo",  // message name
  2,  // number of fields
  sizeof(ia_msgs__msg__SomeInfo),
  SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_type_support_handle = {
  0,
  &SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ia_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ia_msgs, msg, SomeInfo)() {
  SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ia_msgs, msg, BaseStruct)();
  if (!SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_type_support_handle.typesupport_identifier) {
    SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SomeInfo__rosidl_typesupport_introspection_c__SomeInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

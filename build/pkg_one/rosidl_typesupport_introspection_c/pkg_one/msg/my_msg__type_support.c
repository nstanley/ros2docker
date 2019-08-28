// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pkg_one:msg/MyMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pkg_one/msg/my_msg__rosidl_typesupport_introspection_c.h"
#include "pkg_one/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pkg_one/msg/my_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_member_array[2] = {
  {
    "an_int",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg_one__msg__MyMsg, an_int),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a_uint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg_one__msg__MyMsg, a_uint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_members = {
  "pkg_one__msg",  // message namespace
  "MyMsg",  // message name
  2,  // number of fields
  sizeof(pkg_one__msg__MyMsg),
  MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle = {
  0,
  &MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg_one
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_one, msg, MyMsg)() {
  if (!MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle.typesupport_identifier) {
    MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

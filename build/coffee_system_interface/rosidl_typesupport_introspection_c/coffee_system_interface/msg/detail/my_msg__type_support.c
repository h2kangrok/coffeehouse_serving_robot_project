// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from coffee_system_interface:msg/MyMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "coffee_system_interface/msg/detail/my_msg__rosidl_typesupport_introspection_c.h"
#include "coffee_system_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "coffee_system_interface/msg/detail/my_msg__functions.h"
#include "coffee_system_interface/msg/detail/my_msg__struct.h"


// Include directives for member types
// Member `cook`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  coffee_system_interface__msg__MyMsg__init(message_memory);
}

void coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_fini_function(void * message_memory)
{
  coffee_system_interface__msg__MyMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_member_array[1] = {
  {
    "cook",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coffee_system_interface__msg__MyMsg, cook),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_members = {
  "coffee_system_interface__msg",  // message namespace
  "MyMsg",  // message name
  1,  // number of fields
  sizeof(coffee_system_interface__msg__MyMsg),
  coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_member_array,  // message members
  coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle = {
  0,
  &coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_coffee_system_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coffee_system_interface, msg, MyMsg)() {
  if (!coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle.typesupport_identifier) {
    coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &coffee_system_interface__msg__MyMsg__rosidl_typesupport_introspection_c__MyMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

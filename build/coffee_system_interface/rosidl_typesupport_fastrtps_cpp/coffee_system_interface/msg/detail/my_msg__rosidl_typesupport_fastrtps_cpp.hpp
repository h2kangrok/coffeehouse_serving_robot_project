// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from coffee_system_interface:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "coffee_system_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "coffee_system_interface/msg/detail/my_msg__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace coffee_system_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
cdr_serialize(
  const coffee_system_interface::msg::MyMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  coffee_system_interface::msg::MyMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
get_serialized_size(
  const coffee_system_interface::msg::MyMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
max_serialized_size_MyMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace coffee_system_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, msg, MyMsg)();

#ifdef __cplusplus
}
#endif

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from coffee_system_interface:msg/CallStaff.idl
// generated code does not contain a copyright notice
#include "coffee_system_interface/msg/detail/call_staff__rosidl_typesupport_fastrtps_cpp.hpp"
#include "coffee_system_interface/msg/detail/call_staff__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace coffee_system_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
cdr_serialize(
  const coffee_system_interface::msg::CallStaff & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: table_num
  cdr << ros_message.table_num;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  coffee_system_interface::msg::CallStaff & ros_message)
{
  // Member: table_num
  cdr >> ros_message.table_num;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
get_serialized_size(
  const coffee_system_interface::msg::CallStaff & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: table_num
  {
    size_t item_size = sizeof(ros_message.table_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coffee_system_interface
max_serialized_size_CallStaff(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: table_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = coffee_system_interface::msg::CallStaff;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CallStaff__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const coffee_system_interface::msg::CallStaff *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CallStaff__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<coffee_system_interface::msg::CallStaff *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CallStaff__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const coffee_system_interface::msg::CallStaff *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CallStaff__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CallStaff(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CallStaff__callbacks = {
  "coffee_system_interface::msg",
  "CallStaff",
  _CallStaff__cdr_serialize,
  _CallStaff__cdr_deserialize,
  _CallStaff__get_serialized_size,
  _CallStaff__max_serialized_size
};

static rosidl_message_type_support_t _CallStaff__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CallStaff__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace coffee_system_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_coffee_system_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::msg::CallStaff>()
{
  return &coffee_system_interface::msg::typesupport_fastrtps_cpp::_CallStaff__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, msg, CallStaff)() {
  return &coffee_system_interface::msg::typesupport_fastrtps_cpp::_CallStaff__handle;
}

#ifdef __cplusplus
}
#endif

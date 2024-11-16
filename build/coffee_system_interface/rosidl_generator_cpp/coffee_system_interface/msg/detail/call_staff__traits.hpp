// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from coffee_system_interface:msg/CallStaff.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__TRAITS_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "coffee_system_interface/msg/detail/call_staff__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace coffee_system_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CallStaff & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_num
  {
    out << "table_num: ";
    rosidl_generator_traits::value_to_yaml(msg.table_num, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CallStaff & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: table_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "table_num: ";
    rosidl_generator_traits::value_to_yaml(msg.table_num, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CallStaff & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace coffee_system_interface

namespace rosidl_generator_traits
{

[[deprecated("use coffee_system_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const coffee_system_interface::msg::CallStaff & msg,
  std::ostream & out, size_t indentation = 0)
{
  coffee_system_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coffee_system_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const coffee_system_interface::msg::CallStaff & msg)
{
  return coffee_system_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<coffee_system_interface::msg::CallStaff>()
{
  return "coffee_system_interface::msg::CallStaff";
}

template<>
inline const char * name<coffee_system_interface::msg::CallStaff>()
{
  return "coffee_system_interface/msg/CallStaff";
}

template<>
struct has_fixed_size<coffee_system_interface::msg::CallStaff>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<coffee_system_interface::msg::CallStaff>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<coffee_system_interface::msg::CallStaff>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__TRAITS_HPP_

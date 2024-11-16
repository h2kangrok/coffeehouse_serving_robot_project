// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from coffee_system_interface:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__TRAITS_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "coffee_system_interface/msg/detail/my_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace coffee_system_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: cook
  {
    out << "cook: ";
    rosidl_generator_traits::value_to_yaml(msg.cook, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cook
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cook: ";
    rosidl_generator_traits::value_to_yaml(msg.cook, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyMsg & msg, bool use_flow_style = false)
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
  const coffee_system_interface::msg::MyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  coffee_system_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coffee_system_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const coffee_system_interface::msg::MyMsg & msg)
{
  return coffee_system_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<coffee_system_interface::msg::MyMsg>()
{
  return "coffee_system_interface::msg::MyMsg";
}

template<>
inline const char * name<coffee_system_interface::msg::MyMsg>()
{
  return "coffee_system_interface/msg/MyMsg";
}

template<>
struct has_fixed_size<coffee_system_interface::msg::MyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<coffee_system_interface::msg::MyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<coffee_system_interface::msg::MyMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__TRAITS_HPP_

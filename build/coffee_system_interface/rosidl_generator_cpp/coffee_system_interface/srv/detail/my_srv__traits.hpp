// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from coffee_system_interface:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__TRAITS_HPP_
#define COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "coffee_system_interface/srv/detail/my_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace coffee_system_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const MySrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_num
  {
    out << "table_num: ";
    rosidl_generator_traits::value_to_yaml(msg.table_num, out);
    out << ", ";
  }

  // member: items
  {
    if (msg.items.size() == 0) {
      out << "items: []";
    } else {
      out << "items: [";
      size_t pending_items = msg.items.size();
      for (auto item : msg.items) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MySrv_Request & msg,
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

  // member: items
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.items.size() == 0) {
      out << "items: []\n";
    } else {
      out << "items:\n";
      for (auto item : msg.items) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MySrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace coffee_system_interface

namespace rosidl_generator_traits
{

[[deprecated("use coffee_system_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const coffee_system_interface::srv::MySrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  coffee_system_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coffee_system_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const coffee_system_interface::srv::MySrv_Request & msg)
{
  return coffee_system_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<coffee_system_interface::srv::MySrv_Request>()
{
  return "coffee_system_interface::srv::MySrv_Request";
}

template<>
inline const char * name<coffee_system_interface::srv::MySrv_Request>()
{
  return "coffee_system_interface/srv/MySrv_Request";
}

template<>
struct has_fixed_size<coffee_system_interface::srv::MySrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<coffee_system_interface::srv::MySrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<coffee_system_interface::srv::MySrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace coffee_system_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const MySrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const MySrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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

inline std::string to_yaml(const MySrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace coffee_system_interface

namespace rosidl_generator_traits
{

[[deprecated("use coffee_system_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const coffee_system_interface::srv::MySrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  coffee_system_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coffee_system_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const coffee_system_interface::srv::MySrv_Response & msg)
{
  return coffee_system_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<coffee_system_interface::srv::MySrv_Response>()
{
  return "coffee_system_interface::srv::MySrv_Response";
}

template<>
inline const char * name<coffee_system_interface::srv::MySrv_Response>()
{
  return "coffee_system_interface/srv/MySrv_Response";
}

template<>
struct has_fixed_size<coffee_system_interface::srv::MySrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<coffee_system_interface::srv::MySrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<coffee_system_interface::srv::MySrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<coffee_system_interface::srv::MySrv>()
{
  return "coffee_system_interface::srv::MySrv";
}

template<>
inline const char * name<coffee_system_interface::srv::MySrv>()
{
  return "coffee_system_interface/srv/MySrv";
}

template<>
struct has_fixed_size<coffee_system_interface::srv::MySrv>
  : std::integral_constant<
    bool,
    has_fixed_size<coffee_system_interface::srv::MySrv_Request>::value &&
    has_fixed_size<coffee_system_interface::srv::MySrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<coffee_system_interface::srv::MySrv>
  : std::integral_constant<
    bool,
    has_bounded_size<coffee_system_interface::srv::MySrv_Request>::value &&
    has_bounded_size<coffee_system_interface::srv::MySrv_Response>::value
  >
{
};

template<>
struct is_service<coffee_system_interface::srv::MySrv>
  : std::true_type
{
};

template<>
struct is_service_request<coffee_system_interface::srv::MySrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<coffee_system_interface::srv::MySrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__TRAITS_HPP_

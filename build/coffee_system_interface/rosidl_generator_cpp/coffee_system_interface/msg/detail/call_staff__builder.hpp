// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coffee_system_interface:msg/CallStaff.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__BUILDER_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coffee_system_interface/msg/detail/call_staff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coffee_system_interface
{

namespace msg
{

namespace builder
{

class Init_CallStaff_message
{
public:
  explicit Init_CallStaff_message(::coffee_system_interface::msg::CallStaff & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::msg::CallStaff message(::coffee_system_interface::msg::CallStaff::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::msg::CallStaff msg_;
};

class Init_CallStaff_table_num
{
public:
  Init_CallStaff_table_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CallStaff_message table_num(::coffee_system_interface::msg::CallStaff::_table_num_type arg)
  {
    msg_.table_num = std::move(arg);
    return Init_CallStaff_message(msg_);
  }

private:
  ::coffee_system_interface::msg::CallStaff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::msg::CallStaff>()
{
  return coffee_system_interface::msg::builder::Init_CallStaff_table_num();
}

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__BUILDER_HPP_

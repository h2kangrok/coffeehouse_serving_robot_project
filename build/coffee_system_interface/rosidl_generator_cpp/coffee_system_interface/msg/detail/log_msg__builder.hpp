// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coffee_system_interface:msg/LogMsg.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__LOG_MSG__BUILDER_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__LOG_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coffee_system_interface/msg/detail/log_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coffee_system_interface
{

namespace msg
{

namespace builder
{

class Init_LogMsg_log
{
public:
  Init_LogMsg_log()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::coffee_system_interface::msg::LogMsg log(::coffee_system_interface::msg::LogMsg::_log_type arg)
  {
    msg_.log = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::msg::LogMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::msg::LogMsg>()
{
  return coffee_system_interface::msg::builder::Init_LogMsg_log();
}

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__LOG_MSG__BUILDER_HPP_

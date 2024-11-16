// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coffee_system_interface:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__BUILDER_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coffee_system_interface/msg/detail/my_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coffee_system_interface
{

namespace msg
{

namespace builder
{

class Init_MyMsg_cook
{
public:
  Init_MyMsg_cook()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::coffee_system_interface::msg::MyMsg cook(::coffee_system_interface::msg::MyMsg::_cook_type arg)
  {
    msg_.cook = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::msg::MyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::msg::MyMsg>()
{
  return coffee_system_interface::msg::builder::Init_MyMsg_cook();
}

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__BUILDER_HPP_

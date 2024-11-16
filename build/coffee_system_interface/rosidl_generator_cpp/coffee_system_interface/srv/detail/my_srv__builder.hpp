// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coffee_system_interface:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__BUILDER_HPP_
#define COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coffee_system_interface/srv/detail/my_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coffee_system_interface
{

namespace srv
{

namespace builder
{

class Init_MySrv_Request_items
{
public:
  explicit Init_MySrv_Request_items(::coffee_system_interface::srv::MySrv_Request & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::srv::MySrv_Request items(::coffee_system_interface::srv::MySrv_Request::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::srv::MySrv_Request msg_;
};

class Init_MySrv_Request_table_num
{
public:
  Init_MySrv_Request_table_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MySrv_Request_items table_num(::coffee_system_interface::srv::MySrv_Request::_table_num_type arg)
  {
    msg_.table_num = std::move(arg);
    return Init_MySrv_Request_items(msg_);
  }

private:
  ::coffee_system_interface::srv::MySrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::srv::MySrv_Request>()
{
  return coffee_system_interface::srv::builder::Init_MySrv_Request_table_num();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace srv
{

namespace builder
{

class Init_MySrv_Response_message
{
public:
  explicit Init_MySrv_Response_message(::coffee_system_interface::srv::MySrv_Response & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::srv::MySrv_Response message(::coffee_system_interface::srv::MySrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::srv::MySrv_Response msg_;
};

class Init_MySrv_Response_success
{
public:
  Init_MySrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MySrv_Response_message success(::coffee_system_interface::srv::MySrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MySrv_Response_message(msg_);
  }

private:
  ::coffee_system_interface::srv::MySrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::srv::MySrv_Response>()
{
  return coffee_system_interface::srv::builder::Init_MySrv_Response_success();
}

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__BUILDER_HPP_

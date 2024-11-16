// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coffee_system_interface:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__STRUCT_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__coffee_system_interface__msg__MyMsg __attribute__((deprecated))
#else
# define DEPRECATED__coffee_system_interface__msg__MyMsg __declspec(deprecated)
#endif

namespace coffee_system_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyMsg_
{
  using Type = MyMsg_<ContainerAllocator>;

  explicit MyMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook = "";
    }
  }

  explicit MyMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cook(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook = "";
    }
  }

  // field types and members
  using _cook_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cook_type cook;

  // setters for named parameter idiom
  Type & set__cook(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cook = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coffee_system_interface::msg::MyMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const coffee_system_interface::msg::MyMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::msg::MyMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::msg::MyMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coffee_system_interface__msg__MyMsg
    std::shared_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coffee_system_interface__msg__MyMsg
    std::shared_ptr<coffee_system_interface::msg::MyMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyMsg_ & other) const
  {
    if (this->cook != other.cook) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyMsg_

// alias to use template instance with default allocator
using MyMsg =
  coffee_system_interface::msg::MyMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__STRUCT_HPP_

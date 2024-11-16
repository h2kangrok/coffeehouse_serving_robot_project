// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coffee_system_interface:msg/CallStaff.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__STRUCT_HPP_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__coffee_system_interface__msg__CallStaff __attribute__((deprecated))
#else
# define DEPRECATED__coffee_system_interface__msg__CallStaff __declspec(deprecated)
#endif

namespace coffee_system_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CallStaff_
{
  using Type = CallStaff_<ContainerAllocator>;

  explicit CallStaff_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_num = 0l;
      this->message = "";
    }
  }

  explicit CallStaff_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_num = 0l;
      this->message = "";
    }
  }

  // field types and members
  using _table_num_type =
    int32_t;
  _table_num_type table_num;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__table_num(
    const int32_t & _arg)
  {
    this->table_num = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coffee_system_interface::msg::CallStaff_<ContainerAllocator> *;
  using ConstRawPtr =
    const coffee_system_interface::msg::CallStaff_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::msg::CallStaff_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::msg::CallStaff_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coffee_system_interface__msg__CallStaff
    std::shared_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coffee_system_interface__msg__CallStaff
    std::shared_ptr<coffee_system_interface::msg::CallStaff_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CallStaff_ & other) const
  {
    if (this->table_num != other.table_num) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CallStaff_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CallStaff_

// alias to use template instance with default allocator
using CallStaff =
  coffee_system_interface::msg::CallStaff_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__STRUCT_HPP_

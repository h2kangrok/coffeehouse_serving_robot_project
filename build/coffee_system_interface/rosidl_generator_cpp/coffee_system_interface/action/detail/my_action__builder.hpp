// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coffee_system_interface:action/MyAction.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__ACTION__DETAIL__MY_ACTION__BUILDER_HPP_
#define COFFEE_SYSTEM_INTERFACE__ACTION__DETAIL__MY_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coffee_system_interface/action/detail/my_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_Goal_wait_time
{
public:
  explicit Init_MyAction_Goal_wait_time(::coffee_system_interface::action::MyAction_Goal & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::action::MyAction_Goal wait_time(::coffee_system_interface::action::MyAction_Goal::_wait_time_type arg)
  {
    msg_.wait_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Goal msg_;
};

class Init_MyAction_Goal_table_num
{
public:
  Init_MyAction_Goal_table_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_Goal_wait_time table_num(::coffee_system_interface::action::MyAction_Goal::_table_num_type arg)
  {
    msg_.table_num = std::move(arg);
    return Init_MyAction_Goal_wait_time(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_Goal>()
{
  return coffee_system_interface::action::builder::Init_MyAction_Goal_table_num();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_Result_total_time
{
public:
  explicit Init_MyAction_Result_total_time(::coffee_system_interface::action::MyAction_Result & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::action::MyAction_Result total_time(::coffee_system_interface::action::MyAction_Result::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Result msg_;
};

class Init_MyAction_Result_final_location
{
public:
  explicit Init_MyAction_Result_final_location(::coffee_system_interface::action::MyAction_Result & msg)
  : msg_(msg)
  {}
  Init_MyAction_Result_total_time final_location(::coffee_system_interface::action::MyAction_Result::_final_location_type arg)
  {
    msg_.final_location = std::move(arg);
    return Init_MyAction_Result_total_time(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Result msg_;
};

class Init_MyAction_Result_message
{
public:
  explicit Init_MyAction_Result_message(::coffee_system_interface::action::MyAction_Result & msg)
  : msg_(msg)
  {}
  Init_MyAction_Result_final_location message(::coffee_system_interface::action::MyAction_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MyAction_Result_final_location(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Result msg_;
};

class Init_MyAction_Result_success
{
public:
  Init_MyAction_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_Result_message success(::coffee_system_interface::action::MyAction_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MyAction_Result_message(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_Result>()
{
  return coffee_system_interface::action::builder::Init_MyAction_Result_success();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_Feedback_current_location
{
public:
  explicit Init_MyAction_Feedback_current_location(::coffee_system_interface::action::MyAction_Feedback & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::action::MyAction_Feedback current_location(::coffee_system_interface::action::MyAction_Feedback::_current_location_type arg)
  {
    msg_.current_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Feedback msg_;
};

class Init_MyAction_Feedback_time_elapsed
{
public:
  explicit Init_MyAction_Feedback_time_elapsed(::coffee_system_interface::action::MyAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_MyAction_Feedback_current_location time_elapsed(::coffee_system_interface::action::MyAction_Feedback::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return Init_MyAction_Feedback_current_location(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Feedback msg_;
};

class Init_MyAction_Feedback_current_state
{
public:
  Init_MyAction_Feedback_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_Feedback_time_elapsed current_state(::coffee_system_interface::action::MyAction_Feedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_MyAction_Feedback_time_elapsed(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_Feedback>()
{
  return coffee_system_interface::action::builder::Init_MyAction_Feedback_current_state();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_SendGoal_Request_goal
{
public:
  explicit Init_MyAction_SendGoal_Request_goal(::coffee_system_interface::action::MyAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::action::MyAction_SendGoal_Request goal(::coffee_system_interface::action::MyAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_SendGoal_Request msg_;
};

class Init_MyAction_SendGoal_Request_goal_id
{
public:
  Init_MyAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_SendGoal_Request_goal goal_id(::coffee_system_interface::action::MyAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyAction_SendGoal_Request_goal(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_SendGoal_Request>()
{
  return coffee_system_interface::action::builder::Init_MyAction_SendGoal_Request_goal_id();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_SendGoal_Response_stamp
{
public:
  explicit Init_MyAction_SendGoal_Response_stamp(::coffee_system_interface::action::MyAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::action::MyAction_SendGoal_Response stamp(::coffee_system_interface::action::MyAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_SendGoal_Response msg_;
};

class Init_MyAction_SendGoal_Response_accepted
{
public:
  Init_MyAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_SendGoal_Response_stamp accepted(::coffee_system_interface::action::MyAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MyAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_SendGoal_Response>()
{
  return coffee_system_interface::action::builder::Init_MyAction_SendGoal_Response_accepted();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_GetResult_Request_goal_id
{
public:
  Init_MyAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::coffee_system_interface::action::MyAction_GetResult_Request goal_id(::coffee_system_interface::action::MyAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_GetResult_Request>()
{
  return coffee_system_interface::action::builder::Init_MyAction_GetResult_Request_goal_id();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_GetResult_Response_result
{
public:
  explicit Init_MyAction_GetResult_Response_result(::coffee_system_interface::action::MyAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::action::MyAction_GetResult_Response result(::coffee_system_interface::action::MyAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_GetResult_Response msg_;
};

class Init_MyAction_GetResult_Response_status
{
public:
  Init_MyAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_GetResult_Response_result status(::coffee_system_interface::action::MyAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MyAction_GetResult_Response_result(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_GetResult_Response>()
{
  return coffee_system_interface::action::builder::Init_MyAction_GetResult_Response_status();
}

}  // namespace coffee_system_interface


namespace coffee_system_interface
{

namespace action
{

namespace builder
{

class Init_MyAction_FeedbackMessage_feedback
{
public:
  explicit Init_MyAction_FeedbackMessage_feedback(::coffee_system_interface::action::MyAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::coffee_system_interface::action::MyAction_FeedbackMessage feedback(::coffee_system_interface::action::MyAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_FeedbackMessage msg_;
};

class Init_MyAction_FeedbackMessage_goal_id
{
public:
  Init_MyAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_FeedbackMessage_feedback goal_id(::coffee_system_interface::action::MyAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::coffee_system_interface::action::MyAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coffee_system_interface::action::MyAction_FeedbackMessage>()
{
  return coffee_system_interface::action::builder::Init_MyAction_FeedbackMessage_goal_id();
}

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__ACTION__DETAIL__MY_ACTION__BUILDER_HPP_

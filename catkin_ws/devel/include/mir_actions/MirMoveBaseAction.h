// Generated by gencpp from file mir_actions/MirMoveBaseAction.msg
// DO NOT EDIT!


#ifndef MIR_ACTIONS_MESSAGE_MIRMOVEBASEACTION_H
#define MIR_ACTIONS_MESSAGE_MIRMOVEBASEACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mir_actions/MirMoveBaseActionGoal.h>
#include <mir_actions/MirMoveBaseActionResult.h>
#include <mir_actions/MirMoveBaseActionFeedback.h>

namespace mir_actions
{
template <class ContainerAllocator>
struct MirMoveBaseAction_
{
  typedef MirMoveBaseAction_<ContainerAllocator> Type;

  MirMoveBaseAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  MirMoveBaseAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::mir_actions::MirMoveBaseActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::mir_actions::MirMoveBaseActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::mir_actions::MirMoveBaseActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> const> ConstPtr;

}; // struct MirMoveBaseAction_

typedef ::mir_actions::MirMoveBaseAction_<std::allocator<void> > MirMoveBaseAction;

typedef boost::shared_ptr< ::mir_actions::MirMoveBaseAction > MirMoveBaseActionPtr;
typedef boost::shared_ptr< ::mir_actions::MirMoveBaseAction const> MirMoveBaseActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_actions::MirMoveBaseAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_actions::MirMoveBaseAction_<ContainerAllocator1> & lhs, const ::mir_actions::MirMoveBaseAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_actions::MirMoveBaseAction_<ContainerAllocator1> & lhs, const ::mir_actions::MirMoveBaseAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_actions

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ed52f96e28b63ff15853a6b2114fe93";
  }

  static const char* value(const ::mir_actions::MirMoveBaseAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ed52f96e28b63ffULL;
  static const uint64_t static_value2 = 0x15853a6b2114fe93ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_actions/MirMoveBaseAction";
  }

  static const char* value(const ::mir_actions::MirMoveBaseAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"MirMoveBaseActionGoal action_goal\n"
"MirMoveBaseActionResult action_result\n"
"MirMoveBaseActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: mir_actions/MirMoveBaseActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"MirMoveBaseGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: mir_actions/MirMoveBaseGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"#move type\n"
"int16 BASE_MOVE = 0\n"
"int16 GLOBAL_MOVE = 1\n"
"int16 RELATIVE_MOVE = 2\n"
"int16 RELATIVE_MARKER_MOVE = 3\n"
"int16 DOCKING_MOVE = 4\n"
"int16 DOCKING_GLOBAL_MOVE = 5\n"
"int16 PATH_TYPE = 6\n"
"int16 move_task\n"
"\n"
"#shared parameters\n"
"geometry_msgs/PoseStamped target_pose\n"
"string target_guid\n"
"\n"
"#global move parameters\n"
"float64 goal_dist_threshold\n"
"float64 goal_orientation_threshold\n"
"nav_msgs/Path path\n"
"float32 max_plan_time\n"
"bool clear_costmaps\n"
"bool pause_command\n"
"bool continue_command\n"
"\n"
"#relative move parameters\n"
"float64 yaw\n"
"bool collision_detection\n"
"bool collision_avoidance\n"
"float64 disable_collision_check_dist\n"
"float64 max_linear_speed\n"
"float64 max_rotational_speed\n"
"float64 pid_dist_offset\n"
"float64 target_offset\n"
"bool only_collision_detection\n"
"float64 timeout\n"
"\n"
"#docking move parameters\n"
"int32 pattern_type\n"
"int32 pattern_value\n"
"bool only_track\n"
"bool same_goal\n"
"string pose_frame\n"
"geometry_msgs/Pose2D pose\n"
"geometry_msgs/Pose2D offset\n"
"float64 bar_length\n"
"float64 bar_distance\n"
"float64 shelf_leg_asymmetry_x\n"
"float64 tolerance\n"
"\n"
"#Path type\n"
"mir_msgs/MirLocalPlannerPathTypes path_type\n"
"geometry_msgs/PoseStamped start_pose\n"
"# float64 timeout\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/Path\n"
"#An array of poses that represents a Path for a robot to follow\n"
"Header header\n"
"geometry_msgs/PoseStamped[] poses\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/MirLocalPlannerPathTypes\n"
"uint8 REVERSE_TROLLEY_STANDARD=1\n"
"uint8 REVERSE_TROLLEY_FAST=2\n"
"uint8 REVERSE_TROLLEY_COMPACT=3\n"
"\n"
"\n"
"uint8 path_type\n"
"\n"
"================================================================================\n"
"MSG: mir_actions/MirMoveBaseActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"MirMoveBaseResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: mir_actions/MirMoveBaseResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"\n"
"#shared states\n"
"int16 UNDEFINED = 0\n"
"int16 GOAL_REACHED = 1\n"
"int16 FAILED = -1\n"
"\n"
"#global move states\n"
"int16 MARKER_VISIBLE = 2\n"
"int16 FAILED_NO_PATH = -2\n"
"int16 FAILED_GOAL_IN_STATIC_OBSTACLE = -3\n"
"int16 FAILED_GOAL_IN_FORBIDDEN_AREA = -4\n"
"int16 FAILED_GOAL_IN_DYNAMIC_OBSTACLE = -5\n"
"int16 FAILED_ROBOT_IN_COLLISION = -6\n"
"int16 FAILED_ROBOT_IN_FORBIDDEN_AREA = -7\n"
"int16 FAILED_UNKNOWN_TRAILER = -8\n"
"int16 FAILED_TO_PASS_GLOBAL_PLAN = -9\n"
"int16 FAILED_NO_VALID_RECOVERY_CONTROL = -10\n"
"int16 FAILED_UNKNOWN_PLANNER_ERROR = -11\n"
"int16 FAILED_ROBOT_OSCILLATING = -12\n"
"int16 FAILED_SOFTWARE_ERROR = -13\n"
"\n"
"#relative move states\n"
"int16 FAILED_TIMEOUT = -14\n"
"int16 FAILED_COLLISION = -15\n"
"int16 INVALID_GOAL = -16\n"
"\n"
"#docking move states\n"
"int16 FAILED_MARKER_TRACKING_ERROR = -17\n"
"\n"
"#shared results\n"
"int16 end_state\n"
"geometry_msgs/PoseStamped end_pose\n"
"\n"
"#docking results\n"
"geometry_msgs/Pose2D pose\n"
"\n"
"#feedback for UI\n"
"string message\n"
"\n"
"\n"
"================================================================================\n"
"MSG: mir_actions/MirMoveBaseActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"MirMoveBaseFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: mir_actions/MirMoveBaseFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"#shared\n"
"int8 NOT_READY = -1\n"
"int8 UNKNOWN = -2\n"
"int8 WAITING_FOR_FLEET = -3\n"
"int8 COLLISION = -4\n"
"\n"
"#global move states\n"
"int8 PLANNING = 0\n"
"int8 CONTROLLING = 1\n"
"int8 CLEARING = 2\n"
"\n"
"#relative move states\n"
"int8 DOCKING = 3\n"
"\n"
"#shared feedback\n"
"int8 state\n"
"\n"
"#global move feedback\n"
"geometry_msgs/PoseStamped base_position\n"
"\n"
"#relative move feedback\n"
"geometry_msgs/PoseStamped current_goal\n"
"geometry_msgs/PoseStamped dist_to_goal\n"
"\n"
"#docking move feedback\n"
"geometry_msgs/Pose2D pose\n"
"bool marker_inversion\n"
"\n"
"#path_types\n"
"    #reverse_trolly\n"
"int8 MOVING_FORWARD = 10\n"
"int8 MOVING_BACKWARD = 11\n"
"\n"
;
  }

  static const char* value(const ::mir_actions::MirMoveBaseAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MirMoveBaseAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_actions::MirMoveBaseAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_actions::MirMoveBaseAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::mir_actions::MirMoveBaseActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::mir_actions::MirMoveBaseActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::mir_actions::MirMoveBaseActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_ACTIONS_MESSAGE_MIRMOVEBASEACTION_H

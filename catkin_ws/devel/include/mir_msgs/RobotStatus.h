// Generated by gencpp from file mir_msgs/RobotStatus.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_ROBOTSTATUS_H
#define MIR_MSGS_MESSAGE_ROBOTSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <mir_msgs/Error.h>
#include <mir_msgs/HookStatus.h>
#include <mir_msgs/HookData.h>
#include <mir_msgs/Pose2D.h>
#include <mir_msgs/Twist2D.h>
#include <mir_msgs/UserPrompt.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct RobotStatus_
{
  typedef RobotStatus_<ContainerAllocator> Type;

  RobotStatus_()
    : header()
    , battery_percentage(0.0)
    , battery_time_remaining(0)
    , battery_voltage(0.0)
    , distance_to_next_target(0.0)
    , errors()
    , footprint()
    , hook_status()
    , hook_data()
    , map_id()
    , unloaded_map_changes(false)
    , mission_queue_id(0)
    , mission_text()
    , mode_id(0)
    , mode_text()
    , moved(0.0)
    , position()
    , robot_name()
    , session_id()
    , software_version()
    , state_id(0)
    , state_text()
    , uptime(0)
    , velocity()
    , user_prompt()
    , safety_system_muted(false)
    , joystick_low_speed_mode_enabled(false)
    , joystick_web_session_id()
    , mode_key_state()  {
    }
  RobotStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , battery_percentage(0.0)
    , battery_time_remaining(0)
    , battery_voltage(0.0)
    , distance_to_next_target(0.0)
    , errors(_alloc)
    , footprint(_alloc)
    , hook_status(_alloc)
    , hook_data(_alloc)
    , map_id(_alloc)
    , unloaded_map_changes(false)
    , mission_queue_id(0)
    , mission_text(_alloc)
    , mode_id(0)
    , mode_text(_alloc)
    , moved(0.0)
    , position(_alloc)
    , robot_name(_alloc)
    , session_id(_alloc)
    , software_version(_alloc)
    , state_id(0)
    , state_text(_alloc)
    , uptime(0)
    , velocity(_alloc)
    , user_prompt(_alloc)
    , safety_system_muted(false)
    , joystick_low_speed_mode_enabled(false)
    , joystick_web_session_id(_alloc)
    , mode_key_state(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _battery_percentage_type;
  _battery_percentage_type battery_percentage;

   typedef int32_t _battery_time_remaining_type;
  _battery_time_remaining_type battery_time_remaining;

   typedef float _battery_voltage_type;
  _battery_voltage_type battery_voltage;

   typedef float _distance_to_next_target_type;
  _distance_to_next_target_type distance_to_next_target;

   typedef std::vector< ::mir_msgs::Error_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mir_msgs::Error_<ContainerAllocator> >::other >  _errors_type;
  _errors_type errors;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _footprint_type;
  _footprint_type footprint;

   typedef  ::mir_msgs::HookStatus_<ContainerAllocator>  _hook_status_type;
  _hook_status_type hook_status;

   typedef  ::mir_msgs::HookData_<ContainerAllocator>  _hook_data_type;
  _hook_data_type hook_data;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _map_id_type;
  _map_id_type map_id;

   typedef uint8_t _unloaded_map_changes_type;
  _unloaded_map_changes_type unloaded_map_changes;

   typedef int32_t _mission_queue_id_type;
  _mission_queue_id_type mission_queue_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mission_text_type;
  _mission_text_type mission_text;

   typedef int32_t _mode_id_type;
  _mode_id_type mode_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_text_type;
  _mode_text_type mode_text;

   typedef double _moved_type;
  _moved_type moved;

   typedef  ::mir_msgs::Pose2D_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _robot_name_type;
  _robot_name_type robot_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _session_id_type;
  _session_id_type session_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _software_version_type;
  _software_version_type software_version;

   typedef uint8_t _state_id_type;
  _state_id_type state_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_text_type;
  _state_text_type state_text;

   typedef int32_t _uptime_type;
  _uptime_type uptime;

   typedef  ::mir_msgs::Twist2D_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::mir_msgs::UserPrompt_<ContainerAllocator>  _user_prompt_type;
  _user_prompt_type user_prompt;

   typedef uint8_t _safety_system_muted_type;
  _safety_system_muted_type safety_system_muted;

   typedef uint8_t _joystick_low_speed_mode_enabled_type;
  _joystick_low_speed_mode_enabled_type joystick_low_speed_mode_enabled;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joystick_web_session_id_type;
  _joystick_web_session_id_type joystick_web_session_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_key_state_type;
  _mode_key_state_type mode_key_state;





  typedef boost::shared_ptr< ::mir_msgs::RobotStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::RobotStatus_<ContainerAllocator> const> ConstPtr;

}; // struct RobotStatus_

typedef ::mir_msgs::RobotStatus_<std::allocator<void> > RobotStatus;

typedef boost::shared_ptr< ::mir_msgs::RobotStatus > RobotStatusPtr;
typedef boost::shared_ptr< ::mir_msgs::RobotStatus const> RobotStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::RobotStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::RobotStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::RobotStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::RobotStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.battery_percentage == rhs.battery_percentage &&
    lhs.battery_time_remaining == rhs.battery_time_remaining &&
    lhs.battery_voltage == rhs.battery_voltage &&
    lhs.distance_to_next_target == rhs.distance_to_next_target &&
    lhs.errors == rhs.errors &&
    lhs.footprint == rhs.footprint &&
    lhs.hook_status == rhs.hook_status &&
    lhs.hook_data == rhs.hook_data &&
    lhs.map_id == rhs.map_id &&
    lhs.unloaded_map_changes == rhs.unloaded_map_changes &&
    lhs.mission_queue_id == rhs.mission_queue_id &&
    lhs.mission_text == rhs.mission_text &&
    lhs.mode_id == rhs.mode_id &&
    lhs.mode_text == rhs.mode_text &&
    lhs.moved == rhs.moved &&
    lhs.position == rhs.position &&
    lhs.robot_name == rhs.robot_name &&
    lhs.session_id == rhs.session_id &&
    lhs.software_version == rhs.software_version &&
    lhs.state_id == rhs.state_id &&
    lhs.state_text == rhs.state_text &&
    lhs.uptime == rhs.uptime &&
    lhs.velocity == rhs.velocity &&
    lhs.user_prompt == rhs.user_prompt &&
    lhs.safety_system_muted == rhs.safety_system_muted &&
    lhs.joystick_low_speed_mode_enabled == rhs.joystick_low_speed_mode_enabled &&
    lhs.joystick_web_session_id == rhs.joystick_web_session_id &&
    lhs.mode_key_state == rhs.mode_key_state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::RobotStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::RobotStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::RobotStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::RobotStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::RobotStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::RobotStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::RobotStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::RobotStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b840ddb96dfd7ada160f7cf87874a66";
  }

  static const char* value(const ::mir_msgs::RobotStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b840ddb96dfd7adULL;
  static const uint64_t static_value2 = 0xa160f7cf87874a66ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/RobotStatus";
  }

  static const char* value(const ::mir_msgs::RobotStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 battery_percentage\n"
"int32 battery_time_remaining\n"
"float32 battery_voltage\n"
"float32 distance_to_next_target\n"
"Error[] errors\n"
"string footprint\n"
"HookStatus hook_status\n"
"HookData hook_data\n"
"string map_id\n"
"bool unloaded_map_changes\n"
"int32 mission_queue_id\n"
"string mission_text\n"
"int32 mode_id\n"
"string mode_text\n"
"float64 moved\n"
"Pose2D position\n"
"string robot_name\n"
"string session_id\n"
"string software_version\n"
"uint8 state_id\n"
"string state_text\n"
"int32 uptime\n"
"Twist2D velocity\n"
"mir_msgs/UserPrompt user_prompt\n"
"bool safety_system_muted\n"
"bool joystick_low_speed_mode_enabled\n"
"string joystick_web_session_id\n"
"string mode_key_state\n"
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
"MSG: mir_msgs/Error\n"
"# Definition of offsets indicating what type an error is\n"
"int32 HARDWARE_ERROR = 0\n"
"int32 CPU_LOAD_ERROR = 100\n"
"int32 MEMORY_ERROR = 200\n"
"int32 ETHERNET_ERROR = 300\n"
"int32 HDD_ERROR = 400\n"
"int32 BATTERY_ERROR = 500\n"
"int32 IMU_ERROR = 600\n"
"int32 MOTOR_ERROR = 700\n"
"int32 LASER_ERROR = 800\n"
"int32 CAMERA_ERROR = 900\n"
"int32 SAFETY_SYSTEM_ERROR = 1000\n"
"int32 POWERBOARD_ERROR = 2000\n"
"int32 POWERSUPPLY_ERROR = 2100\n"
"int32 CANBUS_ERROR = 2200\n"
"int32 HOOK_ERROR = 5000\n"
"int32 HOOK_CAMERA_ERROR = 5100\n"
"int32 HOOK_ACTUATOR_ERROR = 5200\n"
"int32 HOOK_BRAKE_ERROR = 5300\n"
"int32 HOOK_ENCODER_ERROR = 5400\n"
"int32 MISSING_ERROR = 9000\n"
"int32 SOFTWARE_ERROR = 10000\n"
"int32 MISSION_ERROR = 10100\n"
"int32 LOCALIZATION_ERROR = 10200\n"
"int32 MAPPING_ERROR = 10300\n"
"int32 ODOM_FUSION_ERROR = 10400\n"
"int32 EVACUATION_ERROR = 12000\n"
"\n"
"\n"
"time timestamp		# Timestamp for when the error occurred\n"
"int32 code 			# Error code\n"
"string description 	# Error description\n"
"string module		# Module in which the error occurred\n"
"bool nolog          # Do not trigger an error log if set to true\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/HookStatus\n"
"bool available\n"
"float32 length\n"
"float32 height\n"
"float32 angle\n"
"bool braked\n"
"\n"
"bool trolley_attached\n"
"Trolley trolley\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/Trolley\n"
"int32 id\n"
"float32 length\n"
"float32 width\n"
"float32 height\n"
"float32 offset_locked_wheels\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/HookData\n"
"AngleMeasurment angle\n"
"float64 height\n"
"float64 length\n"
"uint8 brake_state\n"
"uint8 gripper_state\n"
"uint8 height_state\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/AngleMeasurment\n"
"float64 angle #radians\n"
"time timestamp\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/Pose2D\n"
"float32 x\n"
"float32 y\n"
"float32 orientation\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/Twist2D\n"
"float32 linear\n"
"float32 angular\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/UserPrompt\n"
"bool has_request\n"
"string guid\n"
"string user_group\n"
"string question\n"
"string[] options\n"
"duration timeout\n"
;
  }

  static const char* value(const ::mir_msgs::RobotStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::RobotStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.battery_percentage);
      stream.next(m.battery_time_remaining);
      stream.next(m.battery_voltage);
      stream.next(m.distance_to_next_target);
      stream.next(m.errors);
      stream.next(m.footprint);
      stream.next(m.hook_status);
      stream.next(m.hook_data);
      stream.next(m.map_id);
      stream.next(m.unloaded_map_changes);
      stream.next(m.mission_queue_id);
      stream.next(m.mission_text);
      stream.next(m.mode_id);
      stream.next(m.mode_text);
      stream.next(m.moved);
      stream.next(m.position);
      stream.next(m.robot_name);
      stream.next(m.session_id);
      stream.next(m.software_version);
      stream.next(m.state_id);
      stream.next(m.state_text);
      stream.next(m.uptime);
      stream.next(m.velocity);
      stream.next(m.user_prompt);
      stream.next(m.safety_system_muted);
      stream.next(m.joystick_low_speed_mode_enabled);
      stream.next(m.joystick_web_session_id);
      stream.next(m.mode_key_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::RobotStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::RobotStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "battery_percentage: ";
    Printer<float>::stream(s, indent + "  ", v.battery_percentage);
    s << indent << "battery_time_remaining: ";
    Printer<int32_t>::stream(s, indent + "  ", v.battery_time_remaining);
    s << indent << "battery_voltage: ";
    Printer<float>::stream(s, indent + "  ", v.battery_voltage);
    s << indent << "distance_to_next_target: ";
    Printer<float>::stream(s, indent + "  ", v.distance_to_next_target);
    s << indent << "errors[]" << std::endl;
    for (size_t i = 0; i < v.errors.size(); ++i)
    {
      s << indent << "  errors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mir_msgs::Error_<ContainerAllocator> >::stream(s, indent + "    ", v.errors[i]);
    }
    s << indent << "footprint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.footprint);
    s << indent << "hook_status: ";
    s << std::endl;
    Printer< ::mir_msgs::HookStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.hook_status);
    s << indent << "hook_data: ";
    s << std::endl;
    Printer< ::mir_msgs::HookData_<ContainerAllocator> >::stream(s, indent + "  ", v.hook_data);
    s << indent << "map_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map_id);
    s << indent << "unloaded_map_changes: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.unloaded_map_changes);
    s << indent << "mission_queue_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mission_queue_id);
    s << indent << "mission_text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mission_text);
    s << indent << "mode_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode_id);
    s << indent << "mode_text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode_text);
    s << indent << "moved: ";
    Printer<double>::stream(s, indent + "  ", v.moved);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::mir_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "robot_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.robot_name);
    s << indent << "session_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.session_id);
    s << indent << "software_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.software_version);
    s << indent << "state_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state_id);
    s << indent << "state_text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state_text);
    s << indent << "uptime: ";
    Printer<int32_t>::stream(s, indent + "  ", v.uptime);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::mir_msgs::Twist2D_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "user_prompt: ";
    s << std::endl;
    Printer< ::mir_msgs::UserPrompt_<ContainerAllocator> >::stream(s, indent + "  ", v.user_prompt);
    s << indent << "safety_system_muted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.safety_system_muted);
    s << indent << "joystick_low_speed_mode_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.joystick_low_speed_mode_enabled);
    s << indent << "joystick_web_session_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joystick_web_session_id);
    s << indent << "mode_key_state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode_key_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_ROBOTSTATUS_H

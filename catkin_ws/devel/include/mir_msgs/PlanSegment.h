// Generated by gencpp from file mir_msgs/PlanSegment.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_PLANSEGMENT_H
#define MIR_MSGS_MESSAGE_PLANSEGMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct PlanSegment_
{
  typedef PlanSegment_<ContainerAllocator> Type;

  PlanSegment_()
    : forward_motion(false)
    , start_idx(0)
    , length(0.0)
    , remaining_length(0.0)
    , path()  {
    }
  PlanSegment_(const ContainerAllocator& _alloc)
    : forward_motion(false)
    , start_idx(0)
    , length(0.0)
    , remaining_length(0.0)
    , path(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _forward_motion_type;
  _forward_motion_type forward_motion;

   typedef int32_t _start_idx_type;
  _start_idx_type start_idx;

   typedef double _length_type;
  _length_type length;

   typedef double _remaining_length_type;
  _remaining_length_type remaining_length;

   typedef std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  _path_type;
  _path_type path;





  typedef boost::shared_ptr< ::mir_msgs::PlanSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::PlanSegment_<ContainerAllocator> const> ConstPtr;

}; // struct PlanSegment_

typedef ::mir_msgs::PlanSegment_<std::allocator<void> > PlanSegment;

typedef boost::shared_ptr< ::mir_msgs::PlanSegment > PlanSegmentPtr;
typedef boost::shared_ptr< ::mir_msgs::PlanSegment const> PlanSegmentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::PlanSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::PlanSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::PlanSegment_<ContainerAllocator1> & lhs, const ::mir_msgs::PlanSegment_<ContainerAllocator2> & rhs)
{
  return lhs.forward_motion == rhs.forward_motion &&
    lhs.start_idx == rhs.start_idx &&
    lhs.length == rhs.length &&
    lhs.remaining_length == rhs.remaining_length &&
    lhs.path == rhs.path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::PlanSegment_<ContainerAllocator1> & lhs, const ::mir_msgs::PlanSegment_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::PlanSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::PlanSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::PlanSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::PlanSegment_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::PlanSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::PlanSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::PlanSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c6d67394c744f2efcb7b0a0b73ce7cc";
  }

  static const char* value(const ::mir_msgs::PlanSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c6d67394c744f2eULL;
  static const uint64_t static_value2 = 0xfcb7b0a0b73ce7ccULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::PlanSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/PlanSegment";
  }

  static const char* value(const ::mir_msgs::PlanSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::PlanSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool forward_motion\n"
"int32 start_idx\n"
"float64 length\n"
"float64 remaining_length\n"
"geometry_msgs/PoseStamped[] path\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
;
  }

  static const char* value(const ::mir_msgs::PlanSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::PlanSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.forward_motion);
      stream.next(m.start_idx);
      stream.next(m.length);
      stream.next(m.remaining_length);
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::PlanSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::PlanSegment_<ContainerAllocator>& v)
  {
    s << indent << "forward_motion: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.forward_motion);
    s << indent << "start_idx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.start_idx);
    s << indent << "length: ";
    Printer<double>::stream(s, indent + "  ", v.length);
    s << indent << "remaining_length: ";
    Printer<double>::stream(s, indent + "  ", v.remaining_length);
    s << indent << "path[]" << std::endl;
    for (size_t i = 0; i < v.path.size(); ++i)
    {
      s << indent << "  path[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.path[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_PLANSEGMENT_H
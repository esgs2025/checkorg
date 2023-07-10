// Generated by gencpp from file mir_msgs/EncoderTestEntry.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_ENCODERTESTENTRY_H
#define MIR_MSGS_MESSAGE_ENCODERTESTENTRY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mir_msgs
{
template <class ContainerAllocator>
struct EncoderTestEntry_
{
  typedef EncoderTestEntry_<ContainerAllocator> Type;

  EncoderTestEntry_()
    : command_velocity(0.0)
    , command_distance(0.0)
    , left_dist(0.0)
    , right_dist(0.0)
    , suggested_direction()
    , user_direction()  {
    }
  EncoderTestEntry_(const ContainerAllocator& _alloc)
    : command_velocity(0.0)
    , command_distance(0.0)
    , left_dist(0.0)
    , right_dist(0.0)
    , suggested_direction(_alloc)
    , user_direction(_alloc)  {
  (void)_alloc;
    }



   typedef double _command_velocity_type;
  _command_velocity_type command_velocity;

   typedef double _command_distance_type;
  _command_distance_type command_distance;

   typedef double _left_dist_type;
  _left_dist_type left_dist;

   typedef double _right_dist_type;
  _right_dist_type right_dist;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _suggested_direction_type;
  _suggested_direction_type suggested_direction;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _user_direction_type;
  _user_direction_type user_direction;





  typedef boost::shared_ptr< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> const> ConstPtr;

}; // struct EncoderTestEntry_

typedef ::mir_msgs::EncoderTestEntry_<std::allocator<void> > EncoderTestEntry;

typedef boost::shared_ptr< ::mir_msgs::EncoderTestEntry > EncoderTestEntryPtr;
typedef boost::shared_ptr< ::mir_msgs::EncoderTestEntry const> EncoderTestEntryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::EncoderTestEntry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::EncoderTestEntry_<ContainerAllocator1> & lhs, const ::mir_msgs::EncoderTestEntry_<ContainerAllocator2> & rhs)
{
  return lhs.command_velocity == rhs.command_velocity &&
    lhs.command_distance == rhs.command_distance &&
    lhs.left_dist == rhs.left_dist &&
    lhs.right_dist == rhs.right_dist &&
    lhs.suggested_direction == rhs.suggested_direction &&
    lhs.user_direction == rhs.user_direction;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::EncoderTestEntry_<ContainerAllocator1> & lhs, const ::mir_msgs::EncoderTestEntry_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cfe8d446cf8b8eaf478f3a59f1f6abdd";
  }

  static const char* value(const ::mir_msgs::EncoderTestEntry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcfe8d446cf8b8eafULL;
  static const uint64_t static_value2 = 0x478f3a59f1f6abddULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/EncoderTestEntry";
  }

  static const char* value(const ::mir_msgs::EncoderTestEntry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 command_velocity\n"
"float64 command_distance\n"
"float64 left_dist\n"
"float64 right_dist\n"
"string suggested_direction\n"
"string user_direction\n"
;
  }

  static const char* value(const ::mir_msgs::EncoderTestEntry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command_velocity);
      stream.next(m.command_distance);
      stream.next(m.left_dist);
      stream.next(m.right_dist);
      stream.next(m.suggested_direction);
      stream.next(m.user_direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EncoderTestEntry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::EncoderTestEntry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::EncoderTestEntry_<ContainerAllocator>& v)
  {
    s << indent << "command_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.command_velocity);
    s << indent << "command_distance: ";
    Printer<double>::stream(s, indent + "  ", v.command_distance);
    s << indent << "left_dist: ";
    Printer<double>::stream(s, indent + "  ", v.left_dist);
    s << indent << "right_dist: ";
    Printer<double>::stream(s, indent + "  ", v.right_dist);
    s << indent << "suggested_direction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.suggested_direction);
    s << indent << "user_direction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.user_direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_ENCODERTESTENTRY_H

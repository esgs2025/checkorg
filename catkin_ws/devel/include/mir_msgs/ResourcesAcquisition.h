// Generated by gencpp from file mir_msgs/ResourcesAcquisition.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_RESOURCESACQUISITION_H
#define MIR_MSGS_MESSAGE_RESOURCESACQUISITION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PoseStamped.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct ResourcesAcquisition_
{
  typedef ResourcesAcquisition_<ContainerAllocator> Type;

  ResourcesAcquisition_()
    : header()
    , path()
    , position_guid()
    , token()  {
    }
  ResourcesAcquisition_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , path(_alloc)
    , position_guid(_alloc)
    , token(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  _path_type;
  _path_type path;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _position_guid_type;
  _position_guid_type position_guid;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _token_type;
  _token_type token;





  typedef boost::shared_ptr< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> const> ConstPtr;

}; // struct ResourcesAcquisition_

typedef ::mir_msgs::ResourcesAcquisition_<std::allocator<void> > ResourcesAcquisition;

typedef boost::shared_ptr< ::mir_msgs::ResourcesAcquisition > ResourcesAcquisitionPtr;
typedef boost::shared_ptr< ::mir_msgs::ResourcesAcquisition const> ResourcesAcquisitionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator1> & lhs, const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.path == rhs.path &&
    lhs.position_guid == rhs.position_guid &&
    lhs.token == rhs.token;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator1> & lhs, const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31d34591ef79272f8d1f97313a43e8a1";
  }

  static const char* value(const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31d34591ef79272fULL;
  static const uint64_t static_value2 = 0x8d1f97313a43e8a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/ResourcesAcquisition";
  }

  static const char* value(const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/PoseStamped[] path\n"
"string position_guid\n"
"string token\n"
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
;
  }

  static const char* value(const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.path);
      stream.next(m.position_guid);
      stream.next(m.token);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResourcesAcquisition_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::ResourcesAcquisition_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::ResourcesAcquisition_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "path[]" << std::endl;
    for (size_t i = 0; i < v.path.size(); ++i)
    {
      s << indent << "  path[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.path[i]);
    }
    s << indent << "position_guid: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.position_guid);
    s << indent << "token: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.token);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_RESOURCESACQUISITION_H
// Generated by gencpp from file nav_2d_msgs/NavGridOfDoubles.msg
// DO NOT EDIT!


#ifndef NAV_2D_MSGS_MESSAGE_NAVGRIDOFDOUBLES_H
#define NAV_2D_MSGS_MESSAGE_NAVGRIDOFDOUBLES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_2d_msgs/NavGridInfo.h>

namespace nav_2d_msgs
{
template <class ContainerAllocator>
struct NavGridOfDoubles_
{
  typedef NavGridOfDoubles_<ContainerAllocator> Type;

  NavGridOfDoubles_()
    : stamp()
    , info()
    , data()  {
    }
  NavGridOfDoubles_(const ContainerAllocator& _alloc)
    : stamp()
    , info(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef  ::nav_2d_msgs::NavGridInfo_<ContainerAllocator>  _info_type;
  _info_type info;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> const> ConstPtr;

}; // struct NavGridOfDoubles_

typedef ::nav_2d_msgs::NavGridOfDoubles_<std::allocator<void> > NavGridOfDoubles;

typedef boost::shared_ptr< ::nav_2d_msgs::NavGridOfDoubles > NavGridOfDoublesPtr;
typedef boost::shared_ptr< ::nav_2d_msgs::NavGridOfDoubles const> NavGridOfDoublesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.info == rhs.info &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_2d_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41dfe8d90b2b81dedf7b72efb7539645";
  }

  static const char* value(const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41dfe8d90b2b81deULL;
  static const uint64_t static_value2 = 0xdf7b72efb7539645ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_2d_msgs/NavGridOfDoubles";
  }

  static const char* value(const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n"
"NavGridInfo info\n"
"# The map data, in row-major order, starting with (0,0).\n"
"float64[] data\n"
"\n"
"================================================================================\n"
"MSG: nav_2d_msgs/NavGridInfo\n"
"uint32 width\n"
"uint32 height\n"
"float64 resolution\n"
"string frame_id\n"
"float64 origin_x\n"
"float64 origin_y\n"
;
  }

  static const char* value(const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.info);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavGridOfDoubles_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_2d_msgs::NavGridOfDoubles_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "info: ";
    s << std::endl;
    Printer< ::nav_2d_msgs::NavGridInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.info);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_2D_MSGS_MESSAGE_NAVGRIDOFDOUBLES_H

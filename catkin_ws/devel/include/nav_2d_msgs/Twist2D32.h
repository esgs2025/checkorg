// Generated by gencpp from file nav_2d_msgs/Twist2D32.msg
// DO NOT EDIT!


#ifndef NAV_2D_MSGS_MESSAGE_TWIST2D32_H
#define NAV_2D_MSGS_MESSAGE_TWIST2D32_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nav_2d_msgs
{
template <class ContainerAllocator>
struct Twist2D32_
{
  typedef Twist2D32_<ContainerAllocator> Type;

  Twist2D32_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }
  Twist2D32_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;





  typedef boost::shared_ptr< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> const> ConstPtr;

}; // struct Twist2D32_

typedef ::nav_2d_msgs::Twist2D32_<std::allocator<void> > Twist2D32;

typedef boost::shared_ptr< ::nav_2d_msgs::Twist2D32 > Twist2D32Ptr;
typedef boost::shared_ptr< ::nav_2d_msgs::Twist2D32 const> Twist2D32ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_2d_msgs::Twist2D32_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_2d_msgs::Twist2D32_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::Twist2D32_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.theta == rhs.theta;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_2d_msgs::Twist2D32_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::Twist2D32_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_2d_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a130bc60ee6513855dc62ea83fcc5b20";
  }

  static const char* value(const ::nav_2d_msgs::Twist2D32_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa130bc60ee651385ULL;
  static const uint64_t static_value2 = 0x5dc62ea83fcc5b20ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_2d_msgs/Twist2D32";
  }

  static const char* value(const ::nav_2d_msgs::Twist2D32_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
"float32 theta\n"
;
  }

  static const char* value(const ::nav_2d_msgs::Twist2D32_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Twist2D32_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_2d_msgs::Twist2D32_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_2d_msgs::Twist2D32_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_2D_MSGS_MESSAGE_TWIST2D32_H

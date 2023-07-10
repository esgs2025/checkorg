// Generated by gencpp from file nav_2d_msgs/ComplexPolygon2D.msg
// DO NOT EDIT!


#ifndef NAV_2D_MSGS_MESSAGE_COMPLEXPOLYGON2D_H
#define NAV_2D_MSGS_MESSAGE_COMPLEXPOLYGON2D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_2d_msgs/Polygon2D.h>
#include <nav_2d_msgs/Polygon2D.h>

namespace nav_2d_msgs
{
template <class ContainerAllocator>
struct ComplexPolygon2D_
{
  typedef ComplexPolygon2D_<ContainerAllocator> Type;

  ComplexPolygon2D_()
    : outer()
    , inner()  {
    }
  ComplexPolygon2D_(const ContainerAllocator& _alloc)
    : outer(_alloc)
    , inner(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_2d_msgs::Polygon2D_<ContainerAllocator>  _outer_type;
  _outer_type outer;

   typedef std::vector< ::nav_2d_msgs::Polygon2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nav_2d_msgs::Polygon2D_<ContainerAllocator> >::other >  _inner_type;
  _inner_type inner;





  typedef boost::shared_ptr< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> const> ConstPtr;

}; // struct ComplexPolygon2D_

typedef ::nav_2d_msgs::ComplexPolygon2D_<std::allocator<void> > ComplexPolygon2D;

typedef boost::shared_ptr< ::nav_2d_msgs::ComplexPolygon2D > ComplexPolygon2DPtr;
typedef boost::shared_ptr< ::nav_2d_msgs::ComplexPolygon2D const> ComplexPolygon2DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator2> & rhs)
{
  return lhs.outer == rhs.outer &&
    lhs.inner == rhs.inner;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_2d_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f93841a14f7caf40d600ff8c62446616";
  }

  static const char* value(const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf93841a14f7caf40ULL;
  static const uint64_t static_value2 = 0xd600ff8c62446616ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_2d_msgs/ComplexPolygon2D";
  }

  static const char* value(const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Representation for a non-simple polygon, i.e. one with holes\n"
"Polygon2D outer    # The outer perimeter\n"
"Polygon2D[] inner  # The perimeter of any inner holes\n"
"\n"
"================================================================================\n"
"MSG: nav_2d_msgs/Polygon2D\n"
"Point2D[] points\n"
"\n"
"================================================================================\n"
"MSG: nav_2d_msgs/Point2D\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.outer);
      stream.next(m.inner);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComplexPolygon2D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_2d_msgs::ComplexPolygon2D_<ContainerAllocator>& v)
  {
    s << indent << "outer: ";
    s << std::endl;
    Printer< ::nav_2d_msgs::Polygon2D_<ContainerAllocator> >::stream(s, indent + "  ", v.outer);
    s << indent << "inner[]" << std::endl;
    for (size_t i = 0; i < v.inner.size(); ++i)
    {
      s << indent << "  inner[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nav_2d_msgs::Polygon2D_<ContainerAllocator> >::stream(s, indent + "    ", v.inner[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_2D_MSGS_MESSAGE_COMPLEXPOLYGON2D_H
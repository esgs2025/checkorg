// Generated by gencpp from file mir_msgs/SkidDetectionDiff.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_SKIDDETECTIONDIFF_H
#define MIR_MSGS_MESSAGE_SKIDDETECTIONDIFF_H


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
struct SkidDetectionDiff_
{
  typedef SkidDetectionDiff_<ContainerAllocator> Type;

  SkidDetectionDiff_()
    : time_stamp()
    , enc_acc_x(0.0)
    , enc_acc_y(0.0)
    , enc_rot_th(0.0)
    , imu_acc_x(0.0)
    , imu_acc_y(0.0)
    , imu_rot_th(0.0)
    , diff_acc_x(0.0)
    , diff_acc_y(0.0)
    , diff_rot_th(0.0)  {
    }
  SkidDetectionDiff_(const ContainerAllocator& _alloc)
    : time_stamp()
    , enc_acc_x(0.0)
    , enc_acc_y(0.0)
    , enc_rot_th(0.0)
    , imu_acc_x(0.0)
    , imu_acc_y(0.0)
    , imu_rot_th(0.0)
    , diff_acc_x(0.0)
    , diff_acc_y(0.0)
    , diff_rot_th(0.0)  {
  (void)_alloc;
    }



   typedef ros::Time _time_stamp_type;
  _time_stamp_type time_stamp;

   typedef double _enc_acc_x_type;
  _enc_acc_x_type enc_acc_x;

   typedef double _enc_acc_y_type;
  _enc_acc_y_type enc_acc_y;

   typedef double _enc_rot_th_type;
  _enc_rot_th_type enc_rot_th;

   typedef double _imu_acc_x_type;
  _imu_acc_x_type imu_acc_x;

   typedef double _imu_acc_y_type;
  _imu_acc_y_type imu_acc_y;

   typedef double _imu_rot_th_type;
  _imu_rot_th_type imu_rot_th;

   typedef double _diff_acc_x_type;
  _diff_acc_x_type diff_acc_x;

   typedef double _diff_acc_y_type;
  _diff_acc_y_type diff_acc_y;

   typedef double _diff_rot_th_type;
  _diff_rot_th_type diff_rot_th;





  typedef boost::shared_ptr< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> const> ConstPtr;

}; // struct SkidDetectionDiff_

typedef ::mir_msgs::SkidDetectionDiff_<std::allocator<void> > SkidDetectionDiff;

typedef boost::shared_ptr< ::mir_msgs::SkidDetectionDiff > SkidDetectionDiffPtr;
typedef boost::shared_ptr< ::mir_msgs::SkidDetectionDiff const> SkidDetectionDiffConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator1> & lhs, const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator2> & rhs)
{
  return lhs.time_stamp == rhs.time_stamp &&
    lhs.enc_acc_x == rhs.enc_acc_x &&
    lhs.enc_acc_y == rhs.enc_acc_y &&
    lhs.enc_rot_th == rhs.enc_rot_th &&
    lhs.imu_acc_x == rhs.imu_acc_x &&
    lhs.imu_acc_y == rhs.imu_acc_y &&
    lhs.imu_rot_th == rhs.imu_rot_th &&
    lhs.diff_acc_x == rhs.diff_acc_x &&
    lhs.diff_acc_y == rhs.diff_acc_y &&
    lhs.diff_rot_th == rhs.diff_rot_th;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator1> & lhs, const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d37dfc4b9ebb57cf8f2fa9160507f6d5";
  }

  static const char* value(const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd37dfc4b9ebb57cfULL;
  static const uint64_t static_value2 = 0x8f2fa9160507f6d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/SkidDetectionDiff";
  }

  static const char* value(const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time time_stamp\n"
"float64 enc_acc_x\n"
"float64 enc_acc_y\n"
"float64 enc_rot_th\n"
"\n"
"\n"
"float64 imu_acc_x\n"
"float64 imu_acc_y\n"
"float64 imu_rot_th\n"
"\n"
"\n"
"float64 diff_acc_x\n"
"float64 diff_acc_y\n"
"float64 diff_rot_th\n"
;
  }

  static const char* value(const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_stamp);
      stream.next(m.enc_acc_x);
      stream.next(m.enc_acc_y);
      stream.next(m.enc_rot_th);
      stream.next(m.imu_acc_x);
      stream.next(m.imu_acc_y);
      stream.next(m.imu_rot_th);
      stream.next(m.diff_acc_x);
      stream.next(m.diff_acc_y);
      stream.next(m.diff_rot_th);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SkidDetectionDiff_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::SkidDetectionDiff_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::SkidDetectionDiff_<ContainerAllocator>& v)
  {
    s << indent << "time_stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time_stamp);
    s << indent << "enc_acc_x: ";
    Printer<double>::stream(s, indent + "  ", v.enc_acc_x);
    s << indent << "enc_acc_y: ";
    Printer<double>::stream(s, indent + "  ", v.enc_acc_y);
    s << indent << "enc_rot_th: ";
    Printer<double>::stream(s, indent + "  ", v.enc_rot_th);
    s << indent << "imu_acc_x: ";
    Printer<double>::stream(s, indent + "  ", v.imu_acc_x);
    s << indent << "imu_acc_y: ";
    Printer<double>::stream(s, indent + "  ", v.imu_acc_y);
    s << indent << "imu_rot_th: ";
    Printer<double>::stream(s, indent + "  ", v.imu_rot_th);
    s << indent << "diff_acc_x: ";
    Printer<double>::stream(s, indent + "  ", v.diff_acc_x);
    s << indent << "diff_acc_y: ";
    Printer<double>::stream(s, indent + "  ", v.diff_acc_y);
    s << indent << "diff_rot_th: ";
    Printer<double>::stream(s, indent + "  ", v.diff_rot_th);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_SKIDDETECTIONDIFF_H

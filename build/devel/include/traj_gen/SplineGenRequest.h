// Generated by gencpp from file traj_gen/SplineGenRequest.msg
// DO NOT EDIT!


#ifndef TRAJ_GEN_MESSAGE_SPLINEGENREQUEST_H
#define TRAJ_GEN_MESSAGE_SPLINEGENREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Twist.h>
#include <nav_msgs/Path.h>

namespace traj_gen
{
template <class ContainerAllocator>
struct SplineGenRequest_
{
  typedef SplineGenRequest_<ContainerAllocator> Type;

  SplineGenRequest_()
    : v0()
    , knot()
    , knot_t()  {
    }
  SplineGenRequest_(const ContainerAllocator& _alloc)
    : v0(_alloc)
    , knot(_alloc)
    , knot_t(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _v0_type;
  _v0_type v0;

   typedef  ::nav_msgs::Path_<ContainerAllocator>  _knot_type;
  _knot_type knot;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _knot_t_type;
  _knot_t_type knot_t;





  typedef boost::shared_ptr< ::traj_gen::SplineGenRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::traj_gen::SplineGenRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SplineGenRequest_

typedef ::traj_gen::SplineGenRequest_<std::allocator<void> > SplineGenRequest;

typedef boost::shared_ptr< ::traj_gen::SplineGenRequest > SplineGenRequestPtr;
typedef boost::shared_ptr< ::traj_gen::SplineGenRequest const> SplineGenRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::traj_gen::SplineGenRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::traj_gen::SplineGenRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace traj_gen

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'traj_gen': ['/home/jbs/catkin_ws/src/traj_gen/msg', '/home/jbs/catkin_ws/src/traj_gen/msg'], 'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::traj_gen::SplineGenRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::traj_gen::SplineGenRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::traj_gen::SplineGenRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ed5a8605137b03cd1ecf17eead696402";
  }

  static const char* value(const ::traj_gen::SplineGenRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xed5a8605137b03cdULL;
  static const uint64_t static_value2 = 0x1ecf17eead696402ULL;
};

template<class ContainerAllocator>
struct DataType< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "traj_gen/SplineGenRequest";
  }

  static const char* value(const ::traj_gen::SplineGenRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Twist v0\n\
nav_msgs/Path knot\n\
float64[] knot_t\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: nav_msgs/Path\n\
#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
geometry_msgs/PoseStamped[] poses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::traj_gen::SplineGenRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.v0);
      stream.next(m.knot);
      stream.next(m.knot_t);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SplineGenRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::traj_gen::SplineGenRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::traj_gen::SplineGenRequest_<ContainerAllocator>& v)
  {
    s << indent << "v0: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.v0);
    s << indent << "knot: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.knot);
    s << indent << "knot_t[]" << std::endl;
    for (size_t i = 0; i < v.knot_t.size(); ++i)
    {
      s << indent << "  knot_t[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.knot_t[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRAJ_GEN_MESSAGE_SPLINEGENREQUEST_H

// Generated by gencpp from file traj_gen/SplineGenResponse.msg
// DO NOT EDIT!


#ifndef TRAJ_GEN_MESSAGE_SPLINEGENRESPONSE_H
#define TRAJ_GEN_MESSAGE_SPLINEGENRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <traj_gen/PolySplineXYZ.h>

namespace traj_gen
{
template <class ContainerAllocator>
struct SplineGenResponse_
{
  typedef SplineGenResponse_<ContainerAllocator> Type;

  SplineGenResponse_()
    : spline_xyz()  {
    }
  SplineGenResponse_(const ContainerAllocator& _alloc)
    : spline_xyz(_alloc)  {
  (void)_alloc;
    }



   typedef  ::traj_gen::PolySplineXYZ_<ContainerAllocator>  _spline_xyz_type;
  _spline_xyz_type spline_xyz;





  typedef boost::shared_ptr< ::traj_gen::SplineGenResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::traj_gen::SplineGenResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SplineGenResponse_

typedef ::traj_gen::SplineGenResponse_<std::allocator<void> > SplineGenResponse;

typedef boost::shared_ptr< ::traj_gen::SplineGenResponse > SplineGenResponsePtr;
typedef boost::shared_ptr< ::traj_gen::SplineGenResponse const> SplineGenResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::traj_gen::SplineGenResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::traj_gen::SplineGenResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::traj_gen::SplineGenResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::traj_gen::SplineGenResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::traj_gen::SplineGenResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eeac386e24c9ae4f2b82978b3eb5d95e";
  }

  static const char* value(const ::traj_gen::SplineGenResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeeac386e24c9ae4fULL;
  static const uint64_t static_value2 = 0x2b82978b3eb5d95eULL;
};

template<class ContainerAllocator>
struct DataType< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "traj_gen/SplineGenResponse";
  }

  static const char* value(const ::traj_gen::SplineGenResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "traj_gen/PolySplineXYZ spline_xyz\n\
\n\
\n\
================================================================================\n\
MSG: traj_gen/PolySplineXYZ\n\
bool is_valid\n\
traj_gen/PolySpline spline_x\n\
traj_gen/PolySpline spline_y \n\
traj_gen/PolySpline spline_z\n\
int8 n_seg\n\
int8 poly_order\n\
float64[] knot_time \n\
\n\
================================================================================\n\
MSG: traj_gen/PolySpline\n\
traj_gen/PolyCoeff[] poly_coeff\n\
float64[] knot_time \n\
int8 n_seg\n\
bool is_valid\n\
\n\
\n\
\n\
================================================================================\n\
MSG: traj_gen/PolyCoeff\n\
float64[] coeff\n\
int8 poly_order\n\
\n\
\n\
";
  }

  static const char* value(const ::traj_gen::SplineGenResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.spline_xyz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SplineGenResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::traj_gen::SplineGenResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::traj_gen::SplineGenResponse_<ContainerAllocator>& v)
  {
    s << indent << "spline_xyz: ";
    s << std::endl;
    Printer< ::traj_gen::PolySplineXYZ_<ContainerAllocator> >::stream(s, indent + "  ", v.spline_xyz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRAJ_GEN_MESSAGE_SPLINEGENRESPONSE_H
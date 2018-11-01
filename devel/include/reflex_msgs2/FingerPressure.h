// Generated by gencpp from file reflex_msgs2/FingerPressure.msg
// DO NOT EDIT!


#ifndef REFLEX_MSGS2_MESSAGE_FINGERPRESSURE_H
#define REFLEX_MSGS2_MESSAGE_FINGERPRESSURE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace reflex_msgs2
{
template <class ContainerAllocator>
struct FingerPressure_
{
  typedef FingerPressure_<ContainerAllocator> Type;

  FingerPressure_()
    : sensor()  {
      sensor.assign(0);
  }
  FingerPressure_(const ContainerAllocator& _alloc)
    : sensor()  {
  (void)_alloc;
      sensor.assign(0);
  }



   typedef boost::array<uint16_t, 14>  _sensor_type;
  _sensor_type sensor;




  typedef boost::shared_ptr< ::reflex_msgs2::FingerPressure_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reflex_msgs2::FingerPressure_<ContainerAllocator> const> ConstPtr;

}; // struct FingerPressure_

typedef ::reflex_msgs2::FingerPressure_<std::allocator<void> > FingerPressure;

typedef boost::shared_ptr< ::reflex_msgs2::FingerPressure > FingerPressurePtr;
typedef boost::shared_ptr< ::reflex_msgs2::FingerPressure const> FingerPressureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reflex_msgs2::FingerPressure_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace reflex_msgs2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'reflex_msgs2': ['/home/cc/ee106a/fa18/class/ee106a-aab/ros_workspaces/TheCreator/src/reflex-ros-pkg/reflex_msgs2/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs2::FingerPressure_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::FingerPressure_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::FingerPressure_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2fecdd6322f86c468a82244a96936129";
  }

  static const char* value(const ::reflex_msgs2::FingerPressure_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2fecdd6322f86c46ULL;
  static const uint64_t static_value2 = 0x8a82244a96936129ULL;
};

template<class ContainerAllocator>
struct DataType< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reflex_msgs2/FingerPressure";
  }

  static const char* value(const ::reflex_msgs2::FingerPressure_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# message for pressure on a single finger\n\
uint16[14] sensor    	# The sensors enumerate from the base of the finger to the tip\n\
						# There are 5 on the proximal link, 4 on the distal\n\
";
  }

  static const char* value(const ::reflex_msgs2::FingerPressure_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FingerPressure_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reflex_msgs2::FingerPressure_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reflex_msgs2::FingerPressure_<ContainerAllocator>& v)
  {
    s << indent << "sensor[]" << std::endl;
    for (size_t i = 0; i < v.sensor.size(); ++i)
    {
      s << indent << "  sensor[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.sensor[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REFLEX_MSGS2_MESSAGE_FINGERPRESSURE_H

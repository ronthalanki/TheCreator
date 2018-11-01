// Generated by gencpp from file reflex_msgs2/RawServoCommands.msg
// DO NOT EDIT!


#ifndef REFLEX_MSGS2_MESSAGE_RAWSERVOCOMMANDS_H
#define REFLEX_MSGS2_MESSAGE_RAWSERVOCOMMANDS_H


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
struct RawServoCommands_
{
  typedef RawServoCommands_<ContainerAllocator> Type;

  RawServoCommands_()
    : raw_positions()  {
      raw_positions.assign(0);
  }
  RawServoCommands_(const ContainerAllocator& _alloc)
    : raw_positions()  {
  (void)_alloc;
      raw_positions.assign(0);
  }



   typedef boost::array<uint16_t, 4>  _raw_positions_type;
  _raw_positions_type raw_positions;




  typedef boost::shared_ptr< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> const> ConstPtr;

}; // struct RawServoCommands_

typedef ::reflex_msgs2::RawServoCommands_<std::allocator<void> > RawServoCommands;

typedef boost::shared_ptr< ::reflex_msgs2::RawServoCommands > RawServoCommandsPtr;
typedef boost::shared_ptr< ::reflex_msgs2::RawServoCommands const> RawServoCommandsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reflex_msgs2::RawServoCommands_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aea318ab5663e05395d3ab895fd67e1e";
  }

  static const char* value(const ::reflex_msgs2::RawServoCommands_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaea318ab5663e053ULL;
  static const uint64_t static_value2 = 0x95d3ab895fd67e1eULL;
};

template<class ContainerAllocator>
struct DataType< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reflex_msgs2/RawServoCommands";
  }

  static const char* value(const ::reflex_msgs2::RawServoCommands_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16[4] raw_positions\n\
";
  }

  static const char* value(const ::reflex_msgs2::RawServoCommands_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.raw_positions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RawServoCommands_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reflex_msgs2::RawServoCommands_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reflex_msgs2::RawServoCommands_<ContainerAllocator>& v)
  {
    s << indent << "raw_positions[]" << std::endl;
    for (size_t i = 0; i < v.raw_positions.size(); ++i)
    {
      s << indent << "  raw_positions[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.raw_positions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REFLEX_MSGS2_MESSAGE_RAWSERVOCOMMANDS_H

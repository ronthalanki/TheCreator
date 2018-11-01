// Generated by gencpp from file reflex_msgs2/ImuCalibrationData.msg
// DO NOT EDIT!


#ifndef REFLEX_MSGS2_MESSAGE_IMUCALIBRATIONDATA_H
#define REFLEX_MSGS2_MESSAGE_IMUCALIBRATIONDATA_H


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
struct ImuCalibrationData_
{
  typedef ImuCalibrationData_<ContainerAllocator> Type;

  ImuCalibrationData_()
    : acc_offset_f1()
    , acc_offset_f2()
    , acc_offset_f3()
    , acc_offset_palm()
    , mag_offset_f1()
    , mag_offset_f2()
    , mag_offset_f3()
    , mag_offset_palm()
    , gyr_offset_f1()
    , gyr_offset_f2()
    , gyr_offset_f3()
    , gyr_offset_palm()
    , acc_radius()
    , gyr_radius()  {
      acc_offset_f1.assign(0);

      acc_offset_f2.assign(0);

      acc_offset_f3.assign(0);

      acc_offset_palm.assign(0);

      mag_offset_f1.assign(0);

      mag_offset_f2.assign(0);

      mag_offset_f3.assign(0);

      mag_offset_palm.assign(0);

      gyr_offset_f1.assign(0);

      gyr_offset_f2.assign(0);

      gyr_offset_f3.assign(0);

      gyr_offset_palm.assign(0);

      acc_radius.assign(0);

      gyr_radius.assign(0);
  }
  ImuCalibrationData_(const ContainerAllocator& _alloc)
    : acc_offset_f1()
    , acc_offset_f2()
    , acc_offset_f3()
    , acc_offset_palm()
    , mag_offset_f1()
    , mag_offset_f2()
    , mag_offset_f3()
    , mag_offset_palm()
    , gyr_offset_f1()
    , gyr_offset_f2()
    , gyr_offset_f3()
    , gyr_offset_palm()
    , acc_radius()
    , gyr_radius()  {
  (void)_alloc;
      acc_offset_f1.assign(0);

      acc_offset_f2.assign(0);

      acc_offset_f3.assign(0);

      acc_offset_palm.assign(0);

      mag_offset_f1.assign(0);

      mag_offset_f2.assign(0);

      mag_offset_f3.assign(0);

      mag_offset_palm.assign(0);

      gyr_offset_f1.assign(0);

      gyr_offset_f2.assign(0);

      gyr_offset_f3.assign(0);

      gyr_offset_palm.assign(0);

      acc_radius.assign(0);

      gyr_radius.assign(0);
  }



   typedef boost::array<uint16_t, 3>  _acc_offset_f1_type;
  _acc_offset_f1_type acc_offset_f1;

   typedef boost::array<uint16_t, 3>  _acc_offset_f2_type;
  _acc_offset_f2_type acc_offset_f2;

   typedef boost::array<uint16_t, 3>  _acc_offset_f3_type;
  _acc_offset_f3_type acc_offset_f3;

   typedef boost::array<uint16_t, 3>  _acc_offset_palm_type;
  _acc_offset_palm_type acc_offset_palm;

   typedef boost::array<uint16_t, 3>  _mag_offset_f1_type;
  _mag_offset_f1_type mag_offset_f1;

   typedef boost::array<uint16_t, 3>  _mag_offset_f2_type;
  _mag_offset_f2_type mag_offset_f2;

   typedef boost::array<uint16_t, 3>  _mag_offset_f3_type;
  _mag_offset_f3_type mag_offset_f3;

   typedef boost::array<uint16_t, 3>  _mag_offset_palm_type;
  _mag_offset_palm_type mag_offset_palm;

   typedef boost::array<uint16_t, 3>  _gyr_offset_f1_type;
  _gyr_offset_f1_type gyr_offset_f1;

   typedef boost::array<uint16_t, 3>  _gyr_offset_f2_type;
  _gyr_offset_f2_type gyr_offset_f2;

   typedef boost::array<uint16_t, 3>  _gyr_offset_f3_type;
  _gyr_offset_f3_type gyr_offset_f3;

   typedef boost::array<uint16_t, 3>  _gyr_offset_palm_type;
  _gyr_offset_palm_type gyr_offset_palm;

   typedef boost::array<uint16_t, 4>  _acc_radius_type;
  _acc_radius_type acc_radius;

   typedef boost::array<uint16_t, 4>  _gyr_radius_type;
  _gyr_radius_type gyr_radius;




  typedef boost::shared_ptr< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> const> ConstPtr;

}; // struct ImuCalibrationData_

typedef ::reflex_msgs2::ImuCalibrationData_<std::allocator<void> > ImuCalibrationData;

typedef boost::shared_ptr< ::reflex_msgs2::ImuCalibrationData > ImuCalibrationDataPtr;
typedef boost::shared_ptr< ::reflex_msgs2::ImuCalibrationData const> ImuCalibrationDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ef3e1b102a68813a645fa51b970838b";
  }

  static const char* value(const ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ef3e1b102a68813ULL;
  static const uint64_t static_value2 = 0xa645fa51b970838bULL;
};

template<class ContainerAllocator>
struct DataType< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reflex_msgs2/ImuCalibrationData";
  }

  static const char* value(const ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Acceleration offsets for each dimension in the format [x,y,z]\n\
uint16[3] acc_offset_f1\n\
uint16[3] acc_offset_f2\n\
uint16[3] acc_offset_f3\n\
uint16[3] acc_offset_palm\n\
\n\
# Magnetometer offsets for each dimension in the format [x,y,z]\n\
uint16[3] mag_offset_f1\n\
uint16[3] mag_offset_f2\n\
uint16[3] mag_offset_f3\n\
uint16[3] mag_offset_palm\n\
\n\
# Gyroscope offsets for each dimension in the format [x,y,z]\n\
uint16[3] gyr_offset_f1\n\
uint16[3] gyr_offset_f2\n\
uint16[3] gyr_offset_f3\n\
uint16[3] gyr_offset_palm\n\
\n\
# Accelerometer and Gyroscope radius in the format [f1,f2,f3,palm]\n\
uint16[4] acc_radius\n\
uint16[4] gyr_radius\n\
";
  }

  static const char* value(const ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.acc_offset_f1);
      stream.next(m.acc_offset_f2);
      stream.next(m.acc_offset_f3);
      stream.next(m.acc_offset_palm);
      stream.next(m.mag_offset_f1);
      stream.next(m.mag_offset_f2);
      stream.next(m.mag_offset_f3);
      stream.next(m.mag_offset_palm);
      stream.next(m.gyr_offset_f1);
      stream.next(m.gyr_offset_f2);
      stream.next(m.gyr_offset_f3);
      stream.next(m.gyr_offset_palm);
      stream.next(m.acc_radius);
      stream.next(m.gyr_radius);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImuCalibrationData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reflex_msgs2::ImuCalibrationData_<ContainerAllocator>& v)
  {
    s << indent << "acc_offset_f1[]" << std::endl;
    for (size_t i = 0; i < v.acc_offset_f1.size(); ++i)
    {
      s << indent << "  acc_offset_f1[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.acc_offset_f1[i]);
    }
    s << indent << "acc_offset_f2[]" << std::endl;
    for (size_t i = 0; i < v.acc_offset_f2.size(); ++i)
    {
      s << indent << "  acc_offset_f2[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.acc_offset_f2[i]);
    }
    s << indent << "acc_offset_f3[]" << std::endl;
    for (size_t i = 0; i < v.acc_offset_f3.size(); ++i)
    {
      s << indent << "  acc_offset_f3[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.acc_offset_f3[i]);
    }
    s << indent << "acc_offset_palm[]" << std::endl;
    for (size_t i = 0; i < v.acc_offset_palm.size(); ++i)
    {
      s << indent << "  acc_offset_palm[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.acc_offset_palm[i]);
    }
    s << indent << "mag_offset_f1[]" << std::endl;
    for (size_t i = 0; i < v.mag_offset_f1.size(); ++i)
    {
      s << indent << "  mag_offset_f1[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.mag_offset_f1[i]);
    }
    s << indent << "mag_offset_f2[]" << std::endl;
    for (size_t i = 0; i < v.mag_offset_f2.size(); ++i)
    {
      s << indent << "  mag_offset_f2[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.mag_offset_f2[i]);
    }
    s << indent << "mag_offset_f3[]" << std::endl;
    for (size_t i = 0; i < v.mag_offset_f3.size(); ++i)
    {
      s << indent << "  mag_offset_f3[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.mag_offset_f3[i]);
    }
    s << indent << "mag_offset_palm[]" << std::endl;
    for (size_t i = 0; i < v.mag_offset_palm.size(); ++i)
    {
      s << indent << "  mag_offset_palm[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.mag_offset_palm[i]);
    }
    s << indent << "gyr_offset_f1[]" << std::endl;
    for (size_t i = 0; i < v.gyr_offset_f1.size(); ++i)
    {
      s << indent << "  gyr_offset_f1[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.gyr_offset_f1[i]);
    }
    s << indent << "gyr_offset_f2[]" << std::endl;
    for (size_t i = 0; i < v.gyr_offset_f2.size(); ++i)
    {
      s << indent << "  gyr_offset_f2[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.gyr_offset_f2[i]);
    }
    s << indent << "gyr_offset_f3[]" << std::endl;
    for (size_t i = 0; i < v.gyr_offset_f3.size(); ++i)
    {
      s << indent << "  gyr_offset_f3[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.gyr_offset_f3[i]);
    }
    s << indent << "gyr_offset_palm[]" << std::endl;
    for (size_t i = 0; i < v.gyr_offset_palm.size(); ++i)
    {
      s << indent << "  gyr_offset_palm[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.gyr_offset_palm[i]);
    }
    s << indent << "acc_radius[]" << std::endl;
    for (size_t i = 0; i < v.acc_radius.size(); ++i)
    {
      s << indent << "  acc_radius[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.acc_radius[i]);
    }
    s << indent << "gyr_radius[]" << std::endl;
    for (size_t i = 0; i < v.gyr_radius.size(); ++i)
    {
      s << indent << "  gyr_radius[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.gyr_radius[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REFLEX_MSGS2_MESSAGE_IMUCALIBRATIONDATA_H

// Generated by gencpp from file wfov_camera_msgs/WFOVCompressedImage.msg
// DO NOT EDIT!


#ifndef WFOV_CAMERA_MSGS_MESSAGE_WFOVCOMPRESSEDIMAGE_H
#define WFOV_CAMERA_MSGS_MESSAGE_WFOVCOMPRESSEDIMAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/CompressedImage.h>
#include <sensor_msgs/CameraInfo.h>
#include <geometry_msgs/TransformStamped.h>

namespace wfov_camera_msgs
{
template <class ContainerAllocator>
struct WFOVCompressedImage_
{
  typedef WFOVCompressedImage_<ContainerAllocator> Type;

  WFOVCompressedImage_()
    : header()
    , time_reference()
    , image()
    , info()
    , shutter(0.0)
    , gain(0.0)
    , white_balance_blue(0)
    , white_balance_red(0)
    , temperature(0.0)
    , worldToCamera()  {
    }
  WFOVCompressedImage_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time_reference(_alloc)
    , image(_alloc)
    , info(_alloc)
    , shutter(0.0)
    , gain(0.0)
    , white_balance_blue(0)
    , white_balance_red(0)
    , temperature(0.0)
    , worldToCamera(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _time_reference_type;
  _time_reference_type time_reference;

   typedef  ::sensor_msgs::CompressedImage_<ContainerAllocator>  _image_type;
  _image_type image;

   typedef  ::sensor_msgs::CameraInfo_<ContainerAllocator>  _info_type;
  _info_type info;

   typedef float _shutter_type;
  _shutter_type shutter;

   typedef float _gain_type;
  _gain_type gain;

   typedef uint16_t _white_balance_blue_type;
  _white_balance_blue_type white_balance_blue;

   typedef uint16_t _white_balance_red_type;
  _white_balance_red_type white_balance_red;

   typedef float _temperature_type;
  _temperature_type temperature;

   typedef  ::geometry_msgs::TransformStamped_<ContainerAllocator>  _worldToCamera_type;
  _worldToCamera_type worldToCamera;





  typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> const> ConstPtr;

}; // struct WFOVCompressedImage_

typedef ::wfov_camera_msgs::WFOVCompressedImage_<std::allocator<void> > WFOVCompressedImage;

typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVCompressedImage > WFOVCompressedImagePtr;
typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVCompressedImage const> WFOVCompressedImageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wfov_camera_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'wfov_camera_msgs': ['/home/ubuntu/workspace/clearpath_ros/src/pointgrey_camera_driver/wfov_camera_msgs/msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b0f85e79ffccd27dc377911c83e026f";
  }

  static const char* value(const ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b0f85e79ffccd27ULL;
  static const uint64_t static_value2 = 0xdc377911c83e026fULL;
};

template<class ContainerAllocator>
struct DataType< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wfov_camera_msgs/WFOVCompressedImage";
  }

  static const char* value(const ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for holding an image and metadata for the NDVI cameras.\n"
"Header header			# stamp is the time at which the data was valid.\n"
"				# frame_id is the location of the camera.\n"
"\n"
"string time_reference		# The name of the reference clock for this message's timestamp.\n"
"\n"
"sensor_msgs/CompressedImage image      	# Standard ROS compressed image\n"
"\n"
"sensor_msgs/CameraInfo info  	# Standard ROS camera info\n"
"\n"
"float32 shutter              	# Time duration (seconds) the shutter was open.  Given by the FPGA timesync packet.  Negative shutter is an uninitialized (invalid) value.\n"
"\n"
"float32 gain		     	# Gain (in dB) applied to the image.\n"
"\n"
"uint16 white_balance_blue    	# White balance in blue.\n"
"\n"
"uint16 white_balance_red     	# White balance in red.\n"
"\n"
"float32 temperature          	# Temperature reported by the camera (Celsius).\n"
"\n"
"geometry_msgs/TransformStamped worldToCamera      # stamped transform for converting world coordinates to camera frame coordinates.  Handy for visualization.\n"
"\n"
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
"MSG: sensor_msgs/CompressedImage\n"
"# This message contains a compressed image\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"\n"
"string format        # Specifies the format of the data\n"
"                     #   Acceptable values:\n"
"                     #     jpeg, png\n"
"uint8[] data         # Compressed image buffer\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/CameraInfo\n"
"# This message defines meta information for a camera. It should be in a\n"
"# camera namespace on topic \"camera_info\" and accompanied by up to five\n"
"# image topics named:\n"
"#\n"
"#   image_raw - raw data from the camera driver, possibly Bayer encoded\n"
"#   image            - monochrome, distorted\n"
"#   image_color      - color, distorted\n"
"#   image_rect       - monochrome, rectified\n"
"#   image_rect_color - color, rectified\n"
"#\n"
"# The image_pipeline contains packages (image_proc, stereo_image_proc)\n"
"# for producing the four processed image topics from image_raw and\n"
"# camera_info. The meaning of the camera parameters are described in\n"
"# detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.\n"
"#\n"
"# The image_geometry package provides a user-friendly interface to\n"
"# common operations using this meta information. If you want to, e.g.,\n"
"# project a 3d point into image coordinates, we strongly recommend\n"
"# using image_geometry.\n"
"#\n"
"# If the camera is uncalibrated, the matrices D, K, R, P should be left\n"
"# zeroed out. In particular, clients may assume that K[0] == 0.0\n"
"# indicates an uncalibrated camera.\n"
"\n"
"#######################################################################\n"
"#                     Image acquisition info                          #\n"
"#######################################################################\n"
"\n"
"# Time of image acquisition, camera coordinate frame ID\n"
"Header header    # Header timestamp should be acquisition time of image\n"
"                 # Header frame_id should be optical frame of camera\n"
"                 # origin of frame should be optical center of camera\n"
"                 # +x should point to the right in the image\n"
"                 # +y should point down in the image\n"
"                 # +z should point into the plane of the image\n"
"\n"
"\n"
"#######################################################################\n"
"#                      Calibration Parameters                         #\n"
"#######################################################################\n"
"# These are fixed during camera calibration. Their values will be the #\n"
"# same in all messages until the camera is recalibrated. Note that    #\n"
"# self-calibrating systems may \"recalibrate\" frequently.              #\n"
"#                                                                     #\n"
"# The internal parameters can be used to warp a raw (distorted) image #\n"
"# to:                                                                 #\n"
"#   1. An undistorted image (requires D and K)                        #\n"
"#   2. A rectified image (requires D, K, R)                           #\n"
"# The projection matrix P projects 3D points into the rectified image.#\n"
"#######################################################################\n"
"\n"
"# The image dimensions with which the camera was calibrated. Normally\n"
"# this will be the full camera resolution in pixels.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# The distortion model used. Supported models are listed in\n"
"# sensor_msgs/distortion_models.h. For most cameras, \"plumb_bob\" - a\n"
"# simple model of radial and tangential distortion - is sufficient.\n"
"string distortion_model\n"
"\n"
"# The distortion parameters, size depending on the distortion model.\n"
"# For \"plumb_bob\", the 5 parameters are: (k1, k2, t1, t2, k3).\n"
"float64[] D\n"
"\n"
"# Intrinsic camera matrix for the raw (distorted) images.\n"
"#     [fx  0 cx]\n"
"# K = [ 0 fy cy]\n"
"#     [ 0  0  1]\n"
"# Projects 3D points in the camera coordinate frame to 2D pixel\n"
"# coordinates using the focal lengths (fx, fy) and principal point\n"
"# (cx, cy).\n"
"float64[9]  K # 3x3 row-major matrix\n"
"\n"
"# Rectification matrix (stereo cameras only)\n"
"# A rotation matrix aligning the camera coordinate system to the ideal\n"
"# stereo image plane so that epipolar lines in both stereo images are\n"
"# parallel.\n"
"float64[9]  R # 3x3 row-major matrix\n"
"\n"
"# Projection/camera matrix\n"
"#     [fx'  0  cx' Tx]\n"
"# P = [ 0  fy' cy' Ty]\n"
"#     [ 0   0   1   0]\n"
"# By convention, this matrix specifies the intrinsic (camera) matrix\n"
"#  of the processed (rectified) image. That is, the left 3x3 portion\n"
"#  is the normal camera intrinsic matrix for the rectified image.\n"
"# It projects 3D points in the camera coordinate frame to 2D pixel\n"
"#  coordinates using the focal lengths (fx', fy') and principal point\n"
"#  (cx', cy') - these may differ from the values in K.\n"
"# For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will\n"
"#  also have R = the identity and P[1:3,1:3] = K.\n"
"# For a stereo pair, the fourth column [Tx Ty 0]' is related to the\n"
"#  position of the optical center of the second camera in the first\n"
"#  camera's frame. We assume Tz = 0 so both cameras are in the same\n"
"#  stereo image plane. The first camera always has Tx = Ty = 0. For\n"
"#  the right (second) camera of a horizontal stereo pair, Ty = 0 and\n"
"#  Tx = -fx' * B, where B is the baseline between the cameras.\n"
"# Given a 3D point [X Y Z]', the projection (x, y) of the point onto\n"
"#  the rectified image is given by:\n"
"#  [u v w]' = P * [X Y Z 1]'\n"
"#         x = u / w\n"
"#         y = v / w\n"
"#  This holds for both images of a stereo pair.\n"
"float64[12] P # 3x4 row-major matrix\n"
"\n"
"\n"
"#######################################################################\n"
"#                      Operational Parameters                         #\n"
"#######################################################################\n"
"# These define the image region actually captured by the camera       #\n"
"# driver. Although they affect the geometry of the output image, they #\n"
"# may be changed freely without recalibrating the camera.             #\n"
"#######################################################################\n"
"\n"
"# Binning refers here to any camera setting which combines rectangular\n"
"#  neighborhoods of pixels into larger \"super-pixels.\" It reduces the\n"
"#  resolution of the output image to\n"
"#  (width / binning_x) x (height / binning_y).\n"
"# The default values binning_x = binning_y = 0 is considered the same\n"
"#  as binning_x = binning_y = 1 (no subsampling).\n"
"uint32 binning_x\n"
"uint32 binning_y\n"
"\n"
"# Region of interest (subwindow of full camera resolution), given in\n"
"#  full resolution (unbinned) image coordinates. A particular ROI\n"
"#  always denotes the same window of pixels on the camera sensor,\n"
"#  regardless of binning settings.\n"
"# The default setting of roi (all values 0) is considered the same as\n"
"#  full resolution (roi.width = width, roi.height = height).\n"
"RegionOfInterest roi\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/RegionOfInterest\n"
"# This message is used to specify a region of interest within an image.\n"
"#\n"
"# When used to specify the ROI setting of the camera when the image was\n"
"# taken, the height and width fields should either match the height and\n"
"# width fields for the associated image; or height = width = 0\n"
"# indicates that the full resolution image was captured.\n"
"\n"
"uint32 x_offset  # Leftmost pixel of the ROI\n"
"                 # (0 if the ROI includes the left edge of the image)\n"
"uint32 y_offset  # Topmost pixel of the ROI\n"
"                 # (0 if the ROI includes the top edge of the image)\n"
"uint32 height    # Height of ROI\n"
"uint32 width     # Width of ROI\n"
"\n"
"# True if a distinct rectified ROI should be calculated from the \"raw\"\n"
"# ROI in this message. Typically this should be False if the full image\n"
"# is captured (ROI not used), and True if a subwindow is captured (ROI\n"
"# used).\n"
"bool do_rectify\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TransformStamped\n"
"# This expresses a transform from coordinate frame header.frame_id\n"
"# to the coordinate frame child_frame_id\n"
"#\n"
"# This message is mostly used by the \n"
"# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n"
"# See its documentation for more information.\n"
"\n"
"Header header\n"
"string child_frame_id # the frame id of the child frame\n"
"Transform transform\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
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

  static const char* value(const ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time_reference);
      stream.next(m.image);
      stream.next(m.info);
      stream.next(m.shutter);
      stream.next(m.gain);
      stream.next(m.white_balance_blue);
      stream.next(m.white_balance_red);
      stream.next(m.temperature);
      stream.next(m.worldToCamera);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WFOVCompressedImage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wfov_camera_msgs::WFOVCompressedImage_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_reference: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.time_reference);
    s << indent << "image: ";
    s << std::endl;
    Printer< ::sensor_msgs::CompressedImage_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
    s << indent << "info: ";
    s << std::endl;
    Printer< ::sensor_msgs::CameraInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.info);
    s << indent << "shutter: ";
    Printer<float>::stream(s, indent + "  ", v.shutter);
    s << indent << "gain: ";
    Printer<float>::stream(s, indent + "  ", v.gain);
    s << indent << "white_balance_blue: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.white_balance_blue);
    s << indent << "white_balance_red: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.white_balance_red);
    s << indent << "temperature: ";
    Printer<float>::stream(s, indent + "  ", v.temperature);
    s << indent << "worldToCamera: ";
    s << std::endl;
    Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.worldToCamera);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WFOV_CAMERA_MSGS_MESSAGE_WFOVCOMPRESSEDIMAGE_H

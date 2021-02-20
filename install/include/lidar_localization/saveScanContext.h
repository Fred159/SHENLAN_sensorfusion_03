// Generated by gencpp from file lidar_localization/saveScanContext.msg
// DO NOT EDIT!


#ifndef LIDAR_LOCALIZATION_MESSAGE_SAVESCANCONTEXT_H
#define LIDAR_LOCALIZATION_MESSAGE_SAVESCANCONTEXT_H

#include <ros/service_traits.h>


#include <lidar_localization/saveScanContextRequest.h>
#include <lidar_localization/saveScanContextResponse.h>


namespace lidar_localization
{

struct saveScanContext
{

typedef saveScanContextRequest Request;
typedef saveScanContextResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct saveScanContext
} // namespace lidar_localization


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::lidar_localization::saveScanContext > {
  static const char* value()
  {
    return "8d9c3b918a0afafe09791ef8d7853918";
  }

  static const char* value(const ::lidar_localization::saveScanContext&) { return value(); }
};

template<>
struct DataType< ::lidar_localization::saveScanContext > {
  static const char* value()
  {
    return "lidar_localization/saveScanContext";
  }

  static const char* value(const ::lidar_localization::saveScanContext&) { return value(); }
};


// service_traits::MD5Sum< ::lidar_localization::saveScanContextRequest> should match
// service_traits::MD5Sum< ::lidar_localization::saveScanContext >
template<>
struct MD5Sum< ::lidar_localization::saveScanContextRequest>
{
  static const char* value()
  {
    return MD5Sum< ::lidar_localization::saveScanContext >::value();
  }
  static const char* value(const ::lidar_localization::saveScanContextRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::lidar_localization::saveScanContextRequest> should match
// service_traits::DataType< ::lidar_localization::saveScanContext >
template<>
struct DataType< ::lidar_localization::saveScanContextRequest>
{
  static const char* value()
  {
    return DataType< ::lidar_localization::saveScanContext >::value();
  }
  static const char* value(const ::lidar_localization::saveScanContextRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::lidar_localization::saveScanContextResponse> should match
// service_traits::MD5Sum< ::lidar_localization::saveScanContext >
template<>
struct MD5Sum< ::lidar_localization::saveScanContextResponse>
{
  static const char* value()
  {
    return MD5Sum< ::lidar_localization::saveScanContext >::value();
  }
  static const char* value(const ::lidar_localization::saveScanContextResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::lidar_localization::saveScanContextResponse> should match
// service_traits::DataType< ::lidar_localization::saveScanContext >
template<>
struct DataType< ::lidar_localization::saveScanContextResponse>
{
  static const char* value()
  {
    return DataType< ::lidar_localization::saveScanContext >::value();
  }
  static const char* value(const ::lidar_localization::saveScanContextResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LIDAR_LOCALIZATION_MESSAGE_SAVESCANCONTEXT_H
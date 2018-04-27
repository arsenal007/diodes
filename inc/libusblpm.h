/*
 * libusblpm.h
 *
 *  Created on: 21.03.2018
 *      Author: vkuzmenko
 */

#ifndef LIBUSBLPM_H_
#define LIBUSBLPM_H_

constexpr uint16_t VID = 0x0483;
constexpr uint16_t PID = 0x5740;

constexpr uint8_t BULK_EP_OUT = 0x01;
constexpr uint8_t BULK_EP_IN = 0x81;
constexpr size_t PACKET_SIZE = sizeof( USBi_t );

class UsbLpmHW
{
 public:
  const bool is_init( void )
  {
    return init_flag;
  };
  bool init( void )
  {
    if ( init_flag == false )
    {
      {
        auto status = libusb_init( NULL );
        if ( status != LIBUSB_SUCCESS )
        {
          logerror( "libusb_init() failed: %s\n", libusb_error_name( status ) );
          init_flag = false;
          return init_flag;
        };
      }
      libusb_set_debug( NULL, LIBUSB_LOG_LEVEL_NONE );

      device = libusb_open_device_with_vid_pid( NULL, VID, PID );

      if ( device == NULL )
      {
        logerror( "libusb_open_device_with_vid_pid() failed: \n" );
        init_flag = false;
        libusb_exit( NULL );
        return init_flag;
      };
      auto status = libusb_claim_interface( device, 0 );
      if ( status != LIBUSB_SUCCESS )
      {
        logerror( "libusb_claim_interface failed: %s\n", libusb_error_name( status ) );
        deinit();
        init_flag = false;
        return init_flag;
      }
      init_flag = true;
    }
    else
    {
      logerror( "libusblpm already init: please deinit first! \n" );
    }
    return init_flag;
  }
  bool send_packet( uint8_t* packet )
  {
    if ( init_flag == false )
    {
      logerror( "libusblpm was not inited\n" );
      return false;
    }
    int transferred;
    auto status = libusb_bulk_transfer( device, BULK_EP_OUT, packet, PACKET_SIZE, &transferred, 5000 );  //5 sek
    if ( status != LIBUSB_SUCCESS )
    {
      logerror( "libusb_bulk_transfer failed: %s\n", libusb_error_name( status ) );
      return false;
    }
    if ( transferred != PACKET_SIZE )
    {
      logerror( "transferred size is not equal to packet size \n" );
      logerror( "try to reset device \n" );
      libusb_reset_device( device );
      return false;
    }
    return true;
  }
  bool receive_packet( uint8_t* p )
  {
    int transferred;
    auto status = libusb_bulk_transfer( device, BULK_EP_IN, p, PACKET_SIZE, &transferred, 250000 );  //500sek timeout
    if ( status != LIBUSB_SUCCESS )
    {
      logerror( "libusb_bulk_transfer failed: %s\n", libusb_error_name( status ) );
      return false;
    }
    return true;
  }
  void deinit( void )
  {
    auto status = libusb_release_interface( device, 0 );
    if ( status != LIBUSB_SUCCESS )
    {
      logerror( "libusb_release_interface failed: %s\n", libusb_error_name( status ) );
      return;
    }
    libusb_close( device );
    libusb_exit( NULL );
  }

 private:
  void logerror( const char* format, ... )
  {
    va_list ap;
    va_start( ap, format );

#if !defined( _WIN32 ) || defined( __CYGWIN__ )
    if ( dosyslog )
      vsyslog( LOG_ERR, format, ap );
    else
#endif
      vfprintf( stderr, format, ap );
    va_end( ap );
  }
  bool init_flag = false;
  libusb_device_handle* device = NULL;
};

#endif /* LIBUSBLPM_H_ */

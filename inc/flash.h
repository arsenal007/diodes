/*
 * flash.h
 *
 *  Created on: 29.03.2018
 *      Author: vkuzmenko
 */

#ifndef FLASH_H_
#define FLASH_H_

constexpr uint8_t ONE = 0xFF;
class CFlash
{
 public:
  static CFlash& get_instance( void )
  {
    static CFlash singleton;
    return singleton;
  }
  void build_img( const std::vector<uint8_t>& changable, const std::vector<uint8_t>& constant )
  {
    img.reserve( 33554432 );
    img = changable;
    img.resize( 262144, ONE );
    assert( img.size() == 262144 );
    img.insert( img.cend(), constant.cbegin(), constant.cend() );
    while ( img.size() % 256 != 0 )
    {
      img.resize( img.size() + 1, ONE );
    }
    //img.resize( 33554432, ONE );
    //assert( img.size() == 33554432 );
  }
  uint8_t* get_img( void )
  {
    return img.data();
  }
  auto get_size( void )
  {
    return img.size();
  }

 private:
  std::vector<uint8_t> img;
  CFlash() {}
  ~CFlash() {}
  CFlash( const CFlash& );             // Prevent copy-construction
  CFlash& operator=( const CFlash& );  // Prevent assignment
};

#endif /* FLASH_H_ */

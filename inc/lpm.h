/*
 * offsets.h
 *
 *  Created on: 22.03.2018
 *      Author: vkuzmenko
 */

#ifndef OFFSETS_H_
#define OFFSETS_H_

#ifdef __cplusplus
extern "C" {
#endif

extern void full_program( uint8_t* img, const size_t size );
extern void crc( uint32_t begin, size_t size, uint64_t crc );
extern uint64_t crc64( uint8_t* begin, uint8_t* end );

#ifdef __cplusplus
}
#endif

#endif /* OFFSETS_H_ */

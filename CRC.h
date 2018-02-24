#ifndef __CRC_H__
#define __CRC_H__

#if ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

class CRC
{
public:
	uint8_t  getCRC8(byte *data);
	uint16_t getCRC16(byte *data);
	uint32_t getCRC32(byte *data);
};

#endif

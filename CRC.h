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
	static byte     getCRC8(byte *data);
	static uint16_t getCRC16(byte *data);
	static uint32_t getCRC32(byte *data);
};

#endif

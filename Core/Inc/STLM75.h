#pragma once
#include "i2cDriver.h"

#define STLM75_address 0x92

enum STLM75_registers
{
	TEMP = 0x00,
	CONF = 0x01,
	THYS = 0x02,
	TOS = 0x03
};

float STLM75_getTemperature();


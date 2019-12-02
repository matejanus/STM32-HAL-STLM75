#include "STLM75.h"

float STLM75_getTemperature() {
	int8_t RD_Data[2];
	i2cReadReg(STLM75_address, TEMP, RD_Data, 2);

	if (RD_Data[1] & 0x80)
		return (float)RD_Data[0] + 0.5f;
	else
		return RD_Data[0];
}


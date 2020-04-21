#ifndef T_ONE_WIRE_DEVICE_ADDRESS_H
#define T_ONE_WIRE_DEVICE_ADDRESS_H

#include <stdint.h>

/* Array_Data_Type */
/*
Allows to model a data representing the address of a OneWire bus slave device.
The first byte is the 1-Wire device family code.
The next 6 bytes (48 bits) are a unique serial number.
The last byte is a CRC (=X^8+X^5+X^4+1) calculated from the first 56 bits.
*/

typedef uint8_t T_One_Wire_Device_Address[8];

#endif

#ifndef ONE_WIRE_PROTOCOL_H
#define ONE_WIRE_PROTOCOL_H

#include <stdint.h>
#include "T_One_Wire_Device_Address.h"

/* Client_Server_Interface */
/*
This interface gathers operations allowing to execute basic sequences of the 
1-Wire communication protocol.
Every operation first performs a reset, then selects the slave and finally sends
 the command.
*/
typedef struct {

    void (*Send_Simple_Command) ( 
		const T_One_Wire_Device_Address* slave_address,
		uint8_t command );
	
    void (*Send_Write_Command) (
		const T_One_Wire_Device_Address* slave_address,
		uint8_t command,
		const uint8_t* message,
		uint8_t nb_bytes );

    void (*Send_Read_Command) (
		const T_One_Wire_Device_Address* slave_address,
		uint8_t command,
		uint8_t* message,
		uint8_t nb_bytes ) ;
	
} One_Wire_Protocol;

#endif
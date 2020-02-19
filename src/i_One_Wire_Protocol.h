#ifndef I_ONE_WIRE_PROTOCOL_H
#define I_ONE_WIRE_PROTOCOL_H

#include "stdint.h"
#include "T_One_Wire_Device_Address.h"

/* Client_Server_Interface */
/*
This interface gathers operations allowing to execute basic sequences of the 1-Wire communication 
protocol.
Every operation first performs a reset, then selects the slave and finally sends the command.
*/
class i_One_Wire_Protocol {
public :
    /* Synchronous_Operation */
    /* */
    virtual void Send_Simple_Command( 
		T_One_Wire_Device_Address slave_address,
		uint8_t command ) = 0;
	
	/* Synchronous_Operation */
    /* */
    virtual void Send_Write_Command(
		T_One_Wire_Device_Address slave_address,
		uint8_t command,
		uint8_t* message,
		uint8_t nb_bytes ) = 0;
	
	/* Synchronous_Operation */
    /* */
    virtual void Send_Read_Command(
		T_One_Wire_Device_Address slave_address,
		uint8_t command,
		uint8_t* message,
		uint8_t nb_bytes ) = 0;
	
};

#endif
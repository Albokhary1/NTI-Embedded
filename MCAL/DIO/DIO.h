/*
 * DIO.h
 *
 *  Author: Abdelrahman Elbokhary 
 */ 
#include "DIO_types.h"

#ifndef DIO_H_
#define DIO_H_
void DIO_SetPortDirection(DIO_PORT_ID port_ID,DIO_Direction direction);
void DIO_SetPortValue(DIO_PORT_ID port_ID,u8 value);
void DIO_SetPinDirection(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID,DIO_Direction direction);
void DIO_SetPinValue(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID,DIO_Value value);
DIO_Value GetPinValue(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID);







#endif 
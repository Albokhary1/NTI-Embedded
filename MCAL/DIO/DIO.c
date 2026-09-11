/*
 * DIO.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "DIO.h"
#include "DIO_types.h"
#include "DIO_REG.h"
#include "BIT_Math.h" // تم إضافته لاستدعاء الماكروز (SET, CLEAR, GET)

void DIO_SetPortDirection(DIO_PORT_ID port_ID,DIO_Direction direction){
	if(OUTPUT==direction){
		switch(port_ID){
			case PORTA: DDRA_Reg=0xFF; break;
			case PORTB: DDRB_Reg=0xFF; break;
			case PORTC: DDRC_Reg=0xFF; break;
			case PORTD: DDRD_Reg=0xFF; break;
		}
	}
	else if(INPUT==direction){
		switch(port_ID){
			case PORTA: DDRA_Reg=0x00; break;
			case PORTB: DDRB_Reg=0x00; break;
			case PORTC: DDRC_Reg=0x00; break;
			case PORTD: DDRD_Reg=0x00; break;
		}
	}
}

void DIO_SetPortValue(DIO_PORT_ID port_ID,u8 value){
	switch(port_ID){
		case PORTA: PORTA_Reg= value; break;
		case PORTB: PORTB_Reg= value; break; // تم تصحيح الخطأ هنا (كانت PORTC_Reg)
		case PORTC: PORTC_Reg= value; break;		
		case PORTD: PORTD_Reg= value; break;
	}
}

void DIO_SetPinDirection(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID,DIO_Direction direction){
	if(pin_ID<=PIN7 && port_ID<=PORTD){
		if (OUTPUT==direction)
		{
			switch(port_ID){
				case PORTA : SET_BIT(DDRA_Reg , pin_ID); break;
				case PORTB : SET_BIT(DDRB_Reg , pin_ID); break;
				case PORTC : SET_BIT(DDRC_Reg , pin_ID); break;
				case PORTD : SET_BIT(DDRD_Reg , pin_ID); break;
			}
		}
		else if (INPUT==direction){
			switch(port_ID){
				case PORTA : CLEAR_BIT(DDRA_Reg , pin_ID); break;
				case PORTB : CLEAR_BIT(DDRB_Reg , pin_ID); break;
				case PORTC : CLEAR_BIT(DDRC_Reg , pin_ID); break;
				case PORTD : CLEAR_BIT(DDRD_Reg , pin_ID); break;
			}
		}
	}
}

/* ---------------- الدوال الناقصة التي تم إضافتها ---------------- */

void DIO_SetPinValue(DIO_PORT_ID port_ID, DIO_PIN_ID pin_ID, DIO_Value value){
	if(pin_ID<=PIN7 && port_ID<=PORTD){
		if (HIGH==value)
		{
			switch(port_ID){
				case PORTA : SET_BIT(PORTA_Reg , pin_ID); break;
				case PORTB : SET_BIT(PORTB_Reg , pin_ID); break;
				case PORTC : SET_BIT(PORTC_Reg , pin_ID); break;
				case PORTD : SET_BIT(PORTD_Reg , pin_ID); break;
			}
		}
		else if (LOW==value){
			switch(port_ID){
				case PORTA : CLEAR_BIT(PORTA_Reg , pin_ID); break;
				case PORTB : CLEAR_BIT(PORTB_Reg , pin_ID); break;
				case PORTC : CLEAR_BIT(PORTC_Reg , pin_ID); break;
				case PORTD : CLEAR_BIT(PORTD_Reg , pin_ID); break;
			}
		}
	}
}

DIO_Value GetPinValue(DIO_PORT_ID port_ID, DIO_PIN_ID pin_ID){
	DIO_Value local_value = LOW;
	if(pin_ID<=PIN7 && port_ID<=PORTD){
		switch(port_ID){
			case PORTA : local_value = GET_BIT(PINA_Reg , pin_ID); break;
			case PORTB : local_value = GET_BIT(PINB_Reg , pin_ID); break;
			case PORTC : local_value = GET_BIT(PINC_Reg , pin_ID); break;
			case PORTD : local_value = GET_BIT(PIND_Reg , pin_ID); break;
		}
	}
	return local_value;
}
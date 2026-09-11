/*
 * DIO_types.h
 *
 *  Author: Abdelrahman Elbokhary
 */
 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

typedef unsigned char u8;
typedef unsigned short int u16;
typedef signed char s8;
typedef signed short int s16;
typedef signed int s32;
typedef signed int u32;

typedef enum{
	PORTA,
	PORTB,
	PORTC,
	PORTD,
}DIO_PORT_ID;

typedef enum{
	INPUT,
	OUTPUT,
}DIO_Direction;

typedef enum{
	HIGH,
	LOW,
}DIO_Value;

typedef enum{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
}DIO_PIN_ID;





#endif /* DIO_TYPES_H_ */
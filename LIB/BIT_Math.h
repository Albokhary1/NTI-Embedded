/*
 * BIT_Math.h
 *
 *  Author: Abdelrahman Elbokhary
 */


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(PORT_ID , PIN_ID)			PORT_ID |= (1<<PIN_ID)
#define CLEAR_BIT(PORT_ID , PIN_ID)			PORT_ID &= ~(1<<PIN_ID)
#define TOGGLE_BIT(PORT_ID , PIN_ID)		PORT_ID ^=(1<<PIN_ID)
#define GET_BIT(PORT_ID , PIN_ID)			( ( PORT_ID >>PIN_ID )  &  0x01)




#endif /* BIT_MATH_H_ */
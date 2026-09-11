/*
 * main.c
 *
 * Description: Application to control an LED on PA0 using a Push Button on PA1.
 */

#include "DIO.h"

int main(void)
{
    DIO_SetPinDirection(PORTA, PIN0, OUTPUT);
    
    DIO_SetPinDirection(PORTA, PIN1, INPUT);
    
    DIO_SetPinValue(PORTA, PIN1, HIGH);
    
    DIO_Value buttonState = HIGH;

    while (1)
    {
        buttonState = GetPinValue(PORTA, PIN1);

        if (buttonState == LOW) 
        {
            DIO_SetPinValue(PORTA, PIN0, HIGH);
        }
        else 
        {
            DIO_SetPinValue(PORTA, PIN0, LOW);
        }
    }
    
    return 0;
}
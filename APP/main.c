/*
 * main.c
 *
 * Description: Application to control an LED on PA0 using a Push Button on PA1.
 */

#include "DIO.h"

int main(void)
{
    /* lab_led 1
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
    */
    /*
 * main.c
 *
 * Description: Control multiple LEDs using individual buttons and one master button.
 */

#include "DIO.h"

int main(void)
{
    /* Configure LED pins as OUTPUT */
    DIO_SetPinDirection(PORTA, PIN0, OUTPUT); // D1
    DIO_SetPinDirection(PORTA, PIN3, OUTPUT); // D2
    DIO_SetPinDirection(PORTA, PIN6, OUTPUT); // D3
    
    /* Configure Button pins as INPUT */
    DIO_SetPinDirection(PORTC, PIN0, INPUT);  // Button 1 (Opposite to D1)
    DIO_SetPinDirection(PORTC, PIN7, INPUT);  // Button 2 (Opposite to D2)
    DIO_SetPinDirection(PORTD, PIN6, INPUT);  // Button 3 (Opposite to D3)
    DIO_SetPinDirection(PORTD, PIN7, INPUT);  // Master Button (Turns all LEDs ON)
    
    /* Enable internal pull-up resistors for all buttons */
    DIO_SetPinValue(PORTC, PIN0, HIGH);
    DIO_SetPinValue(PORTC, PIN7, HIGH);
    DIO_SetPinValue(PORTD, PIN6, HIGH);
    DIO_SetPinValue(PORTD, PIN7, HIGH);
    
    DIO_Value btn1_state, btn2_state, btn3_state, masterBtn_state;

    while (1)
    {
        /* Read the state of all buttons */
        btn1_state      = GetPinValue(PORTC, PIN0);
        btn2_state      = GetPinValue(PORTC, PIN7);
        btn3_state      = GetPinValue(PORTD, PIN6);
        masterBtn_state = GetPinValue(PORTD, PIN7);

        /* Check if the Master button is pressed (Active LOW) */
        if (masterBtn_state == LOW)
        {
            /* Turn ON all LEDs */
            DIO_SetPinValue(PORTA, PIN0, HIGH);
            DIO_SetPinValue(PORTA, PIN3, HIGH);
            DIO_SetPinValue(PORTA, PIN6, HIGH);
        }
        else
        {
            /* Control D1 based on Button 1 */
            if (btn1_state == LOW) {
                DIO_SetPinValue(PORTA, PIN0, HIGH);
            } else {
                DIO_SetPinValue(PORTA, PIN0, LOW);
            }

            /* Control D2 based on Button 2 */
            if (btn2_state == LOW) {
                DIO_SetPinValue(PORTA, PIN3, HIGH);
            } else {
                DIO_SetPinValue(PORTA, PIN3, LOW);
            }

            /* Control D3 based on Button 3 */
            if (btn3_state == LOW) {
                DIO_SetPinValue(PORTA, PIN6, HIGH);
            } else {
                DIO_SetPinValue(PORTA, PIN6, LOW);
            }
        }
    }
    
    return 0;
}
}
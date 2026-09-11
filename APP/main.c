/*
 * main.c
 */

#include "APP_TimerLED.h"

int main(void)
{
    APP_TimerLED_Init();

    while (1)
    {
        /* The main loop is completely free. 
         * The LED toggling is handled automatically by the Timer0 Interrupt. 
         */
    }
    
    return 0;
}
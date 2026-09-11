/*
 * main.c
 */

#include "APP_LDR_LED.h"

int main(void)
{
    APP_LDR_LED_Init();

    while (1)
    {
        APP_LDR_LED_Task();
    }
    
    return 0;
}
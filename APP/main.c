/*
 * main.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "APP_LED_Animation.h"

int main(void)
{
    APP_LED_Animation_Init();

    while (1)
    {
        APP_LED_Animation_Task();
    }
    
    return 0;
}
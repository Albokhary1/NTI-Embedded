/*
 * main.c
 */

#include "APP_ToneLEDs.h"

int main(void)
{
    APP_ToneLEDs_Init();

    while (1)
    {
        APP_ToneLEDs_Task();
    }
    
    return 0;
}
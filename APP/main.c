/*
 * main.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "APP_Keypad_7Seg.h"

int main(void)
{
    APP_Keypad7Seg_Init();

    while (1)
    {
        APP_Keypad7Seg_Task();
    }
    
    return 0;
}
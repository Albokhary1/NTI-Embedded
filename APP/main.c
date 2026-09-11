/*
 * main.c
 */

#include "APP_Calculator.h"

int main(void)
{
    APP_Calculator_Init();

    while (1)
    {
        APP_Calculator_Task();
    }
    
    return 0;
}
/*
 * main.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "DIO.h"
#include "LCD.h"
#include "APP_lcd_name.h"

int main(void)
{
    LCD_Init();
    
    APP_DisplayName();

    while (1)
    {
        
    }
    
    return 0;
}
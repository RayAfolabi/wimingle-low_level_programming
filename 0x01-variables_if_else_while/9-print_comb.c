/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints all posible combination of single-digit numbers separated by commas and spaces.
*/

#include <stdio.h>

int main (void)

{
    int i;

    for (i = 0; i <= 9; i++)
    {
        putchar(i + '0');
        if (i != 9)
        {  
            putchar(',');
            putchar(' ');
        }
    }    
   putchar ('\n');
   return 0;
}


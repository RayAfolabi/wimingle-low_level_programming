/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that print all posible different combination of two digits with no 10 after 01. Putchar is used only 5 times.
*/

#include <stdio.h>
int main (void)

{
    int a , b; 
    for (a = 0; a <= 8; a++)
    { 
        for (b = a + 1; b <=9; b++)
        {
            putchar(a + '0');
            putchar(b + '0');
            if (a !=8 || b != 9)
            {
                putchar (',');
                putchar(' ');
            }
        }
    }

   putchar('\n');
   return 0;
}


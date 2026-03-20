/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints all posible combination of two two-digit numbers.
*/

#include <stdio.h>
int main(void)

{
    int a , b;
    for (a = 0; a <= 98; a++)
    {
        for (b = a + 1; b <= 99; b++)
        {
            putchar((a / 10) + '0');
            putchar((a % 10) + '0');
            putchar(' ');
            putchar((b /10) + '0');
            putchar((b % 10) +'0');
            if (a != 98 || b !=99)
            {
                putchar(',');
                putchar(' ');
            }
        }

    }

    putchar('\n');
    return 0;

}


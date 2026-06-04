#include "main.h"
/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a function that prints the last digit of a number
*/
int print_last_digit(int n)
{
    int last;

    last = n % 10;

    if (last < 0)

        last = -last;

    _putchar('0' + last);

    return (last);
}    


/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that print lowercase, then uppercase, followed by a new line using only putchar.
*/


#include <stdio.h>

int main (void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);
    for (c = 'A'; c <= 'Z'; c++)
        putchar(c);
    putchar('\n');
    return 0;
}


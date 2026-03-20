/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints the lower alphabet in reverse order
*/

#include <stdio.h>

int main (void)

{
    char c;
    for (c = 'z'; c >= 'a'; c --)
        putchar (c);
    putchar ('\n');
    return 0;


}


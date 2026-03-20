/*
*Author: Afolabi Rachael
*Program: WinMingle Community C Training
*Description:This is a program print single-digit numbers of base 10 starting form 0 using only putchar twice
*/

#include <stdio.h>

int main (void)
{
    int i;
    for (i = 0; i <= 9; i++)
        putchar('0' + i );
    putchar('\n');
    return 0;
}


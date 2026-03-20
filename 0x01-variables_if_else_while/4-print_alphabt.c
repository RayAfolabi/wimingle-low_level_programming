/*
*Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that print alphabets in lowercase except q and e followed by a new line.
*/

#include <stdio.h>

int main (void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++)

    {
        if (c != 'q' && c != 'e')
            putchar (c);
    }

    putchar('\n');
    return 0;
}


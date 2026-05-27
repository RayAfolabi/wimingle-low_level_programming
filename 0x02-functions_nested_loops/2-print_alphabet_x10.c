#include "main.h"
/*
*Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints alphabets in lowercase 10 times using putchar twice
*/
void print_alphabet_x10(void)
{
    int i;
    char ch;
    for (i = 0; i < 10; i++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
        _putchar('\n');

  }
}  

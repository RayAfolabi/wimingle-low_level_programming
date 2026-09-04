#include "main.h"
/**
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a function that prints a square.
*/

void print_square(int size)
{
    int row, column;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }
    for(row = 0; row < size; row++)

    {
        for(column = 0; column < size; column++)
          {
              _putchar('#');
          }
       _putchar('\n');
    }
}

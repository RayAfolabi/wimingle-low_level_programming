#include "main.h"
/**
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a function that prints a triangle
*/


void print_triangle(int size)
{
    int row, space, hash;

    if (size <= 0)
    {
        _putchar('\n');
        return;
     }
        for (row = 1; row <= size; row++)
        {
            for (space = size - row; space > 0; space--)
              {
                  _putchar(' ');
              }
            for (hash = 0; hash < row; hash++)
               {
                   _putchar('#');
               }
                _putchar('\n');
         }
}        




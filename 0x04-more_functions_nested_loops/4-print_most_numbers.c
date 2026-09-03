#include "main.h"
/**
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a function that prints the numbers from 0 to 9 with exception of 2 and 4.
*/
void print_most_numbers(void)
{ 
  
    int n;
    n = 0;
    while(n <= 9)
    {
        if(n != 2 && n != 4)
            _putchar(n + '0');
        n++;      
     }
     _putchar('\n');
}     



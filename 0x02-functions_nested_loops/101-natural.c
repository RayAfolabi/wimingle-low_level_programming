#include <stdio.h>
/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that adds all the multiples of 3 and 5 below 1024
*/



int main (void)
{
    int i;
    int sum = 0;
    for (i = 0; i < 1024; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
     }
     printf("%d\n", sum);
     return (0);
 }    


/*
*Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints a single digit numbers of base 10 starting from 0 
*/

#include <stdio.h>
int main (void)
{
  int num;
  for (num = 0; num <= 9; num++)
      putchar(num + '0');
  putchar('\n');    
  return 0;

}


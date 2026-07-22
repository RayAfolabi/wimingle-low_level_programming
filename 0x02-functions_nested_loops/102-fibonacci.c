#include <stdio.h>
/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints the first 50 Fibonacci number starting from 1 and 2
*/

int main (void)
{
  unsigned long int a = 1, b = 2, next;
  int i;
  printf("%lu, %lu", a, b);

  for (i = 3; i <= 50; i++)
{

    next = a + b;
    printf(", %lu", next);
    a = b;
    b = next;
}
printf("\n");
return (0);
}


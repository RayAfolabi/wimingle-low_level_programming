#include <stdio.h>
/**
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that print the numbers from 1 to 100.
*/
int main (void)
{
    int n;
    for(n = 1; n <= 100; n++)
    {
       if( n % 3 == 0 && n % 5 == 0)
           printf("FizzBuzz");
       else if (n % 3 == 0)
           printf("Fizz");
       else if (n % 5 == 0)
           printf("Buzz");
       else
           printf("%d", n);
       if (n < 100)
           printf(" ");
    
    } 

  printf("\n");
  return (0);
}

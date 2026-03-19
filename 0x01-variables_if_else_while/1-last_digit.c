/*
*Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints the last digit of a random number and compares with a given set of digits..
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void)
{  
    int n, last_digit;
    srand(time(0));

    n = rand() - RAND_MAX/2;

    last_digit = n % 10;

    if (last_digit > 5)

    {  
        printf("Last digit of %d is %d and is greater than 5\n", n, last_digit); 
    }

   else if (last_digit == 0) 
   {
       printf("last digit of %d is %d and is 0\n", n, last_digit);
   }
  else 
  {
      printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);  
  }
  return 0;

}


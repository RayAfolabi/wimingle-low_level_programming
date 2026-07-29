#include <stdio.h>
/*
* Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that finds and prints the first 98 fibonacci numbers.
*/
int main (void)
{
unsigned long a1 = 0, a2 = 1, a3;
unsigned long b1 = 0, b2 = 0, b3;
unsigned long limit = 10000000000;
int count;

for (count = 1; count <= 98; count++)
  {
    a3 = a1 + a2;
    b3 = b1 + b2;
    if (a3 >= limit)
    {
    b3 += a3 / limit;
    a3 %= limit;
    }
    if (b3 > 0)
        printf("%lu%010lu", b3, a3);
    else
        printf("%lu", a3);

    if (count != 98)
        printf(", ");
        
   a1 = a2;
   a2 = a3;
   b1 = b2;
   b2 = b3;
   }
printf("\n");
return(0);
}
       



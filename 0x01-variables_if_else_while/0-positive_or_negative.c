/*
*Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that assigns a random number to a variable n each time it runs and prints a positive, negative or zero number 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{ 
    int n;
    srand(time(0));
    n = rand() - RAND_MAX/2;
    if  (n > 0)
    {
        printf ("%d is positive\n", n);
    }    
    else if (n < 0)
    {
        printf ("%d is negative\n", n);
    }    
    else
    {
        printf("%d is zero\n", n );
    }    
    return 0;
}
 


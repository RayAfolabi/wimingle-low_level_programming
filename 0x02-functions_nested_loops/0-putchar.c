/*
*Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a program that prints _putchar to the screen followed by a new line
*/

#include "main.h"
#include <stdio.h>

int main(void)
{
    int i =0;
    char c;
    char a[] ="_putchar";
    while (i <= 8){
         c = a[i];
        _putchar(c);
 
        i++;
}
return 0;


}


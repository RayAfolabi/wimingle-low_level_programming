#include "main.h"
/*
*Author: Afolabi Rachael
* Program: WinMingle Community C Training
* Description:This is a function that checks for alphabetic characters
*/
int _isalpha(int c)
{
if ((c>= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
   {         
    return (1);
   }    
    else
  {
     return (0);
  }

}  
 


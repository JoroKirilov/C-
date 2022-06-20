#include <stdio.h>

int main()
{
   char str [] = "C program is best";
 
   
   int indexCounter = 0 ; 
   for (indexCounter ; str[indexCounter] != '\0' ; )
   {
       indexCounter++;
   }
   
   /*indexCounter-- ; */ 
   while( indexCounter >= 0 )
   {
    putchar(str[indexCounter]);
    indexCounter--;
   }
}


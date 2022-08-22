#include <stdio.h>

int NumberSize (long int num )
{
   int number = 0 ; 
   while (num > 0) 
   {
   num = num / 10 ;
   number ++;
   
   }
   return number;
}

int main()
{
    long int sizeOfnum ; 
    scanf("%ld" , &sizeOfnum);
    printf("%d" , NumberSize(sizeOfnum));
}

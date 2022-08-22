#include <stdio.h>
int minNumber(int a , int b)
{
    if (a < b) 
    return a ;
    else return b ; 
}
int main()
{
   int lowerNumber = 0 ; 
   int num1 , num2 , num3 ; 
   scanf("%d %d %d" , &num1 , &num2 , &num3);
   
   printf("%d" , minNumber(minNumber(num1 , num2) , num3));
  return 0;
}

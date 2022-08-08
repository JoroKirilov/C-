#include <stdio.h>

int main()
{
  int numberTwo = 1;
  int rezultTwo = 1;
  int numberThree = 1;
  int rezult = 1;
   do 
   {
       if(numberTwo % 2 == 0)
       {
        rezult *= numberTwo ; 
       }
       numberTwo++;
   }
   while (numberTwo < 20 )  ; 
   printf("%d" , rezult);
   
    return 0; 
}

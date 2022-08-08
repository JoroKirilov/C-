

#include <stdio.h>

int main()
{
    int number ; 
    int numberOne = 1;
    int numberTwo = 1; 
    int rezult = 1 ;
    int rezultTwo = 1 ;
    int numberThree = 1 ;
   do
   {
       scanf("%d" , &number);
   }
   while (!(number >= 10 && number < 100 ));
   printf("This is the correct number: %d\n" , number);
   
   do
   {
       printf("%d\n" , numberOne);
       numberOne++; 
   }
   while (numberOne < 21);
   


    return 0;
}

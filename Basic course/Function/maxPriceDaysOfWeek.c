#include <stdio.h>

void DayOfWeek (int num )
{
     switch (num)
     {
         case 0: printf("Sunday");break;
         case 1: printf("Monday");break;
         case 2:printf("Thuesday");break;
         case 3: printf("Wendsday");break;
         case 4:printf("Thursday");break;
         case 5: printf("Friday");break;
         case 6: printf("Saturday");break;
         default: printf("Error 101");
         
     }
}

int main()
{
   int prices[5] = {233.4 , 5.6 , 163.7 , 348.6 , 45};
   int  maxPrice = prices[0] ;
   int indexMax = 0 ; 
   for (int i = 1 ; i < 5 ; i ++)
   {
       if (prices[i] > maxPrice)
       {
       maxPrice = prices[i];
       indexMax = i ;
       }
   }
   DayOfWeek(indexMax);
}

#include <stdio.h>

int main()
{
   int row = 1 ;
   int n  ; 
   int symbol = 1 ; 
   scanf("%d" , &n);
   
   for (row ; row <= n ; row++ )
   {
       for(int space = 1 ; space <= n - row ; space ++)
       {
           printf(" ");
       }
       for (int number = 1 ; number <= 2*row - 1 ; number ++)
       {
           if (symbol == 10)
           {
               symbol = 1 ; 
           }
           printf("%d" , symbol );
           symbol++ ; 
       }
       printf("\n");
   }
   
    

    return 0;
}
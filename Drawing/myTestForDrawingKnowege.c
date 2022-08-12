#include <stdio.h>

int main()
{
     int row = 1 ; 
     int n = 0 ; 
     scanf("%d" , &n);
     for (row ; row <= n ; row ++)
     {
         for (int space = 1 ; space <= n - row -1 ; space ++)
         {
             printf(" ");
         }
         if (row != n)
         {
             printf("-");
         }
         for(int star = 1 ; star <= 2*row - 1 ; star ++)
         {
             printf("*");
         }
         if (row != n)
         {
             printf("-");
         }
         printf("\n");
     }

    

    return 0;
}


#include <stdio.h>


int main()
{  int b , i;
int checkCount = 0 ; 
   int arr [8];
   for (int b = 0 ; b < 8 ; b ++)
   {
       scanf ("%d" , &arr[b]);
   }
   for ( int i = 0 ; i < 8 ; i ++)
   {
       if ( arr[i] != arr[7 - i])
       {
           printf("Incorrect"); return 0 ;
       }
   }
   printf("correct");
   
    
    
    
  
}



#include <stdio.h>

int main()
{
   int iValue = 0 ; 
   while (iValue < 13 )
   {
       
       iValue++;
         if(iValue == 5 )
       {
           continue; 
       }
       
       printf("%d\n" , iValue);
       
     
    }

    return 0;
}

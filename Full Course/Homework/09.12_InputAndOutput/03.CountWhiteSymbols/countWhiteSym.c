//3.Напишете програма, която преброява шпациите, табулациите и
//новите редове.

#include<stdio.h>

int main()
{
   int count = 0 ;
   char c ;

   while((c = getchar()) != EOF)
   {
       if(c == '\n' || c == '\t' || c == ' ')
       {
           count++;
       }
   }

   printf("\n");
   printf("%d" , count);
}

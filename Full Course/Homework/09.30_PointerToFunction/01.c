#include<stdio.h>
#include<stdlib.h>

typedef int (*Fptr) (int a , int b) ;

int fcPLus(int a , int b )
{
     return a + b ;
}
int fcMinus(int a , int b) 
{ 
    return a - b ;
}


int main(char argc ,char *argv[])
{
   Fptr p = NULL ; 

   switch (*argv[2])
   {
   case '+' : p = fcPLus ; break ;
   case '-' : p = fcMinus ; break ;
   }

   printf("%d\n" , p(atoi(argv[1]),atoi(argv[3])));

   
}
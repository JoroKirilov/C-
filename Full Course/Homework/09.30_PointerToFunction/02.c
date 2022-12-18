#include<stdio.h>
//#include<stdlib.h>

typedef int (*Fptr) (int a , int b) ;

int fcPLus(int a , int b )
{
     return a + b ;
}
int fcMinus(int a , int b) 
{ 
    return a - b ;
}
int fcMulti(int a , int b) 
{ 
    return (a * b) ;
}
int fcDivide(int a , int b) 
{ 
    return (a / b) ;
}


int main(int argc ,char *argv[])
{
   Fptr p = NULL ; 

   switch (*argv[2])
   {
   case '+' : p = fcPLus ; break ;
   case '-' : p = fcMinus ; break ;
   case '*' : p = fcMulti ; break ;
   case '/' : p = fcDivide ; break ;
   }

   printf("%d\n" , p(atoi(argv[1]),atoi(argv[3])));

   
}
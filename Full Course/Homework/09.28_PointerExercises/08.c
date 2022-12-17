//8. Напишете програма, 
//която събира две числа, използвайки указатели.


#include<stdio.h>

int main()
{
   int a = 5 ; 
   int b = 10 ; 
   int *pA = &a ; 
   int *pB = &b ;
   a = *pA + *pB ;

   printf("%d" , a); 
}
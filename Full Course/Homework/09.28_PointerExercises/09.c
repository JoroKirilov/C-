/* 9. Напишете програма, която разменя две числа, 
използвай указатели. */

#include<stdio.h>

int main()
{
    int temp ; 
    int a = 5 ; 
    int b = 10 ; 
    int *pA = &a ;
    int *pB = &b ;

    temp = *pA ; 
    *pA = *pB ; 
    *pB = temp ; 

    printf("a = %d\n" , a);
    printf("b = %d" , b);

    
}

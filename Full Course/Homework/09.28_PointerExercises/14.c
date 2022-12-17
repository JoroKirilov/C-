/* 14. Напишете програма, която да изчисли факториал на дадено число,
използвайки указатели. */

#include<stdio.h>

int factoriel(int num);

int main()
{
    int num = 5 ; 
   
    printf("%d" , factoriel(num));
}

int factoriel(int num)
{
    int *ptr = &num;
    int factoriel = 1 ; 
    while(*ptr > 0)
    {
        factoriel *= *ptr;
        num--;
    }
    return factoriel ;
}

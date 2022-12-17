//12. Напишете примерна програма, която връща няколко стойности от функция, използвайки указател.


#include<stdio.h>

int returnTwoValue(int * a , int * b)
{
    *a = 5 ; 
    *b = 6 ; 
}

int main()
{
    int a ; 
    int b ; 

    returnTwoValue(&a , &b);

    printf("a = %d\nb = %d\n" , a , b );
}
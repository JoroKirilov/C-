#include<stdio.h>


void test (int *pointer )
{
    *pointer = 4 ;
}


int main ()
{
    int n = 10 ;
    test(&n);
    printf("%d" , n ) ;
}
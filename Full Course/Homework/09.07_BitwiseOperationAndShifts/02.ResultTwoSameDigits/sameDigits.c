//Какъв ще бъде резултата от следната операция: а = а ^ a; ?

#include<stdio.h>


int main()
{
    int num = 7 ;

    num = num ^ num ;
    printf("%d", num);
}

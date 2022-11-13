#include<stdio.h>

int main()

{
    int secByYear = 0 ;
    int days = 365 ;
    int hours = 24;
    int minutes = 60 ;
    int seconds = 60 ;

    secByYear = days * hours * minutes * seconds ;
    printf("One year have %d seconds" , secByYear);

}

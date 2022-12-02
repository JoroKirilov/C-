#include<stdio.h>

int main ()
{
    float a , b , c;
    int n ;
    scanf("%f" , &a );
    scanf("%f" , &b );
    scanf("%d" , &n );

    c  = a / b;
    printf("%.*f", n ,c );
}

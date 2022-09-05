#include <stdio.h>

int main ()
{
    int a , b , holder ;
    scanf("%d \n %d" , &a , &b);

    holder = a ;
    a = b ;
    b = holder;

    printf("a = %d and b= %d", a , b );
}

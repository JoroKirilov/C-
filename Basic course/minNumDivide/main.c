#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , i , nok ;
    a = 100;
    b = 20 ;

    for( i = a ; i > 1 ; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            nok = i ;
        }
    }
    printf("%d" , nok);
}

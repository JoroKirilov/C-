#include <stdio.h>

int main ()
{
    int a , b , i , nok ;
     a = 10;
     b = 2;
    if(a > b)
        i = a;
        else
        i = b ;

    for(i  ; i > 0  ; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            nok = i ;
        }
    }

    printf("%d" , nok);
}

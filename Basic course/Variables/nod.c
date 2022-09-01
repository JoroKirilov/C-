#include <stdio.h>

int main ()
{
    int n1 , n2 , i , nod ;
    n1 = 70 ;
    n2 = 105 ;

    for (i = 1 ; i <= n1 && i <= n2 ; i ++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            nod = i ;
        }
    }

    printf("%d" , nod);
}

#include <stdio.h>

int factoriel (int a )
{
    int sum = 1 ;

    for (int i = 1 ; i <= a ; i++)
    {
        sum *= i ;
    }
    return sum  ;
}

int main()
{
    int fact1 = factoriel(6);
    int fact2 = factoriel(2);
    int result = fact1 / fact2 ;
    printf("%d" , result);

    return 0;
}

#include <stdio.h>

long int fact(int n);
int main()
{
   int number ; 
   int number1 ;
   scanf("%d" , &number);
   scanf("%d" , &number1);
   printf("%ld\n%ld" , fact(number) , fact(number1));
   

    return 0;
}

long int fact(int n )
{
    
    long int factoriel = 1 ;
    for (int i = 2 ; i <= n ; i++)
    {
        factoriel *= i ; 
    }
    return factoriel; 
    
}

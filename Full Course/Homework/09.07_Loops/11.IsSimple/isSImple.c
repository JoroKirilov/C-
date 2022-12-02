//11. Да се напише програма, която по дадено цяло положително число, проверява дали това е
//просто или не е.

#include<stdio.h>

int main()

{
    int n ;
    scanf("%d" , &n);
    int isPrime = 0  ;

    if (n <= 1 )
        isPrime = 1 ;
    if(n % 2 == 0 && n > 2 )
        isPrime = 1;
    for(int i = 3 ; i < n /2 ; i+=2)
    {
        if( n % i == 0)
            isPrime = 1 ;
    }
    if(isPrime == 0)
    {
        printf("Is prime");
    }
    else
    {
        printf("Is not prime");
    }


}

#include <stdio.h>

int main ()
{
    // a)41 elements
    int sum;
    for(int i = 1 ; i <= 41 ; i+=2)
    {
        sum+= i ;
    }
    printf("Sum of 41 odd elements = %d\n" , sum*2);

    // b) n elements

    sum = 0 ;
    int n ;
    scanf("%d" , &n);
    for(int i = 1 ; i <= n ; i+=2)
    {
        sum+= i ;
    }
    printf("Sum of  %d elements = %d\n" , n, sum*2);

    // c) last elements is 0

    sum= 0 ;
    scanf("%d" , &n);
    for(int i = n ; i >= 0 ; i--)
    {
        if(i % 2 != 0)
        {
            sum+= i ;
        }
    }
    printf("Sum of  %d elements = %d\n" , n, sum*2);

    // d) Sum > 999

    sum = 0 ;
    int elements ;
    for(int i = 1 ; sum <= 1000 ; i+=2)
    {
       sum+=i;
       elements++;
    }
    printf("Elements which sum is 1000 is : %d\n" , elements);


}

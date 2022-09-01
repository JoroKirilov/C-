#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int n;
    int sum ;
    do
    {

        printf("ENter positive number > 0 \n");
        scanf("%d" , &n);
    }
    while(n <= 0 );

    for(int i = 1 ; i <= n ; i++)
    {
        sum += i ;
    }

    printf("Sum = %d" , sum) ;
}


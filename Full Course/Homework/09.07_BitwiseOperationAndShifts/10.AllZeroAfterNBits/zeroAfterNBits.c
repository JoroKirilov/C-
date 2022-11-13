//Премахнете всички битове на число след n-тия бит
//включително.


#include<stdio.h>

int main()
{
    int number = 125 ;
    int n ;
    scanf("%d", &n);

    for(int i= n ; i <= 7 ; i++)
    {
        number = ~(1 << i) & number;
    }
    printf("%d", number);
}

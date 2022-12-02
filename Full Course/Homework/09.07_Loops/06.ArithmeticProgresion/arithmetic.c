//6. Да се изведат първите N числа на една редица (аритметична прогресия), ако са дадени
//първият член на редицата и разликата между първите два елемента. Да се напише програма.
//Числата са на вход


#include<stdio.h>

int main()
{
    int n ;
    int d , element;
    int numbers;
    printf("How many elements do u want to see ? \n");
    scanf("%d" , &n);

    printf("Element : \n");
    scanf("%d" , &element);
    printf("Difference : \n");
    scanf("%d" , &d);

    for(int i = 1 ; i <= n ; i++)
    {
       numbers = element + (i * d) ;
       printf("%d\n" , numbers);
    }
}

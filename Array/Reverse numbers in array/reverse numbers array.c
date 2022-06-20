#include <stdio.h>

int main()
{
    int counter = 0 ; 
    int number = 0 ;
    scanf("%d", &number);
    int numbers [number];
    for (int n = 0 ; n < number ; n++)
    {
        scanf("%d" , &numbers[n]);
    }
  
    while (number-1  >= 0)
    {
        printf("%d\t" , numbers[number-1]);
        number--;
    }
}


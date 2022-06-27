#include <stdio.h>

int main()
{
    int number, bound, maxNumber; 
    scanf ("%d" , &number);
    scanf ("%d" , &bound);
    for ( int i = 0 ; i <= bound ; i++)
    {
        if (i % number == 0 && number > 0)
        {
            maxNumber = i ; 
        }
    }
    printf("%d" , maxNumber);

    return 0;
}

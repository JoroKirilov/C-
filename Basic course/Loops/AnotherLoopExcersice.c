

#include <stdio.h>

int main()
{
    int number = 1 ;
    int result = 1 ;
    while (number < 21)
    {
        if(number % 2 != 0)
        {
            result *= number;
            
        }
        number++;
    }
    printf ("%d" , result) ;

    return 0;
}

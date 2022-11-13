//Намерете позицията на най-старшия бит, който е със
//стойност 1 в дадено число.

#include<stdio.h>

int main()
{
    int number = 125 ;
    int position  ;

    for(int i= 7 ; i>=0 ; i--)
    {
        if((number >> i) & 1 == 1)
        {
            position = i ;
            break;
        }
    }
    printf("%d" ,position);
}

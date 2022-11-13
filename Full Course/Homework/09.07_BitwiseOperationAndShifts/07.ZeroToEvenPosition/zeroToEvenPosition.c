//Занулете всички битове на числата, намиращи се на четна позиция.

#include<stdio.h>

int main()
{
    int number = 125 ;

    for(int i = 0 ; i < 8 ; i+=2)
    {
       number = ~(1 << i) & number ;
    }

    printf("%d" , number);
}

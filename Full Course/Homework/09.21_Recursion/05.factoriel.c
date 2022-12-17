/* Задача 5. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/


#include<stdio.h>

int factoriel(void);

int main()
{

    printf("%d\n" ,factoriel());
}


int factoriel(void)
{
    int i = 0;
    int multiply = 1 ;
    for ( i = 1; i <= 30; i++)
    {
        multiply *= i ; 
    }
    return multiply ;
}
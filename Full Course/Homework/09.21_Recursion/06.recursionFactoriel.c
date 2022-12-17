/* Задача 6. Напишете функция, която прави същото, както в задача
6, но е рекурсивна. */

#include<stdio.h>

int  factoriel(int num);

int main()
{
    
    printf("%d\n" , factoriel(6));
}


int  factoriel(int num)
{
    static int multiply = 1 ;
     
    if(num == 0 )
    return multiply;
    

    multiply *= num ;
    factoriel(num - 1); 
}
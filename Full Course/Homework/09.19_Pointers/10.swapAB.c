/* Задача 10. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */


#include<stdio.h>

void my_swap(int *a , int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() 
{
    int a = 16 ; 
    int b = 32 ;
    printf("Before swap :\na = %d\nb = %d" , a , b);

    my_swap(&a , &b);
    printf("\nAfter swap :\na = %d\nb= %d\n" , a , b);
}
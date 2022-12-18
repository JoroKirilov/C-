/* Задача 1. Дефинирайте константи PI, Е, и други с помощта на макроси.
Използвайте ги в кода. */

#include<stdio.h>
#define PI 3.14 
#define E 520
#define SIZE 80 

int main()
{
    printf("%.2f\n" , PI );
    printf("%d" , E + SIZE); 
}
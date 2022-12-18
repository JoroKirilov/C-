/* Задача 5. Заделете динамична памет за масив от елементи, като извикате
функция, която нулира заделената памет */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL ;
    ptr = (int*) calloc (5 , sizeof(int));
    
}
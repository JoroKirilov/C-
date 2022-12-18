/* Задача 6. Напишете структура с потребителски тип key_t, която съдържа
символен низ и число. Създайте променлива от новия тип, като
инициализирате символния низ с динамично заделена памет за него.
Принтирайте съдържанието на структурата. */

#include<stdio.h>
#include<stdlib.h>

typedef struct data {
    char string[20] ; 
    int number ; 
} key_t ; 

//typedef key_t* pointer ; 

int main()

{
    key_t * pointer ; 
    pointer = (key_t*) calloc (3 , sizeof(key_t)); 

}
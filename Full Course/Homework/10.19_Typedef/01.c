/* Задача 1. Дефинирайте структура като потребителски тип.Инициализирайте
членовете на структурата, използвайки новия потребителски тип. Отпечатайте.
 */

#include<stdio.h>

typedef struct myStruct {
    int num ; 
    char symbol ; 
} myStruct ; 


int main()
{
    myStruct data1 ; 
    data1.num = 5 ; 
    data1.symbol = 'A' ;
}
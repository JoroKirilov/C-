/* Задача 10. Напишете макрос, който прави идентификатор на низ
(стринг) */


#include<stdio.h>

#define StringName(A) #A 

int main()
{
    printf("%s\n" , StringName("Hello world"));
}
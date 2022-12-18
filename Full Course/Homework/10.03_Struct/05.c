/* Задача 5. Напишете произволна програма, която демонстрира уменията ви
да боравите с указатели към структури. Нека декларираната от вас
структура(и) съдържа указател към собствения си тип. */


#include<stdio.h>


struct names {
    char* firstName ;
    char* lastName ; 
} ;

void init (struct names *obj)
{
    obj->firstName = "Georgi" ;
    obj->lastName = "Kirilov" ;
}



int main()
{
 
    struct names georgi ; 
    init(&georgi) ; 
    printf("%s\n" , georgi.firstName) ; 
    printf("%s\n" , georgi.lastName);
}
/* Задача 2. Напишете макрос swap(t, x, y), койтo променя местата на двата
аргумента от тип t. */


#include<stdio.h>
#define swap(t , x , y) ((t) = (x)) ; ((x) = (y)) ; ((y) = (t)) ; \
printf("value of x = %d , value of y = %d\n" , x , y); 

int main()
{   int x = 1 ;
    int y = 6 ;
    int t = 0 ;
    swap(t , x , y);

}
/* Задача 3. Реализирайте условна компилация в зависимост от макрос DEBUG */

#include<stdio.h>
#define DEBUG
#ifdef DEBUG
#define debug printf("Some error")
#endif

int main ()
{
    debug ; 
}
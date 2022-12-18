/* Задача 4. Заделете динамично с malloc памет за char* buffer с размер size =2.
 Въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта */

#include<stdio.h>
#include<stdlib.h>

#define SIZE 2 

int main()
{
     
    char *ptr = NULL ;
    ptr = (char*) malloc (SIZE * sizeof(char));
    
}
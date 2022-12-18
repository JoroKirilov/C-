/* 
Напишете макро GENERIC_MAX(type), което трябва да се
замени със следната функция:
int int_max(int x, int y)
{
   return x > y ? x : y;
} 
*/





#include<stdio.h>

#define GENERIC_MAX(a, b) ({typeof (a) _a = (a); typeof (b) _b = (b) ;\
_a > _b ? _a : _b ; } )

int main()
{
    printf("%.2f" , GENERIC_MAX(4.5 ,1.2));
}
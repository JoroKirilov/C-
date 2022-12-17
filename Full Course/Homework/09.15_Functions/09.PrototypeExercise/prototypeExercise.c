//Напишете три функции, които да правят изчисление по ваш
//избор и да се извикват по следния начин:
// Main вика Ф1;
// Ф1 вика Ф 2;
// Ф2 вика Ф3;
//Изнесете прототипите им в отделен .h файл.
#include<stdio.h>
#include "f.h"
#define PI 3.14

int main()
{
    float a = 5 ;
    float b = 10 ;
    float result ;
    sum(a , b );


}
void sum(float a , float b)
{
    float sum = a + b ;
     multi(sum);

}
void multi(float a)
{
    float result = a * 10 ;
    sub(result);

}
void sub(float a)
{
    float result = a - 100 ;
    printf("%.2f" , result);
}


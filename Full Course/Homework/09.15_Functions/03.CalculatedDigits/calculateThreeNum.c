//Напишете функция, която връща резултат (а+в)*4


#include<stdio.h>

float calculate(float a, float b)
{
    return (a+b) * 4;
}

int main()
{
    float a = 4.5;
    float b = 5.2;
    float result ;
    result = calculate(a , b);
    printf("%.2f" , result);

}


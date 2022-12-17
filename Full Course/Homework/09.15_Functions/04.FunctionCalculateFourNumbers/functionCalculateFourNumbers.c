//Напишете функция, която връща резултат a*2 + b*c.


#include<stdio.h>

float calculate(float a , float b , float c)
{
    float result = a*2 + b*c;
    return result;
}

int main()
{
    float a = 4.5 ;
    float b = 5.1 ;
    float c = 6.4 ;

    printf("%.2f", calculate(a, b, c));

}

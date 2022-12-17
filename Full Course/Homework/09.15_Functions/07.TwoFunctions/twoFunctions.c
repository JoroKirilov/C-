//Напишете програма на С, която съдържа 2 функции.
//1.Първата смята лице на правоъгълен триъгълник.
//2.Втората използва лицето на триъгълника, за да сметне лице на
//четириъгълник със същите дължини на страните, като раменете на
//триъгълника.
//Напишете прототипите на функциите най-отгоре, а телата им под мейн
//функцията.

#include<stdio.h>

float areaTriangle(float a , float b);
float areaQuadrangle (float a );

int main ()
{
    float sideA = 4;
    float sideB = 6 ;
    printf("Area of triangle = %.2f\n" , areaTriangle(sideA , sideB));
    printf("Area of quadrangle = %.2f\n" , areaQuadrangle(areaTriangle(sideA , sideB)));
}

float areaTriangle(float a , float b)
{
    return (a * b) / 2 ;
}

float areaQuadrangle(float a)
{
    return a + a ;
}


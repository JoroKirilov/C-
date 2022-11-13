#include<stdio.h>
#define PI 3.14159

float radius(float r)
{
    return r * r * PI ;
}

float ellipse(float a , float b)
{
    return a * b * PI;
}


int main()
{

    printf("%f\n" , radius(1));
     printf("%f\n" , radius(1.5));
      printf("%f\n" , radius(13));
    printf("%f\n") , ellipse(2 , 4.5);
}

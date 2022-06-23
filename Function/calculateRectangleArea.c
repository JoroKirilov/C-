
#include <stdio.h>

float calculateRectangleArea(float a , float b )
{
   float result = a * b ; 
   return result;
}


int main()
{
    float width = 5.5 ; 
    float height = 6.5; 
    printf("%.2f" , calculateRectangleArea(width , height));
    return 0 ;
}
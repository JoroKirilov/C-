
#include <stdio.h>

float readR()
{
    float number ;
    scanf("%f" , &number);
    return number;
}

int main()
{
   float num1 ;
   num1 = readR();
   float num2 ;
   num2=readR();
   float num3;
   num3= readR();
   float result = num1 * num2 * num3;
   printf("%.2f" , result);
   
}
    
    


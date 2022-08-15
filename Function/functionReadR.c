#include <stdio.h>

float readR();
int main()
{
   
   printf("%.2f", readR()*readR()*readR());
   

    return 0;
}

float readR()
{
    float a ;
    scanf("%f" , &a);
    return a ; 
}

#include<stdio.h>

int main()
{
    int x = 13;
    int y = 44;
    int result = 0 ;
    result = x - y ;
    printf("%d - %d = %d\n" , x , y , result);
    result = y / x ;
    printf("%d / %d = %d\n" , y , x , result);
    result = y % x ;
    printf("%d / %d remainder : %d\n" , y ,x , result);
    result = x + y ;
    printf("%d + %d = %d\n" , x , y , result);
    result = x * y ;
    printf("%d * %d = %d\n" , x , y , result);

    printf("-----------------------------------\n");
    printf("Floats\n");
    float a = 5.5 ;
    float b = 7.8 ;
    float resultFloat = a + b ;
    printf("%.2f + %.2f = %.2f\n" , a , b , resultFloat);
    resultFloat = a * b ;
    printf("%.2f * %.2f = %.2f\n" , a , b , resultFloat);
    resultFloat = a / b ;
    printf("%.2f / %.2f = %.2f\n" , a , b , resultFloat);


    return 0 ;

}

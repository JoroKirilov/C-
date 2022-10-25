#include <stdio.h>

int main()
{
    float num1 = 4.9876543;
    float num2 = 7.123456789012345678890;
    long double num3 = 18398458438583853.28;
    long double num4 = 18398458438583853.39875937284928422;

    printf("%f\n" , num1);
    printf("%.20f\n" , num2);
    printf("%.2Lf\n" , num3);
    printf("%.18Lf\n" , num4);
}

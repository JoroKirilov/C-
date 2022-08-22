#include <stdio.h>
float convert(float far)
{
    return (far - 32) / 1.8 ;
}

int main()
{
    float a ,b, c ; 
    scanf("%f%f%f" , &a , &b , &c);
    float aC = convert(a);
      float bC = convert(b);
        float cC = convert(c);
    if (aC > 0) printf ("%.2f\n" , aC);
    if (bC > 0) printf ("%.2f\n" , bC);
    if (cC > 0) printf ("%.2f\n" , cC);
   
}

#include <stdio.h>

int main()
{
    int orders = 0 ;
    scanf("%d" , &orders);
    double pricePerCapsule = 0.0;
    int days = 0 ;
    int capsulesPerDay = 0;
    float result = 0; 
    float sum = 0 ; 
    for (int i = 0 ; i < orders ; i++)
    {
        scanf("%lf" , &pricePerCapsule);
          scanf("%d" , &days);
          scanf("%d" , &capsulesPerDay);
       result = (capsulesPerDay * days) * pricePerCapsule;
       sum += result ;
       printf("The price of coffee is : %.2f\n" , result);
         
    }
    
    
    printf ("Total : %.2f" , sum);

    return 0;
}

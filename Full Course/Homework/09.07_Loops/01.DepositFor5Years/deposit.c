#include<stdio.h>

int main()
{
    long double deposit ;
    float bankInterest ;
    int month = 5*12 ;
    printf("What is the amount of your deposit ? \n");
    scanf("%Lf" , &deposit);
    printf("The bank interest is __% : ");
    scanf("%f" , &bankInterest);

    for(int i = 0 ; i < month ; i++)
    {
        deposit += deposit * (bankInterest / 100);
    }
    printf("%.2Lf lv." , deposit);


}

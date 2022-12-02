#include<stdio.h>

int main()
{
    long double deposit ;
    float bankInterest ;
    int month ;
    printf("What is the amount of your deposit ? \n");
    scanf("%Lf" , &deposit);
    printf("The bank interest is __% : ");
    scanf("%f" , &bankInterest);
    printf("Term of the deposit in month : \n");
    scanf("%d" , &month);

    for(int i = 0 ; i < month ; i++)
    {
        deposit += deposit * bankInterest / 100;
    }
    printf("%.2Lf lv." , deposit);


}

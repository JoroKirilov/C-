#include<stdio.h>

int main()
{
    long double deposit , wantMoney ;
    float bankInterest ;
    int month ;
    printf("What is the amount of your deposit ? \n");
    scanf("%Lf" , &deposit);
    printf("The bank interest is __% : ");
    scanf("%f" , &bankInterest);
    printf("Term of the deposit in month : \n");
    scanf("%d" , &month);
    printf("Target amount of money ? :\n");
    scanf("%Lf" , &wantMoney);

    for(int i = 0 ; i < month ; i++)
    {
        deposit += deposit * bankInterest / 100;

        if(deposit > wantMoney)
        {
            break;
        }
    }
    printf("%.2Lf lv." , deposit);


}

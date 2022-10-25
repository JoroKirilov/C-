#include <stdio.h>

int caravans();
int campers();


int main()
{

    int  choose , bill;
    int priceForCaravans = 0;
    int priceForCampers = 0 ;

    printf("\nChoose between caravan or camper\n");
    printf("1---Caravans\n");
    printf("2---Campers\n");

    scanf("%d", &choose);
    if(choose == 1)
    {
        priceForCaravans = caravans();
    }
    if(choose == 2)
    {
        priceForCampers = campers();
    }


    bill = priceForCaravans + priceForCampers;

    printf("Your bill is : %d" , bill);

}

int caravans()
{
    int number , days ;
    while(1)
    {
    printf("Choose how many caravans do you want to rent:\n");
    scanf("%d" , &number);
    if(number <= 3) break;
    }
    printf("How many days do you want to stay:\n");
    scanf("%d", &days);
    return (number * days) * 90;

}

int campers()
{
    int number , days ;
    while(1)
    {
    printf("Choose how many campers do you want to rent from 1 to 3:\n");
    scanf("%d" , &number);
    if(number <= 3) break;
    }
    printf("How many days do you want to stay:\n");
    scanf("%d", &days);
    return (number * days) * 100;


}

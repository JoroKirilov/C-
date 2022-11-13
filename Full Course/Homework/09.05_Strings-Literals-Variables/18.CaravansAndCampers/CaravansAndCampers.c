

#include <stdio.h>

int caravans();
int campers();
int count = 0 ;


int main()
{

    int  choose = 0 ;
    int bill = 0 ;
    int priceForCaravans = 0;
    int priceForCampers = 0 ;

    do
    {
    priceForCaravans = 0;
    priceForCampers = 0 ;
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


    bill += priceForCaravans + priceForCampers;

    printf("Your bill is : %d\n" , bill);
    printf("Do you want something else ?\n");
    printf("1--Yes\n");
    printf("0--No\n");
    scanf("%d" , &choose);
    if(choose == 0)
    {
        printf("Total %d lv.\n" ,bill);
        printf("Have a nice day .");
    }
    } while (choose != 0) ;

}

int caravans()
{
    int number ;
    printf("Choose how many caravans do you want to rent:\n");
    scanf("%d" , &number);

    return number * 90;

}

int campers()
{
    int number  ;

    printf("Choose how many campers do you want to rent:\n");
    scanf("%d" , &number);
    return number* 100;


}

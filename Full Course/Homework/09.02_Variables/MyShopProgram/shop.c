#include <stdio.h>

float tomatoes() ,flour(), yogurt(), iceCream(), candy(), lollipop();


int main()
{
    int choice ;
    float price = 0 ;

    do
    {
    printf("Welcome\nChoose product:\n");
    printf("1--Tomatoes\n");
    printf("2--Flour\n");
    printf("3--Yogurt\n");
    printf("4--Ice cream\n");
    printf("5--Candy\n");
    printf("6--Lollipop\n");
    printf("7--End of shoping\n");
    scanf("%d" , &choice);

    switch(choice)
    {
        case 1: price += tomatoes(); break;
        case 2: price += flour(); break;
        case 3: price += yogurt(); break;
        case 4: price += iceCream(); break;
        case 5: price += candy(); break;
        case 6: price += lollipop(); break;
    }

    }
    while (choice != 7);


    printf("Your bill is : %.2f lv." , price);
}

float tomatoes()
{
    float quantity ;
    printf("Enter how many kilos you want(1 kilos = 4.5 lv):\n");
    scanf("%f" , &quantity);
    return (quantity * 4.5);
}
float flour()
{
    float quantity ;
    printf("Enter how many kilos you want(1 kilo = 1.8 lv):\n");
    scanf("%f" , &quantity);
    return (quantity * 1.8) ;
}
float yogurt()
{
    float quantity ;
    printf("Enter how many pieces you want(1 piece = 0.5 lv):\n");
    scanf("%f" , &quantity);
    return (quantity * 0.5) ;
}
float iceCream()
{
    float quantity ;
    printf("Enter how many pieces you want(1 piece = 0.6 lv):\n");
    scanf("%f" , &quantity);
    return (quantity * 0.6) ;
}
float candy()
{
    float quantity ;
    printf("Enter how many kilos you want(1 kilo = 1.5 lv):\n");
    scanf("%f" , &quantity);
    return (quantity * 1.5) ;
}
float lollipop()
{
    float quantity ;
    printf("Enter how many pieces you want(1 piece = 0.15 lv):\n");
    scanf("%f" , &quantity);
    return (quantity * 0.15) ;
}

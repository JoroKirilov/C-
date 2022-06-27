#include <stdio.h>

int main()
{
    float budget = 0; 
    scanf("%f", &budget);
    float flourPrice = 0 ;
    scanf("%f" , &flourPrice);
    float eggsPack = flourPrice * 0.75 ; 
    float milkPrice = (flourPrice * 0.25 ) + flourPrice;
    float priceForBread = flourPrice + eggsPack + milkPrice / 4;
    int count = 0 ;
    int coloredEggs = 0 ; 
    while (budget >= priceForBread )
    {
       count ++ ; 
       budget -= priceForBread;
       coloredEggs += 3 ;
       if (count % 3 == 0)
       {
           coloredEggs -= (count - 2) ; 
       }
    }
    printf ("You made %d loaves of Easter bread!Now you have %d eggs and %.2f BGN left." , count , coloredEggs , budget);

    return 0;
}

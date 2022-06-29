#include <stdio.h>


int main()
{
    int numberOfPeople, daysAdventure;
    int coins = 0;
    int r = 1;
    scanf("%d %d", &numberOfPeople, &daysAdventure);
    int coinsPerDay = 50 - (2 * numberOfPeople);
    for (r = 1; r <= daysAdventure; ++r)
    {
        if (r % 10 == 0)
        {
            numberOfPeople -= 2;
        }
        if (r % 15 == 0)
        {
            numberOfPeople += 5;
        }
        coins += coinsPerDay;
        if (r % 3 == 0)
        {
            coins -= (3 * numberOfPeople);
        }
        if (r % 5 == 0)
        {
            coins += (20 * numberOfPeople);
        }
        if (r % 5 == 0 && r % 3 == 0)
        {
            coins -= (2 * numberOfPeople);
        }


    }
    int leftCoins = 0;
    leftCoins = coins / numberOfPeople;
    printf("%d companions received %d coins each.", numberOfPeople, leftCoins);



    return 0;
}

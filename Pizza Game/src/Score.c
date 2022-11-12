#include "../include/Score.h"
#include<stdio.h>

void scoreCalculation( uint16_t customerOutside ,int16_t *score )
{
    if (customerOutside == 0 )
    {
        *score += 10;
    }
    else if(customerOutside > 0 && customerOutside <= 15)
    {
        for (uint16_t i = 0; i < customerOutside; i++)
        {
            *score -= 5 ; 
        }
    }
    else
    {
        *score -= 10; 
    }
}


GameResult checkGameResult ( int16_t score)
{
    if (score <= 0 )
    {
        return LOSE ;
    }
    else if(score > 240)
    {
        return GOOD_GAME ; 
    }
    
}
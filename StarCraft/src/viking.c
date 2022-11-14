#include "viking.h"
#include "fleet.h"
#include <stdbool.h>

bool vikingAttack (terranShip *attackingShip , protossShip *attackedShip)
{
    if (attackedShip->typeShip == PHOENIX)
    {
        vikingAttackPhoenix(attackingShip , attackedShip); 
    }
    
}

bool vikingAttackPhoenix(terranShip *viking , protossShip *phoenix)
{
    if (phoenix->shield > 0)
    {
        phoenix->shield -= viking->damage * 2;

        if (phoenix->shield < 0)
        {
            phoenix->health += phoenix->shield ; 
        } 
    }
    else
    {
        phoenix->health -= viking->damage * 2;
    }
    if (phoenix->health <= 0)
    {
        return DESTROYED ;
    }

    return ALIVE ;  
}

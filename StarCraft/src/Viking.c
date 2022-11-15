#include "Viking.h"



bool vikingAttack (terranShip *attackingShip , protossShip *attackedShip)
{
    bool statusOfAttackedShip = ALIVE ; 
    if (attackedShip->typeShip == PHOENIX)
    {
       statusOfAttackedShip = vikingAttackPhoenix(attackingShip , attackedShip); 
    }
    else
    {
       statusOfAttackedShip = vikingAttackCarrier(attackingShip , attackedShip); 
    }
    return statusOfAttackedShip ;   
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


bool vikingAttackCarrier(terranShip *viking , protossShip *carrier)
{
    if (carrier->shield > 0)
    {
        carrier->shield -= viking->damage;

        if (carrier->shield < 0)
        {
            carrier->health += carrier->shield ; 
        } 
    }
    else
    {
        carrier->health -= viking->damage;
    }
    if (carrier->health <= 0)
    {
        return DESTROYED ;
    }

    return ALIVE ;  
}
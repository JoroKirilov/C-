#include "ProtossShip.h"
#include "Ship.h"
#include "Defines.h"
#include <stdlib.h>



Error initProtossShip(ProtossShip *self, int16_t typeShip, int16_t health, int16_t damage, int16_t shield)
{
    Error err = NO_ERROR;
    if(self == NULL)
    {
        self = (ProtossShip *) calloc(1, sizeof(ProtossShip));
        if(self == NULL)
        {
            err = checkForError(self, ALLOCATION_ERROR , CURRENT_FUNC_NAME);
            return err;
        }
    }
    err =  initShip(&self->ship, typeShip, health, damage);
    self->shield = shield;

    return err;
}


/*
int16_t getHealth(ProtossShip *self)
{
    return self->health;
}

void setHealth (ProtossShip *self , int16_t health)
{
    self->health = health;
}

void setDamage (ProtossShip *self , int16_t damage)
{
    self->damage = damage;
}
void setShield (ProtossShip *self , int16_t shield)
{
    self->shield = shield;
}
*/

#include "ProtossShip.h"
#include "Ship.h"
#include "Defines.h"
#include "Utilities.h"

#include <stdlib.h>


Error initProtossShip(ProtossShip *self,
                        const int16_t shipID,
                        const int16_t typeShip,
                        const int16_t health,
                        const int16_t damage,
                        const int16_t shield,
                        const int16_t regenShieldRate)
{
    Error err = NO_ERROR;
    
    err = initShip(&self->ship, shipID, typeShip, health, damage);
    self->shield = shield;
    self->maxShield = shield;
    self->regenShieldRate = regenShieldRate;

    return err;
}

void setShield (ProtossShip *const self , const int16_t shield)
{
    self->shield = shield;
}

int16_t getShield(const ProtossShip *const protossShip)
{
    return protossShip->shield;
}

void regenerateShield(ProtossShip *const protossShip)
{
    if (protossShip->shield < protossShip->maxShield)
    {
        protossShip->shield += protossShip->regenShieldRate;
    }
    
    if (protossShip->shield > protossShip->maxShield)
    {
        protossShip->shield = protossShip->maxShield;
    }
}

bool enemyGetsDamaged(ProtossShip *const protossShip, int16_t damage)
{
    bool isAlive = ALIVE;

    enemyUseShieldAgainstDamage(protossShip, &damage);
    Ship *protossShipDeref = (Ship*)protossShip;
    isAlive = enemyUseHealthAgainstDamage(protossShipDeref, damage);

    return isAlive;
}

void enemyUseShieldAgainstDamage(ProtossShip *const protossShip, int16_t *const damage)
{
    if (protossShip->shield > 0)
    {
        protossShip->shield -= *damage;
    }
    else
    {
        return;
    }
    if (protossShip->shield < 0)
    {
        *damage = protossShip->shield * (-1);
    }
    else
    {
        *damage = 0;
    }
    
    makeZeroIfNegative(&protossShip->shield);
}
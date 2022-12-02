#include "Ship.h"
#include "Defines.h"
#include "Utilities.h"
#include <stdint.h>
#include <stdlib.h>
#include <ErrorHandler.h>


Error initShip(Ship *self, const int16_t shipID, const int16_t typeShip, const int16_t health , const int16_t damage)
{
    Error err = NO_ERROR;
    
    self->shipID = shipID;
    self->typeShip = typeShip;
    self->health = health;
    self->damage = damage;
    

    return  err;
}

void setHealth(Ship *const ship, const int16_t health)
{
    ship->health = health;
}

void setDamage(Ship *const ship, const int16_t damage)
{
    ship->damage = damage;
}

int16_t getTypeShip(const Ship *const ship)
{
    return ship->typeShip;
}

int16_t getHealth(const Ship *const ship)
{
    return ship->health;
}

int16_t getDamage(const Ship *const ship)
{
    return ship->damage;
}

bool enemyUseHealthAgainstDamage(Ship *const ship, const int16_t damage)
{
    bool isAlive = ALIVE;
    ship->health -= damage;
    makeZeroIfNegative(&ship->health);

    if (ship->health == 0)
    {
        isAlive = DESTROYED;
    }

    return isAlive;
}
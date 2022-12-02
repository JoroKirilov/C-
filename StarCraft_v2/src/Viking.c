#include <stddef.h>
#include <stdlib.h>
#include "Viking.h"
#include "Defines.h"
#include <stdint.h>


Error initViking(Viking **self, const int16_t shipID)
{
    Error err = NO_ERROR;
    if(*self == NULL)
    {
        *self = (Viking*) calloc (1, sizeof(Viking));
        if (*self == NULL)
        {
            err = ALLOCATION_ERROR;
            printError(ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
        }
    }
    initTerranShip(&(*self)->terranShip, shipID, VIKING, VIKING_HEALTH, VIKING_DAMAGE);

    return err;
}

void vikingAttacks(Viking *const attackingShip, ProtossShip *const attackedShip)
{

    int16_t damageToAttack;

    switch (getTypeShip((Ship*)attackedShip))
    {
    case PHOENIX:   damageToAttack = getDamage((Ship*)attackingShip) * 2;
                    break;
    default:        damageToAttack = getDamage((Ship*)attackingShip);
                    break;
    }

    enemyGetsDamaged(attackedShip, damageToAttack);
}
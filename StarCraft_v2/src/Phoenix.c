//#include <stddef.h>
#include <stdlib.h>
#include <TerranShip.h>
#include <z3.h>

#include "Phoenix.h"
#include "ProtossShip.h"
#include "Defines.h"
#include "Ship.h"


Error initPhoenix(Phoenix **self, const int16_t shipID)
{

    Error err = NO_ERROR;
    if(*self == NULL)
    {
        *self = (Phoenix *) calloc(1, sizeof(Phoenix));
        if(*self == NULL)
        {
            err = ALLOCATION_ERROR;
            printError(ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
        }
    }
    initProtossShip(&(*self)->protossShip, shipID, PHOENIX, PHOENIX_HEALTH, PHOENIX_DAMAGE, PHOENIX_SHIELD, PHOENIX_SHIELD_REGENERATE_RATE);

    return err;
}

void phoenixAttacks(Phoenix *const phoenix, Ship *const attackedShip)
{
    int16_t phoenixAttackingDamage = getDamage((Ship*)phoenix);
    enemyUseHealthAgainstDamage((Ship*)attackedShip, phoenixAttackingDamage);

    regenerateShield((ProtossShip*)phoenix);
}


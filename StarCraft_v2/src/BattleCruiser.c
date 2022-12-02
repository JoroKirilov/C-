#include <stddef.h>
#include <stdlib.h>

#include "BattleCruiser.h"
#include "Defines.h"

Error initBattleCruiser(BattleCruiser **self, const int16_t shipID)
{
   Error err = NO_ERROR;
   if(*self == NULL)
   {
       *self = (BattleCruiser*)calloc(1, sizeof(BattleCruiser)); // self = 0xac341
       if(*self == NULL)
       {
            err = ALLOCATION_ERROR;
            printError(ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
       }
   }
   initTerranShip(&(*self)->terranShip, shipID, BATTLE_CRUISER, BATTLE_CRUSER_HEALTH, BATTLE_CRUSER_DAMAGE);

    (*self)->yamatoDamage = getDamage((Ship *)(*self)) * 5;
    (*self)->yamatoLoading = 0;
    (*self)->yamatoCannonLoadingTurns = YAMATO_CANNON_LOADING_TURNS;

    return err;
}




void battleCruiserAttacks(BattleCruiser *const attackingShip, ProtossShip *const attackedShip)
{
    int16_t attackingDamage = 0;

    if(yamatoIsReady(attackingShip))
    {
        attackingDamage = getYamatoDamage(attackingShip);
    }
    else
    {
        attackingDamage = getDamage((Ship*)attackingShip);
    }
    enemyUseShieldAgainstDamage(attackedShip, &attackingDamage);
    enemyUseHealthAgainstDamage((Ship*)attackedShip, attackingDamage);

    regulateYamatoLoading(attackingShip);
}

bool yamatoIsReady(const BattleCruiser *const self)
{
    if(self->yamatoLoading == YAMATO_CANNON_LOADING_TURNS)
    {
        return READY;
    }
    return NOT_READY;
}

void regulateYamatoLoading(BattleCruiser *const battleCruiser)
{
    if (battleCruiser->yamatoLoading == YAMATO_CANNON_LOADING_TURNS)
    {
        battleCruiser->yamatoLoading = 0;
    }
    else
    {
        battleCruiser->yamatoLoading ++;
    }
}

int16_t getYamatoDamage(const BattleCruiser *const battleCruiser)
{
    return battleCruiser->yamatoDamage ;
}
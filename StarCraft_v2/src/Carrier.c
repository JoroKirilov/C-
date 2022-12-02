#include "TerranShip.h"
#include "ProtossShip.h"
#include "Carrier.h"
#include "Defines.h"
#include "Ship.h"
#include "Attacks.h"
#include "Print.h"

#include <stdlib.h>
#include <stdint.h>

Error initCarrier(Carrier **self, const int16_t shipID)
{
    Error err = NO_ERROR;
    if(*self == NULL)
    {
        *self = (Carrier *)calloc(1, sizeof(Carrier));
        if(*self == NULL)
        {
            err = ALLOCATION_ERROR;
            printError(ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
        }
    }
    initProtossShip(&(*self)->protossShip, shipID, CARRIER, CARRIER_HEALTH, CARRIER_DAMAGE, CARRIER_SHIELD, CARRIER_SHIELD_REGENERATE_RATE);
    (*self)->maxHealth = CARRIER_HEALTH;
    (*self)->interceptors = MAX_INTERCEPTORS;

    return err;
}

void carrierAttacks(Carrier *const carrier, Ship **attackedShip, Vector *const terranFleet)
{
    setInterseptors(carrier);

    uint8_t availableInterceptors = carrier->interceptors;

    for (; availableInterceptors > 0 ; availableInterceptors--)
    {
        int16_t carrierDamage = getDamage((Ship*)carrier);
        Ship *attackedShipDeref = (Ship*)(*attackedShip);
        enemyUseHealthAgainstDamage(attackedShipDeref, carrierDamage);
        //(*attackedShip)->health -= getDamage((Ship*)carrier);
        if(resultOfAttack(*attackedShip) == DESTROYED)
        {
            if (vectorGetSize(terranFleet) == 1) // if this was last enemyShip
            {
                return;
            }
            printReportForDestroyedShip((Ship*)carrier, ((Ship*)carrier)->shipID, terranFleet);
            vectorPop(terranFleet);
            *attackedShip = vectorBack(terranFleet);
        }
    }

    regenerateShield((ProtossShip*)carrier);
}

void setInterseptors(Carrier *const carrier)
{
    if (getHealth((Ship*)carrier) < carrier->maxHealth)
    {
        carrier->interceptors = DAMAGED_STATUS_INTERCEPTORS;
    }
}


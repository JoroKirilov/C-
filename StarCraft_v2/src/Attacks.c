#include "Ship.h"
#include "Attacks.h"
#include "Defines.h"
#include "Viking.h"
#include "BattleCruiser.h"
#include "Phoenix.h"
#include "Carrier.h"


bool terranAttacksProtoss(TerranShip *attackingShip, ProtossShip *attackedShip) // M: do we need here enemies fleet?
{
    bool isAttackedShipAlive = ALIVE ;

    switch (getTypeShip((Ship *)attackingShip))
    {
        case VIKING:            vikingAttacks((Viking*)attackingShip, attackedShip);
                                break;
        case BATTLE_CRUISER:    battleCruiserAttacks((BattleCruiser*)attackingShip, attackedShip);
                                break;
    }

    isAttackedShipAlive = resultOfAttack((Ship*)attackedShip);

    return isAttackedShipAlive;
}

bool protossAttacksTerran(ProtossShip *attackingShip, Ship **attackedShip, Vector *terranFleet)
{
    bool isAttackedShipAlive = ALIVE ;

    switch (getTypeShip((Ship *)attackingShip))
    {
        case PHOENIX:           phoenixAttacks((Phoenix*)attackingShip, *attackedShip);
                                break;
        case CARRIER:           carrierAttacks((Carrier*)attackingShip, attackedShip, terranFleet);
                                break;
    }

    isAttackedShipAlive = resultOfAttack(*attackedShip);

    return  isAttackedShipAlive;
}


bool resultOfAttack(Ship * attackedShip)
{
    if (attackedShip->health == 0)
    {
        return DESTROYED;
    }
    return ALIVE;
}
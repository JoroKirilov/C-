#ifndef ATTACKS_H_
#define ATTACKS_H_

#include "ProtossShip.h"
#include "TerranShip.h"
#include "Vector.h"

/**
 * Generate terran attacks
 * @param TerranShip pointer to struct of terran ship.
 * @param AttackedShip pointer to struct of protoss ship.
 * @return bool Alive or Destroyed.
 */
bool terranAttacksProtoss(TerranShip *attackingShip, ProtossShip *attackedShip);


/**
 * Generate protoss attacks
 * @param ProtossShip pointer to struct of terran ship.
 * @param Ship pointer to struct of ship.
 * @param Vector pointer to vector terranFleet
 * @return bool Alive or Destroyed.
 */
bool protossAttacksTerran(ProtossShip *attackingShip, Ship **attackedShip, Vector *terranFleet);


/**
 * Check is attacked ship is destroyed
 * @param Ship pointer to struct of ship.
 * @return bool Alive or Destroyed.
 */
bool resultOfAttack(Ship *attackedShip);


#endif // ATTACKS_H_
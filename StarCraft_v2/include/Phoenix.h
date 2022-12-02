#ifndef STARCRAFT_PHOENIX_H
#define STARCRAFT_PHOENIX_H

#include "ProtossShip.h"

typedef struct phoenix {
    ProtossShip protossShip;
} Phoenix;


/**
 * Initialize a new ship of type Phoenix.
 * @return Error type of error or NO_ERROR
 */
Error initPhoenix(Phoenix **phoenix, const int16_t shipID);


/**
 * Generate Phoenix attack
 * @param Phoenix pointer to struct of Battle cruiser ship.
 * @param AttackedShip pointer to struct of Ship.
 */
void phoenixAttacks(Phoenix *const phoenix, Ship *const attackedShip);

#endif //STARCRAFT_PHOENIX_H

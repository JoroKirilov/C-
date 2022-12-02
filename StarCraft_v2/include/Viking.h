#ifndef STARCRAFT_VIKING_H
#define STARCRAFT_VIKING_H

#include "ErrorHandler.h"
#include "TerranShip.h"
#include "ProtossShip.h"



typedef struct viking{
    TerranShip terranShip;
} Viking;


/**
 * Initialize a new ship of type Viking.
 * @return Error type of error or NO_ERROR
 */
Error initViking(Viking **self, const int16_t shipID);


/**
 * Generate Viking attack
 * @param Viking pointer to struct of Viking ship.
 * @param AttackedShip pointer to struct of protossShip ship.
 */
void vikingAttacks(Viking *const attackingShip, ProtossShip *const attackedShip);

#endif //STARCRAFT_VIKING_H

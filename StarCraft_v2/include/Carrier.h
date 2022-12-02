#ifndef STARCRAFT_CARRIER_H
#define STARCRAFT_CARRIER_H

#include <stdint.h>
#include "ProtossShip.h"
#include "Vector.h"

typedef struct carrier{
    ProtossShip protossShip;
    int16_t maxHealth;
    uint16_t interceptors ;
} Carrier;


/**
 * Initialize a new ship of type Carrier.
 * @return Error type of error or NO_ERROR
 */
Error initCarrier(Carrier **self, const int16_t shipID);


/**
 * Generate Carrier attack
 * @param Carrier pointer to struct of Carrier ship.
 * @param AttackedShip pointer to struct of Ship.
 * @param Vector pointer to vector
 * @return bool Alive or Destroyed.
 */
void carrierAttacks(Carrier *const carrier, Ship **attackedShip, Vector *const terranFleet);

/**
 * Set numbers of interceptors available
 * @param Carrier pointer to struct of Battle cruiser ship.
 */
void setInterseptors(Carrier *const carrier);

#endif //STARCRAFT_CARRIER_H

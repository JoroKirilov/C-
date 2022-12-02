#ifndef STARCRAFT_TERRANSHIP_H
#define STARCRAFT_TERRANSHIP_H

#include <stdint.h>
#include "Ship.h"
#include "ProtossShip.h"

typedef struct terranShip TerranShip;


struct terranShip {
    Ship ship;
};

/**
 * Initialize a new ship of terran type .
 * @param self pointer to TerranShip
 * @param shipID
 * @param typeShip
 * @param health
 * @param damage
 * @return Error type of error or NO_ERROR
 */
Error initTerranShip(TerranShip *self, const int16_t shipID, const int16_t typeShip, const int16_t health, const int16_t damage);

#endif //STARCRAFT_TERRANSHIP_H

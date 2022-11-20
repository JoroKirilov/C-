#ifndef STARCRAFT_TERRANSHIP_H
#define STARCRAFT_TERRANSHIP_H

#include <stdint.h>
#include "Ship.h"

typedef struct terranShip {
    Ship ship ;

} TerranShip;

Error initTerranShip(TerranShip *self, int16_t typeShip, int16_t health, int16_t damage);

#endif //STARCRAFT_TERRANSHIP_H

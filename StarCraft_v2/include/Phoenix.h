#ifndef STARCRAFT_PHOENIX_H
#define STARCRAFT_PHOENIX_H

#include "ProtossShip.h"

typedef struct phoenix {
    ProtossShip protossShip;
} Phoenix;

Error initPhoenix(Phoenix *phoenix);

#endif //STARCRAFT_PHOENIX_H

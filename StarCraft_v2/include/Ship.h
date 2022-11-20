#ifndef STARCRAFT_SHIP_H
#define STARCRAFT_SHIP_H

#include <stdint.h>
#include "ErrorHandler.h"

typedef struct ship{
    int16_t typeShip;
    int16_t health;
    int16_t damage;
}Ship;

Error initShip(Ship *self, int16_t typeShip, int16_t health , int16_t damage);

#endif //STARCRAFT_SHIP_H

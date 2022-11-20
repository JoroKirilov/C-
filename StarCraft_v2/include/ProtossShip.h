#ifndef STARCRAFT_PROTOSSSHIP_H
#define STARCRAFT_PROTOSSSHIP_H

#include <stdint.h>
#include "Ship.h"
#include "ErrorHandler.h"

typedef struct protossShip {
    Ship ship ;
    int16_t shield;
} ProtossShip;

Error initProtossShip(ProtossShip *self, int16_t typeShip, int16_t health, int16_t damage, int16_t shield);


int16_t getHealth(ProtossShip *self);

void setHealth (ProtossShip *self , int16_t health);

void setShield (ProtossShip *self , int16_t shield);

void setDamage (ProtossShip *self , int16_t damage);

#endif //STARCRAFT_PROTOSSSHIP_H

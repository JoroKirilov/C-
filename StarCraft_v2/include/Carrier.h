#ifndef STARCRAFT_CARRIER_H
#define STARCRAFT_CARRIER_H

#include <stdint.h>

typedef struct carrier{
    ProtossShip protossShip;
    uint16_t interceptors ;
} Carrier;

Error initCarrier(Carrier *self);

#endif //STARCRAFT_CARRIER_H

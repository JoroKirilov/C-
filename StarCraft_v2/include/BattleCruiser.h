#ifndef STARCRAFT_BATTLE_CRUISER_H
#define STARCRAFT_BATTLE_CRUISER_H

#include "ProtossShip.h"
#include "TerranShip.h"

typedef struct battleCruiser {
    TerranShip terranShip;
} BattleCruiser;

Error initBattleCruiser(BattleCruiser **self);

#endif //STARCRAFT_BATTLE_CRUISER_H

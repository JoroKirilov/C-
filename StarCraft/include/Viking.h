#ifndef VIKING_H_
#define VIKING_H_

#include <stdbool.h>
#include "Fleet.h"

bool vikingAttack (terranShip *attackingShip , protossShip *attackedShip);

bool vikingAttackPhoenix(terranShip *viking , protossShip *phoenix);

bool vikingAttackCarrier(terranShip *viking , protossShip *carrier);



#endif // VIKING_H_
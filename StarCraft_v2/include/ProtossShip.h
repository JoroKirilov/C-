#ifndef STARCRAFT_PROTOSSSHIP_H
#define STARCRAFT_PROTOSSSHIP_H

#include <stdint.h>
#include "Ship.h"
#include "ErrorHandler.h"

typedef struct protossShip {
    Ship ship;
    int16_t shield;
    int16_t maxShield;
    int16_t regenShieldRate;
} ProtossShip;


/**
 * Initialize a new ship of terran type .
 * @param self pointer to ProtossShip
 * @param shipID
 * @param typeShip
 * @param health
 * @param damage
 * @param shield
 * @param regenShieldRate
 * @return Error type of error or NO_ERROR
 */
Error initProtossShip(ProtossShip *self,
                        const int16_t shipID,
                        const int16_t typeShip,
                        const int16_t health,
                        const int16_t damage,
                        const int16_t shield,
                        const int16_t regenShieldRate);


/**
 * Set value of shield
 * @param self pointer to protossShip
 * @param int16_t value of shield
 */
void setShield (ProtossShip *const self , const int16_t shield);


/**
 * Get value of shield
 * @param self pointer to protossShip
 * @return int16_t value of shield
 */
int16_t getShield(const ProtossShip *const protossShip);


bool enemyGetsDamaged(ProtossShip *const protossShip, int16_t damage);

void regenerateShield(ProtossShip *const protossShip);


/**
 * Enemy defend wiht their shileds
 * @param ProtossShip pointer to struct of protoss ship.
 * @param int16_t value of damage of attacking ship.
 */
void enemyUseShieldAgainstDamage(ProtossShip *const protossShip, int16_t *const damage);

#endif //STARCRAFT_PROTOSSSHIP_H

#ifndef STARCRAFT_SHIP_H
#define STARCRAFT_SHIP_H

#include <stdint.h>
#include <stdbool.h>
#include "ErrorHandler.h"


typedef struct ship{
    int16_t shipID;
    int16_t typeShip;
    int16_t health;
    int16_t damage;
}Ship;


/**
 * Initialize a new ship of base type .
 * @param shipID
 * @param typeShip
 * @param health
 * @param damage
 * @return Error type of error or NO_ERROR
 */
Error initShip(Ship *self, const int16_t shipID, const int16_t typeShip, const int16_t health , const int16_t damage);


/**
 * Set health of base ship
 * @param Ship pointer to struct of base type.
 * @param int16_t health value
 */
void setHealth(Ship *const ship, const int16_t health);


/**
 * Set damage of base ship
 * @param Ship pointer to struct of base type.
 * @param int16_t damage value
 */
void setDamage(Ship *const ship, const int16_t damage);


/**
 * Get type of ship
 * @param Ship pointer to struct of base type.
 * @return int16_t type ship
 */
int16_t getTypeShip(const Ship *const ship);


/**
 * Get health of base ship
 * @param Ship pointer to struct of base type.
 * @return int16_t health value
 */
int16_t getHealth(const Ship *const ship);


/**
 * Get damage of base ship
 * @param Ship pointer to struct of base type.
 * @return int16_t damage value
 */
int16_t getDamage(const Ship *const ship);


/**
 * Enemy take damage
 * @param Ship pointer to struct of base type.
 * @return bool is taken damage is fatal
 */
bool enemyUseHealthAgainstDamage(Ship *const ship, const int16_t damage);

#endif //STARCRAFT_SHIP_H

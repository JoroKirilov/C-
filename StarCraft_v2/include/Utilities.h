#ifndef UTILITIES_H_
#define UTILITIES_H_

#include <stdbool.h>
#include <stdint.h>


/**
 * Get user input
 * @param TerranFleet pointer to char
 * @param ProtossFleet pointer to char
 */
void getProgramInput(char *const terranFleet, char * protossFleet);


/**
 * Check is terrans fleet input is valid.
 * @param TerranFleetInput pointer to char contains terranFleet input.
 * @return bool TRUE OR FALSE.
 */
bool validTerranFLeetInput(const char *terranFleet);


/**
 * Check is protoss fleet input is valid.
 * @param TerranFleetInput pointer to char contains terranFleet input.
 * @return bool TRUE OR FALSE.
 */
bool validProtossFleetInput(const char * protossFleet);


/**
 * Set value to zero if value is negative
 * @param pointer to int16_t
 */
void makeZeroIfNegative(int16_t *const member);


#endif /*UTILITIES_H*/ 
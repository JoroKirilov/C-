#ifndef PROTOSS_TURN_H_
#define PROTOSS_TURN_H_

#include <stdbool.h>
#include "BattleField.h"
#include "ErrorHandler.h"


/**
 * Traces the attack of every protoss ship.
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param Error pointer to Error
 * @return bool Enemy fleet is ALIVE OR DESTROYED.
 */
bool processProtossTurn(BattleField *const battleField, Error *const err);

#endif /* PROTOSS_TURN_H_ */
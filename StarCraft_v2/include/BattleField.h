#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include <stdbool.h>
#include "ErrorHandler.h"
#include "Vector.h"

typedef struct {
  Vector terranFleet;
  Vector protossFleet;
  //Vector terranFleetTypes;
  //Vector protossFleetTypes;
} BattleField;


/**
 * Generate fleet of terran ships
 * @param BattleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param terranInput strings with fleet data.
 * @return Error type of error or NO_ERROR
 */
Error generateTerranFleet(BattleField *const battleField, const char *terranFleetStr);


/**
 * Generate fleet of protoss ships
 * @param BattleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param protossInput strings with fleet data.
 * @return Error type of error or NO_ERROR
 */
Error generateProtossFleet(BattleField *battleField, const char *protossFleetStr);


/**
 * Check result of battle
 * @param BattleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @return Error type of error or NO_ERROR
 */
Error startBattle(BattleField *const battleField);


/**
 * Free memory for battlefield and fleets
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 */
void deinit(BattleField *battleField);


#endif /* BATTLEFIELD_H_ */

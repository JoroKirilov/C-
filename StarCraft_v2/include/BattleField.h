#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include <stdbool.h>
#include "ErrorHandler.h"
#include "Vector.h"

typedef struct {
  Vector terranFleet;
  Vector terranFleetTypes;
  Vector protossFleet;
  Vector protossFleetTypes;
} BattleField;

Error generateTerranFleet(BattleField *battleField, const char *terranFleetStr);
Error generateProtossFleet(BattleField *battleField, const char *protossFleetStr);

Error startBattle(BattleField *battleField);

void deinit(BattleField *battleField);

bool processProtossTurn(BattleField *battleField , Error *err);
bool processTerranTurn(BattleField *battleField, Error *err);

void printVikingShip(BattleField *battleField, size_t idxOfAttackingShip);
void printBattleCruiserShip(BattleField *battleField, size_t idxOfAttackingShip);

#endif /* BATTLEFIELD_H_ */

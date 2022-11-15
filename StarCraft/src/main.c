#include <stdio.h>
#include <stdlib.h>

#include "BattleField.h"
#include "Utilities.h"

#define BUFFSIZE 50

int main() {
  
  char terranFleet[BUFFSIZE];
  char protossFleet[BUFFSIZE];
  
  getProgramInput(terranFleet , protossFleet);
  
  
  BattleField battleField;
  generateTerranFleet(&battleField, terranFleet);
  generateProtossFleet(&battleField, protossFleet);
  startBattle(&battleField);
  deinit(&battleField);

  return EXIT_SUCCESS;
}

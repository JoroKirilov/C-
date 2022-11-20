#include <stdlib.h>
#include "BattleField.h"
#include "Utilities.h"
#include <stdint.h>
#include "ErrorHandler.h"

int main() {
  const uint16_t buffSize = 50;
  char terranFleet[buffSize];
  char protossFleet[buffSize];
  getProgramInput(terranFleet, protossFleet);

  BattleField battleField;
  Error err = NO_ERROR;
  err = generateTerranFleet(&battleField, terranFleet);

  if(!err)
  {
      err = generateProtossFleet(&battleField, protossFleet);
  }

  if(err == NO_ERROR)
  {
     err = startBattle(&battleField);
  }
  if(err == NO_ERROR)
  {
  //    deinit(&battleField);
  }

  return EXIT_SUCCESS;
}

// add new thing

#include <stdio.h>
#include <stdlib.h>

#include "BattleField.h"


bool validTerranFleet (char * fleet );


bool validProtossFleet (char *fleet );


int main() {
  const int buffSize = 50;
  char terranFleet[buffSize];
  char protossFleet[buffSize];
 
  do
  {
    scanf("%s %s", terranFleet, protossFleet);
  } while (validFleetInput(terranFleet) );
  // TODO: write func validInput() 
  
  BattleField battleField;
  generateTerranFleet(&battleField, terranFleet);
  generateProtossFleet(&battleField, protossFleet);
  startBattle(&battleField);
  deinit(&battleField);

  return EXIT_SUCCESS;
}

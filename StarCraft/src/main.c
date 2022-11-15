#include <stdio.h>
#include <stdlib.h>

#include "BattleField.h"

#define BUFFSIZE 50

bool validTerranFleet (char * fleet );


bool validProtossFleet (char *fleet );


int main() {

  char terranFleet[BUFFSIZE];
  char protossFleet[BUFFSIZE];
 
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

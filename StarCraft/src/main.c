#include <stdio.h>
#include <stdlib.h>

#include "BattleField.h"

#define BUFFSIZE 50

/* bool validTerranFleet (char * fleet )
{
  if(*fleet == 'v')
  return true; 
}


bool validProtossFleet (char *fleet )
{
  if (*fleet == 'b')
  return true ;
} */


int main() {

  char terranFleet[BUFFSIZE] ="vv";
  char protossFleet[BUFFSIZE] = "bb";
 
 /*  do
  {
    scanf("%s %s", terranFleet, protossFleet);
  } while (validFleetInput(terranFleet) );
  // TODO: write func validInput()  */
  
  BattleField battleField;
  generateTerranFleet(&battleField, terranFleet);
  generateProtossFleet(&battleField, protossFleet);
  startBattle(&battleField);
  //deinit(&battleField);

  return EXIT_SUCCESS;
}

#include "Utilities.h"

#include <stdio.h>

/**
 * Get user input
 * @param TerranFleet pointer to char 
 * @param ProtossFleet pointer to char 
 */
void getProgramInput(char *const terranFleet, char *const protossFleet)
{
  do
  {
    scanf("%s %s", terranFleet, protossFleet);

  } while (!validTerranFLeetInput(terranFleet) || !validProtossFleetInput(protossFleet));
}

/**
 * Check is terrans fleet input is valid. 
 * @param TerranFleetInput pointer to char contains terranFleet input. 
 * @return bool TRUE OR FALSE. 
 */
bool validTerranFLeetInput(const char *terranFleet)
{
  while(*terranFleet != '\0')
  {
    if((*terranFleet != 'v') && (*terranFleet != 'b'))
    {
      return false;
    }

    terranFleet++;
  }

  return true;
}

/**
 * Check is protoss fleet input is valid. 
 * @param ProtossFleetInput pointer to char contains protossFleet input. 
 * @return bool TRUE OR FALSE. 
 */
bool validProtossFleetInput(const char *protossFleet)
{
  while(*protossFleet != '\0')
  {
    if((*protossFleet != 'p') && (*protossFleet != 'c'))
    {
      return false;
    }
    
    protossFleet++;
  }

  return true;
}
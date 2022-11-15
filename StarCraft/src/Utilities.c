#include "Utilities.h"
#include<stdio.h>

void getProgramInput(char *terranFleet , char * protossFleet)
{
  do
  {
    scanf("%s %s", terranFleet, protossFleet);
  } while (!validTerranFLeetInput(terranFleet) || !validProtossFleetInput(protossFleet));
}

bool validTerranFLeetInput (char * terranFleet )
{
  while(*terranFleet != '\0')
  {
    if((*terranFleet != 'v') && (*terranFleet != 'b'))
    {
      return false ;
    }
    terranFleet++;
  }
  return true ;   
}


bool validProtossFleetInput (char * protossFleet )
{
  while(*protossFleet != '\0')
  {
    if((*protossFleet != 'p') && (*protossFleet != 'c'))
    {
      return false ;
    }
    protossFleet++;
  }
  return true ;   
}
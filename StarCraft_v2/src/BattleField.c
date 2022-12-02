#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "BattleField.h"
#include "Viking.h"
#include "BattleCruiser.h"
#include "Phoenix.h"
#include "Carrier.h"
#include "ProtossShip.h"
#include "TerranShip.h"
#include "TerranTurn.h"
#include "ProtossTurn.h"
#include "Defines.h"
#include "Ship.h"
#include "Print.h"
#include "Attacks.h"


/**
 * Generate fleet of terran ships
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param terranInput strings with fleet data.
 */
Error generateTerranFleet(BattleField *const battleField, const char *terranFleetStr)
{
    Error err = NO_ERROR;
    if(battleField == NULL)
    {
        err = checkForError(battleField, NULL_PARAMETER , CURRENT_FUNC_NAME);
        return err;
    }

    uint16_t terranFleetLen = strlen(terranFleetStr);

    vectorInit(&battleField->terranFleet, terranFleetLen);

    int positionInFleet = 0;
    
    while (*terranFleetStr != '\0')
    {
        if (*terranFleetStr == 'v')
        {
            Viking *vikingShip = NULL;
            err = initViking(&vikingShip, positionInFleet);
            vectorPush(&battleField->terranFleet, vikingShip);
        }
        else if (*terranFleetStr == 'b')
        {
            BattleCruiser *battleCruiserShip = NULL;
            err = initBattleCruiser(&battleCruiserShip, positionInFleet);
            vectorPush(&battleField->terranFleet, battleCruiserShip);
        }
        
        positionInFleet++;
        terranFleetStr++;

        if (err != NO_ERROR)
        {
          return err;
        }
    }

    return NO_ERROR;
}


/**
 * Generate fleet of protoss ships
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param protossInput strings with fleet data.
 */
Error generateProtossFleet(BattleField *const battleField, const char *protossFleetStr)
{
    Error err = NO_ERROR;
    if(battleField == NULL)
    {
      err = checkForError(battleField, NULL_PARAMETER , CURRENT_FUNC_NAME);
      return err;
    }

    uint16_t stelen = strlen(protossFleetStr);
    vectorInit(&battleField->protossFleet, stelen);

    int16_t positionInFleet = 0;
    while (*protossFleetStr != '\0')
    {
        if (*protossFleetStr == 'p')
        {
            Phoenix *phoenixShip = NULL;
            err = initPhoenix(&phoenixShip, positionInFleet);
            vectorPush(&battleField->protossFleet, phoenixShip);
        }
        else if (*protossFleetStr == 'c')
        {
            Carrier *carrierShip = NULL;
            err = initCarrier(&carrierShip, positionInFleet);
            vectorPush(&battleField->protossFleet, carrierShip);
        }
        protossFleetStr++;
        positionInFleet++;

        if(err)
        {
            break;
        }
    }

    return err;
}

Error startBattle(BattleField *const battleField)
{

    Error err = NO_ERROR;

    while (true)
    {
        if (processTerranTurn(battleField, &err) && (!err))
        {
            printf("TERRAN has won!\n");
            break;
        }
     if (processProtossTurn(battleField, &err) && (!err))
        {
            printf("PROTOSS has won!\n");
            break;
        }

        if (err)
        {
            break;
        }
    }
    return err;
}

void deinit(BattleField *battleField) {

    //exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);
    
    for (size_t i = 0; i < vectorGetCapacity(&battleField->protossFleet); i++)
    {
        free(battleField->protossFleet.items[i]);
        battleField->protossFleet.items[i] = NULL;
    }

    for (size_t i = 0; i < vectorGetCapacity(&battleField->terranFleet); i++)
    {
      free(battleField->terranFleet.items[i]);
      battleField->terranFleet.items[i] = NULL;
    }

  vectorFree(&battleField->protossFleet);
  vectorFree(&battleField->terranFleet);
}

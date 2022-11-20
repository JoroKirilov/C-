#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "BattleField.h"
#include "Viking.h"
#include "BattleCruiser.h"
#include "Phoenix.h"
#include "Carrier.h"
#include "Defines.h"

/**
 * Generate fleet of terran ships
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param terranInput strings with fleet data.
 */
Error generateTerranFleet(BattleField *battleField, const char *terranFleetStr)
{
    Error err = NO_ERROR;
    if(battleField == NULL)
    {
        err = checkForError(battleField, NULL_PARAMETER , CURRENT_FUNC_NAME);
        return err;
    }

    uint16_t terranFleetLen = strlen(terranFleetStr);

    vectorInit(&battleField->terranFleet, terranFleetLen);
    vectorInit(&battleField->terranFleetTypes, terranFleetLen);

    while (*terranFleetStr != '\0')
    {
        if (*terranFleetStr == 'v')
        {
            Viking *vikingShip = NULL;
            err = initViking(&vikingShip);
            vectorPush(&battleField->terranFleet, vikingShip);

            int16_t *vikingType = (int16_t *)calloc(1, sizeof(int16_t));
            *vikingType = VIKING;
            vectorPush(&battleField->terranFleetTypes, vikingType);
          //  Viking *current = vectorBack(&battleField->terranFleet);
          //  printf("current ship in terran fleet has %d health.\n", current->terranShip.ship.health);
        }
        else if (*terranFleetStr == 'b')
        {
            BattleCruiser *battleCruiserShip = NULL;
            err = initBattleCruiser(&battleCruiserShip);
            vectorPush(&battleField->terranFleet, battleCruiserShip);

            int16_t *battleCruiserType = (int16_t *)calloc(1, sizeof(int16_t));
            *battleCruiserType = BATTLE_CRUISER;
            vectorPush(&battleField->terranFleetTypes, battleCruiserType);
           // BattleCruiser *current = vectorBack(&battleField->terranFleet);
           // printf("current ship in terran fleet has %d health.\n", current->terranShip.ship.health);
        }
        
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

    while (*protossFleetStr != '\0')
    {
        if (*protossFleetStr == 'p')
        {
            Phoenix phoenixShip;
            err = initPhoenix(&phoenixShip);
            vectorPush(&battleField->protossFleet, &phoenixShip);
        }
        else if (*protossFleetStr == 'c')
        {
            Carrier carrierShip;
            err = initCarrier(&carrierShip);
            vectorPush(&battleField->protossFleet, &carrierShip);
        }
        protossFleetStr++;

        if(err)
        {
            break;
        }
    }

    return err;
}

Error startBattle(BattleField *battleField)
{

    Error err = NO_ERROR;

    while (true)
    {
        if (processTerranTurn(battleField, &err))
        {
            printf("TERRAN has won!\n");
            break;
        }
/*
        if (processProtossTurn(battleField, &err))
        {
            printf("PROTOSS has won!\n");
            break;
        }

        */
    }
    return err;
}


/*void deinit(BattleField *battleField) {
}*/


/*bool processProtossTurn(BattleField *battleField, Error *err)
{
    *err = NO_ERROR;

    bool statusOfAttackedShip = true; //ALIVE;
    bool carrierDestroyedEnemyShip = false;

    for (size_t idxOfAttackingShip = 0; idxOfAttackingShip < battleField->protossFleet.size; idxOfAttackingShip++)
    {
        carrierDestroyedEnemyShip = false;

        if (vectorIsEmpty(&battleField->terranFleet))
        {
            return true;
        }

        protossShip *currentAttackingShip = vectorGet(&battleField->protossFleet, idxOfAttackingShip);
        exitIfError(currentAttackingShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

        terranShip* currentAttackedShip = vectorBack(&battleField->terranFleet);
        exitIfError(currentAttackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

        if (currentAttackingShip->typeShip == CARRIER)
        {
            statusOfAttackedShip = CarrierAttack (currentAttackingShip, currentAttackedShip);

            if (statusOfAttackedShip == DESTROYED && !carrierDestroyedEnemyShip)
            {
                carrierDestroyedEnemyShip = true;
                printReportForDestroyedShip(currentAttackingShip->typeShip,
                                            idxOfAttackingShip,
                                            &battleField->terranFleet);
                destroyTerranShip(battleField, &currentAttackedShip);
            }

            if (vectorIsEmpty(&battleField->terranFleet))
            {
                return true;
            }

            if (currentAttackingShip->turns_left > 0 )
            {
                if (statusOfAttackedShip == DESTROYED)
                {
                    currentAttackedShip = vectorBack(&battleField->terranFleet);
                    statusOfAttackedShip = ALIVE;
                }

                statusOfAttackedShip = CarrierFinishAttack(currentAttackingShip, currentAttackedShip);
            }
        }
        else if (currentAttackingShip->typeShip == PHOENIX)
        {
            statusOfAttackedShip = phoenixAttack(currentAttackingShip, currentAttackedShip);
        }

        if (statusOfAttackedShip == DESTROYED && !carrierDestroyedEnemyShip)
        {
            printReportForDestroyedShip(currentAttackingShip->typeShip,
                                        idxOfAttackingShip,
                                        &battleField->terranFleet);
            destroyTerranShip(battleField, &currentAttackedShip);
        }
    }

    terranShip* rearTerranShip = vectorBack(&battleField->terranFleet);

    bool isEnemiesFleetDestroyed = vectorIsEmpty(&battleField->terranFleet);

    if (isEnemiesFleetDestroyed == DESTROYED)
    {
        return true;
    }
    else {
        printReportAfterProtossProcess(rearTerranShip, vectorGetSize(&battleField->terranFleet) - 1);
    }

  return false;
}*/

bool processTerranTurn(BattleField *battleField , Error *err)
{
    *err = NO_ERROR;

    for (size_t idxOfAttackingShip = 0; idxOfAttackingShip < battleField->terranFleet.size; idxOfAttackingShip++)
    {
        //void *currentAttackingShip = vectorGet(&battleField->terranFleet, idxOfAttackingShip);
        int16_t *currentAttackingShipType = vectorGet(&battleField->terranFleetTypes, idxOfAttackingShip);
        
        if (vectorIsEmpty(&battleField->protossFleet))
        {
            return true;
        }

        switch(*currentAttackingShipType)
        {
            case VIKING:            printVikingShip(battleField, idxOfAttackingShip);
                                    break;
            
            case BATTLE_CRUISER:    printBattleCruiserShip(battleField, idxOfAttackingShip);
                                    break;
            
            default:                printError(INVALID_TYPE_SHIP, CURRENT_FUNC_NAME);
                                    exit(EXIT_FAILURE);
                                    break;
        }

        
        
        
        
        /*
        terranShip *currentAttackingShip = vectorGet(&battleField->terranFleet, idxOfAttackingShip);
        //exitIfError(currentAttackingShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

        protossShip *currentAttackedShip = vectorBack(&battleField->protossFleet);
       // exitIfError(currentAttackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

        bool statusOfAttackedShip = true ;//ALIVE;

        switch(currentAttackingShip->typeShip)
        {
            case BATTLE_CRUSER: statusOfAttackedShip = battleCruiserAttack(currentAttackingShip, currentAttackedShip);
                break;
            case VIKING:        statusOfAttackedShip = vikingAttack(currentAttackingShip, currentAttackedShip);
                break;
            default:            printError(INVALID_TYPE_SHIP, CURRENT_FUNC_NAME);
                exit(EXIT_FAILURE);
                break;
        }

        if (statusOfAttackedShip == DESTROYED)
        {
            printReportForDestroyedShip(currentAttackingShip->typeShip,
                                        idxOfAttackingShip ,
                                        &battleField->protossFleet);

            destroyProtossShip(battleField, &currentAttackedShip);
        }
        */
    }
/*
    protossShip *rearProtossShip = vectorBack(&battleField->protossFleet);


    bool isEnemiesFleetDestroyed = vectorIsEmpty(&battleField->protossFleet);

    if (isEnemiesFleetDestroyed == DESTROYED)
    {
        return true;
    }
    else
    {
        printReportAfterTerranProcess(rearProtossShip, vectorGetSize(&battleField->protossFleet) - 1);
    }
*/
    return true;//false;
}

void printVikingShip(BattleField *battleField, size_t idxOfAttackingShip)
{
    Viking *vikingShip = (Viking*)battleField->terranFleet.items[idxOfAttackingShip];
    printf("%zu: Viking ship with %d health and %d damage is attacking\n" , idxOfAttackingShip, vikingShip->terranShip.ship.health , vikingShip->terranShip.ship.damage );
}

void printBattleCruiserShip(BattleField *battleField, size_t idxOfAttackingShip)
{
    BattleCruiser *battleCruiserShip = (BattleCruiser*)((battleField->terranFleet.items)[idxOfAttackingShip]);
    printf("%zu: BC ship with %hd health and %hd damage is attacking\n" , idxOfAttackingShip, battleCruiserShip->terranShip.ship.health , battleCruiserShip->terranShip.ship.damage);
}
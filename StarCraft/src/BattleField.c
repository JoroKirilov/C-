#include "BattleField.h"
#include "Fleet.h"

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr) {
    
    int stelen =  strlen(terranFleetStr);
    vectorInit(&battleField->terranFleet , stelen); 
    
    while(terranFleetStr != '\0')
    {
      if (terranFleetStr == 'v')
      {
          vectorPush(&battleField->terranFleet, initViking());
          //todo: cast to struct terran ship 
      }
      else if (terranFleetStr = 'b')
      {
        vectorPush(&battleField->terranFleet, initBattleCruiser());
      }
      
      
      terranFleetStr++;
    }
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr) {
    int stelen =  strlen(protossFleetStr);
    vectorInit(&battleField->terranFleet , stelen); 
    
    while(protossFleetStr != '\0')
    {
      if (protossFleetStr == 'v')
      {
          vectorPush(&battleField->terranFleet, initViking());
          //todo: cast to struct terran ship 
      }
      else if (protossFleetStr = 'b')
      {
        vectorPush(&battleField->protossFleet, initBattleCruiser());
      }

      protossFleetStr++;
    }
}


void startBattle(BattleField *battleField) {
  while (true) {
    if (processTerranTurn(battleField)) {
      printf("TERRAN has won!\n");
      break;
    }

    if (processProtossTurn(battleField)) {
      printf("PROTOSS has won!\n");
      break;
    }
  }
}

void deinit(BattleField *battleField) {
}

bool processTerranTurn(BattleField *battleField) { 

  for (size_t idxOfAttackingShip = 0; idxOfAttackingShip < battleField->terranFleet.size ; idxOfAttackingShip++)
  {
     terranShip* currentAttackingShip = vectorGet(&battleField->terranFleet, idxOfAttackingShip);
     protossShip* currentAttackedShip = vectorBack(&battleField->protossFleet);

     bool statusOfAttackedShip = ALIVE ; 

     if (currentAttackingShip->typeShip == BATTLE_CRUSER)
     {
        statusOfAttackedShip = battleCruserAttack(currentAttackingShip , currentAttackedShip);   
     }
     else if(currentAttackingShip->typeShip == VIKING){
        statusOfAttackedShip = vikingAttack(currentAttackingShip , currentAttackedShip );
     }
     if (statusOfAttackedShip == DESTROYED)
     {
        printStatus(currentAttackingShip->typeShip ,
                    &currentAttackedShip ,
                    idxOfAttackingShip ,
                    battleField->protossFleet); 
        
     }
       
  }

  return false;
  }

bool processProtossTurn(BattleField *battleField) {
   for (size_t i = 0; i < battleField->terranFleet.size ; i++)
  {
     protossShip* currentAttackingShip = vectorGet(&battleField->protossFleet , i);
     terranShip* currentAttackedShip = vectorBack(&battleField->terranFleet);

     if (currentAttackingShip->typeShip == CARRIER)
     {
      /* code */
     }
     else if(currentAttackingShip->typeShip == PHOENIX){
     }
  
  return false;

  }
}


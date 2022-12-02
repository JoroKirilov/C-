#include "BattleField.h"
#include "Attacks.h"
#include "Print.h"
#include "Defines.h"
#include "ProtossShip.h"
#include "TerranShip.h"

#include <stdlib.h>


bool processTerranTurn(BattleField *const battleField, Error *const err)
{
    *err = checkForError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);

    if (!*err)
    {
        for (size_t idxOfAttackingShip = 0; idxOfAttackingShip < battleField->terranFleet.size; idxOfAttackingShip++)
        {
            ProtossShip *currentAttackedShip = vectorBack(&battleField->protossFleet);
            if (currentAttackedShip == NULL) // this means protosFleet is empty
            {
                break;
            }

            TerranShip *currentAttackingShip = vectorGet(&battleField->terranFleet, idxOfAttackingShip);

            bool isAttackedShipAlive = terranAttacksProtoss(currentAttackingShip, currentAttackedShip);

            if (!isAttackedShipAlive)
            {
                printReportForDestroyedShip((Ship*)currentAttackingShip, idxOfAttackingShip, &battleField->protossFleet);
                vectorPop(&battleField->protossFleet);
            }
        }
    }
    
    if (vectorIsEmpty(&battleField->protossFleet))
    {
        return true;
    }
    else
    {
        printReportAfterTerranProcess(&battleField->protossFleet);
        return false;
    }
}
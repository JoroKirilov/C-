#include "BattleField.h"
#include "Attacks.h"
#include "ProtossShip.h"
#include "TerranShip.h"
#include "Print.h"

bool processProtossTurn(BattleField *const battleField, Error *const err)
{
    *err = checkForError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);

    if (!*err)
    {
        for (size_t idxOfAttackingShip = 0; idxOfAttackingShip < battleField->protossFleet.size; idxOfAttackingShip++)
        {
            TerranShip *currentAttackedShip = vectorBack(&battleField->terranFleet);
            if (currentAttackedShip == NULL) // this means terranFleet is empty
            {
                break;
            }

            ProtossShip *currentAttackingShip = vectorGet(&battleField->protossFleet, idxOfAttackingShip);

            bool isAttackedShipAlive = protossAttacksTerran(currentAttackingShip, (Ship**)(&currentAttackedShip), &battleField->terranFleet);

            if (!isAttackedShipAlive)
            {
                printReportForDestroyedShip((Ship*)currentAttackingShip, idxOfAttackingShip, &battleField->terranFleet);
                vectorPop(&battleField->terranFleet);
            }
        }
    }

    if (vectorIsEmpty(&battleField->terranFleet))
    {
        return true;
    }
    else
    {
        printReportAfterProtossProcess(&battleField->terranFleet);
        return false;
    }
}
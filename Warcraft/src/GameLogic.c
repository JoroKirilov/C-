#include "GameLogic.h"
#include "Utilities.h"

#include "Vector.h"
#include "Defines.h"
#include "ErrorHandler.h"
#include "Hero.h"
#include "heroes/ArchMage.h"
#include "heroes/DrawRanger.h"
#include "heroes/DeathKnight.h"
#include <stdio.h>
#include <stdlib.h>

Error getInputHeroes(Party *party){

    Error err = NO_ERROR;
    vectorInit(&party->heroes, HERROES_NUMBER);

    for (int currentHeroIdx = 0; currentHeroIdx < HERROES_NUMBER; currentHeroIdx++)
    {
        char name[MAX_HERO_NAME_SIZE];
        int maxMana = 0;
        int baseManaRegenRate = 0;
        int manaRegenModifier = 0;
        //int returnScanfValue = 0;

        switch(currentHeroIdx){
            case ARCHMAGE://ignore_result(scanf("%20[^0-9] %d %d %d", name,&maxMana, &baseManaRegenRate, &manaRegenModifier));
                readArchmageHeroInput(name, &maxMana, &baseManaRegenRate, &manaRegenModifier);
                vectorPush(&party->heroes, initArchMage(name, maxMana, baseManaRegenRate, manaRegenModifier, &err));
                break;
            case DEATHKNIGHT: readHeroInput(name, &maxMana, &baseManaRegenRate);
                vectorPush(&party->heroes, initDeathKnight(name, maxMana, baseManaRegenRate, &err));
                break;
            case DRAWRANGER: readHeroInput(name, &maxMana, &baseManaRegenRate);
                vectorPush(&party->heroes, initDrawRanger(name, maxMana, baseManaRegenRate, &err));
                break;
            default:
                break;
        }
    }
    if(err == NULL_PARAMETER)
    {
        printf("Error null param");
    }
    return err;
}

Error startGame(Party* party)
{
    Error err = NO_ERROR;
    int counter = 1;
    int limitForGameLoop = (HERROES_NUMBER)*(party->turns);

    int counterSpell = 0 ;
    
    for(int currentHeroIdx = 0 ; counter <= limitForGameLoop; counter++)
    {
        uint8_t *currentSpell = vectorGet(&party->actions, counterSpell);

        err = checkForError(currentSpell, NULL_PARAMETER, CURRENT_FUNC_NAME );
        if(err != NO_ERROR)
        {
            return err;
        }

        Hero *currentHero = vectorGet(&party->heroes, currentHeroIdx);

        err = checkForError(currentSpell, NULL_PARAMETER, CURRENT_FUNC_NAME );
        if(err != NO_ERROR)
        {
            return err ;
        }

        heroAction(currentHero, currentSpell);
        currentHeroIdx++;

        if(counter % (HERROES_NUMBER)  == 0 && counter != 0)
        {
            counterSpell++;
            currentHeroIdx =0;
        }
    }

    return err;
}


Error getActionsInput(Party* party)
{
    Error err = NO_ERROR;
    int heroTurn = 0 ;
    heroTurn = getValidNumberInput();
    party->turns = heroTurn;

    err = vectorInit(&party->actions, party->turns);
    if(err != NO_ERROR)
    {
        return err;
    }

    for(int currentAction = 0; currentAction < party->turns; currentAction++)
    {
        int *actionInput = (int*) calloc(1, sizeof(int));

        err = checkForError(actionInput, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
        if(err != NO_ERROR)
        {
            return err;
        }
        
        *actionInput = getValidActionInput();
        
        vectorPush(&party->actions, actionInput);
    }

    return err;
}


void deinit(Party *const party)
{
    for (size_t i = 0; i < vectorGetCapacity(&party->heroes); i++)
    {
        free(party->heroes.items[i]);
        party->heroes.items[i] = NULL;
    }

    for (size_t i = 0; i < vectorGetCapacity(&party->actions); i++)
    {
      free(party->actions.items[i]);
      party->actions.items[i] = NULL;
    }

    vectorFree(&party->heroes);
    vectorFree(&party->actions);
}
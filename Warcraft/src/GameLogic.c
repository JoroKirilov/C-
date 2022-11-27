
#include "Vector.h"
#include "Defines.h"
#include "Hero.h"
#include "ArchMage.h"
#include "DrawRanger.h"
#include "DeathKnight.h"
#include <stdio.h>
#include <stdlib.h>


void getUserInputHeroes(Party *heroes){

    vectorInit(&heroes->party, HERROES_NUMBER);

    for (int currentHeroIdx = 0; currentHeroIdx < HERROES_NUMBER; currentHeroIdx++)
    {   char name[MAX_HERO_NAME_SIZE + 1];
        int maxMana = 0;
        int baseManaRegenRate = 0;
        int manaRegenModifier = 0;


        switch(currentHeroIdx){
            case ARCHMAGE:scanf("%s %d %d %d", name, &maxMana, &baseManaRegenRate, &manaRegenModifier);
                vectorPush(&heroes->party,initArchMage(name,maxMana,baseManaRegenRate,manaRegenModifier));
               // ArchMage* currentArchMange = vectorGet(&heroes->party, 0);
               // printf("%s , %d , %d , %d" , currentArchMange->instance.name, currentArchMange->instance.maxMana,currentArchMange->instance.manaRegenRate,currentArchMange->manaRegenModifier);
                break;
            case DEATHKNIGHT:scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
                vectorPush(&heroes->party,initDeathKnight(name,maxMana,baseManaRegenRate));
                break;
            case DRAWRANGER:scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
                vectorPush(&heroes->party,initDrawRanger(name,maxMana,baseManaRegenRate));
                break;
            default:
                break;
        }
    }
}

int startGame(Party* group){

    int counter = 0;
    int limitForGameLoop = (HERROES_NUMBER)*(group->turns);
    ArchMage *currentArchMage = vectorGet(&group->party, ARCHMAGE);
    DeathKnight *currentDeathKnight = vectorGet(&group->party, DEATHKNIGHT);;
    DrawRanger * currentDrawRanger =  vectorGet(&group->party, DRAWRANGER);
    int counterSpell = 0 ;
    for(int currentHeroIdx= 0 ;counter<=limitForGameLoop;counter++) {
        int *currentSpell = vectorGet(&group->actions, counterSpell);


        switch (currentHeroIdx) {

            case ARCHMAGE:
                archMageAction(currentArchMage, currentSpell);
                currentHeroIdx++;
                break;
            case DEATHKNIGHT:
                deathKnightAction(currentDeathKnight,currentSpell);
                currentHeroIdx++;
                break;
            case DRAWRANGER:
                 drawRangerAction(currentDrawRanger,currentSpell);
                currentHeroIdx++;
                 break;
            default:
                break;

        }

        if(counter % 3  == 0 && counter != 0){
            counterSpell++;
            currentHeroIdx =0;
        }
    }
    return 1;
}


void getNumberOfActions(Party* heroes){

    int heroTurn = 0 ;                      // this way works correctly  
    scanf("%d", &heroTurn);
    heroes->turns = heroTurn;
    vectorInit(&heroes->actions,heroes->turns);

    int*  actionInput = (int*) calloc(heroes->turns, sizeof(int));
    if(actionInput == NULL)
    {
        //error handling
    }
    for(int currentAction = 0;currentAction< heroes->turns;currentAction++)
    {
        scanf("%d",actionInput);
        vectorPush(&heroes->actions,actionInput);
        actionInput ++;
    }
}
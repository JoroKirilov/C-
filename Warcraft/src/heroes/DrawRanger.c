#include "heroes/DrawRanger.h"

#include <stdlib.h>

#include <stdio.h>
#include "Hero.h"


typedef struct DrawRanger{
    Hero instance;

}DrawRanger;


void drawRangeActionCastBasicSpell(DrawRanger* currentHero){


    if(currentHero->instance.currMana >= DRAW_RANGER_BASIC_SPELL_MANA_COST){
        currentHero->instance.currMana -= DRAW_RANGER_BASIC_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentHero->instance.name,currentHero->instance.spells[0].name,currentHero->instance.spells[0].manaCost);
        printf("%s casted %s for 0 mana\n",currentHero->instance.name,currentHero->instance.spells[0].name);
    }
    else{
        printf("%s - not enough mana to cast %s\n",currentHero->instance.name,currentHero->instance.spells[0].name);
    }
    //drawRangeActionCastRegenMana(currentHero);

}

void drawRangeActionCastUltimateSpell(DrawRanger* currentHero){

    if(currentHero->instance.currMana >= DRAW_RANGER_ULTIMATE_SPELL_MANA_COST){
        currentHero->instance.currMana -= DRAW_RANGER_ULTIMATE_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentHero->instance.name,currentHero->instance.spells[1].name,currentHero->instance.spells[1].manaCost);
    }
    else{
        printf("%s - not enough mana to cast %s\n",currentHero->instance.name,currentHero->instance.spells[1].name);
    }
    //drawRangeActionCastRegenMana(currentHero);
}


DrawRanger * initDrawRanger( char name[MAX_HERO_NAME_SIZE] , int max_mana, int regenManaRate,Error *err )
{
    DrawRanger * currentHero = (DrawRanger*) calloc(1, sizeof(DrawRanger));
    *err = checkForError(currentHero, ALLOCATION_ERROR, CURRENT_FUNC_NAME);


    heroBaseInit((Hero *)currentHero, name, max_mana, regenManaRate, DRAWRANGER);

    //spells init
    heroSpellsInit((Hero *)currentHero, DRAW_RANGER_BASIC_SPELL_NAME,DRAW_RANGER_BASIC_SPELL_MANA_COST, DRAW_RANGER_ULTIMATE_SPELL_NAME, DRAW_RANGER_ULTIMATE_SPELL_MANA_COST);


    //casting spells functions
    setHeroFunction((Hero * )currentHero,CAST_BASIC_SPELL,drawRangeActionCastBasicSpell);
    setHeroFunction((Hero * )currentHero,CAST_ULTIMATE_SPELL,drawRangeActionCastUltimateSpell);
    setHeroFunction((Hero * )currentHero,REGENERATE_MANA,RegenManaDefault);

    return currentHero;
}


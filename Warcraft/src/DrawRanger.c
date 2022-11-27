#include "DrawRanger.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Hero.h"



void (*drawRangerFunctions[2])(DrawRanger* ) = { drawRangeActionCastBasicSpell,drawRangeActionCastUltimateSpell };


DrawRanger * initDrawRanger( char name[MAX_HERO_NAME_SIZE + 1] , int max_mana, int regenManaRate ){
    DrawRanger * currentHero = (DrawRanger*) calloc(1, sizeof(DrawRanger));
    //error handling

    heroBaseInit((Hero *)currentHero, name, max_mana, regenManaRate, DRAWRANGER);

    //spells init
    heroSpellsInit((Hero *)currentHero, DRAW_RANGER_BASIC_SPELL_NAME,DRAW_RANGER_BASIC_SPELL_MANA_COST, DRAW_RANGER_ULTIMATE_SPELL_NAME, DRAW_RANGER_ULTIMATE_SPELL_MANA_COST);


    //casting spells functions
//   currentHero->basic_spell_cast = drawRangerFunctions[0];
//   currentHero->ultimate_spell_cast = drawRangerFunctions[1];

    return currentHero;
}


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


void drawRangerAction(DrawRanger* currentHero, int* current_choice){
    //printf("%d",*current_choice);
    if(*current_choice == CAST_BASIC_SPELL)
    {
        drawRangeActionCastBasicSpell(currentHero);
    }
    else if(*current_choice == CAST_ULTIMATE_SPELL)
    {
        drawRangeActionCastUltimateSpell(currentHero);
    }
    else if(*current_choice == REGENERATE_MANA){
        RegenManaDefault((Hero*)currentHero);
    }

}


//
//void testDrawRanger(){
//
//        DrawRanger* drawTest = initDrawRanger("pesho",450,33);
//        drawRangerAction(drawTest,0);
//        drawTest->basic_spell_cast;
//
//
//}
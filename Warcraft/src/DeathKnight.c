#include "DeathKnight.h"


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Hero.h"




void deathKnightActionCastBasicSpell(DeathKnight* currentHero){


    if(currentHero->instance.currMana >= DEATH_KNIGHT_BASIC_SPELL_MANA_COST){
        currentHero->instance.currMana -= DEATH_KNIGHT_BASIC_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentHero->instance.name,currentHero->instance.spells[0].name,currentHero->instance.spells[0].manaCost);

    }
    else{
        printf("%s - not enough mana to cast %s\n",currentHero->instance.name,currentHero->instance.spells[0].name);
    }
    //drawRangeActionCastRegenMana(currentHero);

}

void deathKnightActionCastUltimateSpell(DeathKnight* currentHero){

    if(currentHero->instance.currMana >= DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST){
        currentHero->instance.currMana -= DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentHero->instance.name,currentHero->instance.spells[1].name,currentHero->instance.spells[1].manaCost);
        printf("%s casted %s for 0 mana\n",currentHero->instance.name,currentHero->instance.spells[0].name);
    }
    else{
        printf("%s - not enough mana to cast %s\n",currentHero->instance.name,currentHero->instance.spells[1].name);
    }
    //drawRangeActionCastRegenMana(currentHero);
}

void (*deathKnightFunctions[2])(DeathKnight * ) = { deathKnightActionCastBasicSpell,deathKnightActionCastUltimateSpell };

DeathKnight * initDeathKnight( char name[MAX_HERO_NAME_SIZE + 1] , int max_mana, int regenManaRate )
{
    DeathKnight * currentHero = (DeathKnight*) calloc(1, sizeof(DeathKnight));
    //error handling


    heroBaseInit((Hero *)currentHero, name, max_mana, regenManaRate, DEATHKNIGHT);

    //spells init
    heroSpellsInit((Hero *)currentHero, DEATH_KNIGHT_BASIC_SPELL_NAME,
                                        DEATH_KNIGHT_BASIC_SPELL_MANA_COST,
                                        DEATH_KNIGHT_ULTIMATE_SPELL_NAME,
                                        DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST);


    //casting spells functions
//    currentHero->basic_spell_cast = deathKnightFunctions[0];
//    currentHero->ultimate_spell_cast = deathKnightFunctions[1];

    return currentHero;
}



void deathKnightAction(DeathKnight* currentHero, int* current_choice){
    //printf("%d",*current_choice);
    if(*current_choice == CAST_BASIC_SPELL)
    {
        deathKnightActionCastBasicSpell(currentHero);
    }
    else if(*current_choice == CAST_ULTIMATE_SPELL)
    {
        deathKnightActionCastUltimateSpell(currentHero);
    }
    else if(*current_choice == REGENERATE_MANA){
        RegenManaDefault((Hero*)currentHero);
    }

}



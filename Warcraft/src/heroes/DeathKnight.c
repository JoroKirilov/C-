#include "heroes/DeathKnight.h"
#include <stdlib.h>
#include <stdio.h>
#include "Hero.h"


typedef struct DeathKnight{
    Hero instance;
}DeathKnight;


void deathKnightActionCastBasicSpell(DeathKnight* currentHero)
{
    if(currentHero->instance.currMana >= DEATH_KNIGHT_BASIC_SPELL_MANA_COST)
    {
        currentHero->instance.currMana -= DEATH_KNIGHT_BASIC_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentHero->instance.name,
                                                   currentHero->instance.spells[0].name,
                                                    currentHero->instance.spells[0].manaCost);
    }
    else
    {
        printf("%s - not enough mana to cast %s\n",currentHero->instance.name,currentHero->instance.spells[0].name);
    }
}


void deathKnightActionCastUltimateSpell(DeathKnight* currentHero)
{
    if(currentHero->instance.currMana >= DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST){
        currentHero->instance.currMana -= DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentHero->instance.name,currentHero->instance.spells[1].name,currentHero->instance.spells[1].manaCost);
        printf("%s casted %s for 0 mana\n",currentHero->instance.name,currentHero->instance.spells[0].name);
    }
    else
    {
        printf("%s - not enough mana to cast %s\n",currentHero->instance.name,currentHero->instance.spells[1].name);
    }
}


DeathKnight * initDeathKnight( char name[MAX_HERO_NAME_SIZE] , int max_mana, int regenManaRate, Error *err)
{
    DeathKnight * currentHero = (DeathKnight*) calloc(1, sizeof(DeathKnight));
    *err = checkForError(currentHero, ALLOCATION_ERROR, CURRENT_FUNC_NAME);

    heroBaseInit((Hero *)currentHero, name, max_mana, regenManaRate, DEATHKNIGHT);

    heroSpellsInit((Hero *)currentHero, DEATH_KNIGHT_BASIC_SPELL_NAME,
                                        DEATH_KNIGHT_BASIC_SPELL_MANA_COST,
                                        DEATH_KNIGHT_ULTIMATE_SPELL_NAME,
                                        DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST);

    setHeroFunction((Hero * )currentHero,CAST_BASIC_SPELL,deathKnightActionCastBasicSpell);
    setHeroFunction((Hero * )currentHero,CAST_ULTIMATE_SPELL,deathKnightActionCastUltimateSpell);
    setHeroFunction((Hero * )currentHero,REGENERATE_MANA,RegenManaDefault);

    return currentHero;
}




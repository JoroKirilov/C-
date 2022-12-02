#include "heroes/ArchMage.h"

#include "Defines.h"
#include <stdlib.h>
#include "ErrorHandler.h"

struct ArchMage{
    Hero instance;
    int manaRegenModifier;
};


ArchMage *initArchMage( char name[MAX_HERO_NAME_SIZE] , int max_mana, int regenManaRate ,int manaModifier, Error *err)
{
    ArchMage *currentHero = (ArchMage*) calloc(1, sizeof(ArchMage));
    *err = checkForError(currentHero, ALLOCATION_ERROR, CURRENT_FUNC_NAME);

    heroBaseInit((Hero *)currentHero, name, max_mana, regenManaRate, ARCHMAGE);
    currentHero->manaRegenModifier = manaModifier;
    heroSpellsInit((Hero *)currentHero, ARCHMAGE_BASIC_SPELL_NAME, ARCHMAGE_BASIC_SPELL_MANA_COST, ARCHMAGE_ULTIMATE_SPELL_NAME, ARCHMAGE_ULTIMATE_SPELL_MANA_COST);
    setHeroFunction((Hero * )currentHero,CAST_BASIC_SPELL,archMageCastBasicSpell);
    setHeroFunction((Hero * )currentHero,CAST_ULTIMATE_SPELL,archMageCastUltimateSpell);
    setHeroFunction((Hero * )currentHero,REGENERATE_MANA,regenManaArchMage);

    return currentHero;
}


void archMageCastBasicSpell(ArchMage* currentArchmage)
{
    if(currentArchmage->instance.currMana >= ARCHMAGE_BASIC_SPELL_MANA_COST)
    {
        currentArchmage->instance.currMana -= ARCHMAGE_BASIC_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n", currentArchmage->instance.name,
                                                    currentArchmage->instance.spells[0].name,
                                                     currentArchmage->instance.spells[0].manaCost);
    }
    else
    {
        printf("%s - not enough mana to cast %s\n",currentArchmage->instance.name,
               currentArchmage->instance.spells[0].name);
    }
}


void archMageCastUltimateSpell(ArchMage* currentArchmage)
{
    if(currentArchmage->instance.currMana >= ARCHMAGE_ULTIMATE_SPELL_MANA_COST)
    {
        currentArchmage->instance.currMana -= ARCHMAGE_ULTIMATE_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n", currentArchmage->instance.name,
                                                    currentArchmage->instance.spells[1].name,
                                                     currentArchmage->instance.spells[1].manaCost);
        regenManaArchMage(currentArchmage);
    }
    else
    {
        printf("%s - not enough mana to cast %s\n",currentArchmage->instance.name,
                                                          currentArchmage->instance.spells[1].name);
    }
}


void regenManaArchMage(ArchMage* currentArchMage)
{
    currentArchMage->instance.manaRegenRate *= currentArchMage->manaRegenModifier;
    currentArchMage->instance.currMana += currentArchMage->instance.manaRegenRate;

    if(currentArchMage->instance.currMana > currentArchMage->instance.maxMana)
    {
        currentArchMage->instance.currMana = currentArchMage->instance.maxMana;
    }
}








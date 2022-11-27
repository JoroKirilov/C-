#include "ArchMage.h"
#include "Defines.h"
#include "../include/Hero.h"
#include <stdlib.h>
#include <string.h>


void archMageCastBasicSpell(ArchMage* currentArchmage){

    if(currentArchmage->instance.currMana >= ARCHMAGE_BASIC_SPELL_MANA_COST){
        currentArchmage->instance.currMana -= ARCHMAGE_BASIC_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentArchmage->instance.name,currentArchmage->instance.spells[0].name,currentArchmage->instance.spells[0].manaCost);
    }
    else{
        printf("%s - not enough mana to cast %s\n",currentArchmage->instance.name,currentArchmage->instance.spells[0].name);
    }
}
void regenManaArchMage(ArchMage* currentArchMage){
    //currentArchMage->archMage.manaRegenRate = (currentArchMage->manaRegenModifier * currentArchMage->archMage.manaRegenRate) + currentArchMage->archMage.manaRegenRate;
    currentArchMage->instance.manaRegenRate *= currentArchMage->manaRegenModifier ;
    currentArchMage->instance.currMana += currentArchMage->instance.manaRegenRate;
    if(currentArchMage->instance.currMana > currentArchMage->instance.maxMana){
        currentArchMage->instance.currMana = currentArchMage->instance.maxMana;
    }

}

void archMageCastUltimateSpell(ArchMage* currentArchmage){
    if(currentArchmage->instance.currMana >= ARCHMAGE_ULTIMATE_SPELL_MANA_COST){
        currentArchmage->instance.currMana -= ARCHMAGE_ULTIMATE_SPELL_MANA_COST;

        printf("%s casted %s for %d mana\n",currentArchmage->instance.name,currentArchmage->instance.spells[1].name,currentArchmage->instance.spells[1].manaCost);
        regenManaArchMage(currentArchmage);
    }
    else{
        printf("%s - not enough mana to cast %s\n",currentArchmage->instance.name,currentArchmage->instance.spells[1].name);
    }

}


//void (*archMageFunctions[3])(ArchMage * ) = { archMageCastBasicSpell,archMageCastUltimateSpell ,regenManaArchMage };


ArchMage *initArchMage( char name[MAX_HERO_NAME_SIZE+1] , int max_mana, int regenManaRate ,int manaModifier){
    ArchMage *currentHero = (ArchMage*) calloc(1, sizeof(ArchMage));
    //error handling

    heroBaseInit((Hero *)currentHero, name, max_mana, regenManaRate, ARCHMAGE);
    currentHero->manaRegenModifier = manaModifier;
    heroSpellsInit((Hero *)currentHero, ARCHMAGE_BASIC_SPELL_NAME, ARCHMAGE_BASIC_SPELL_MANA_COST, ARCHMAGE_ULTIMATE_SPELL_NAME, ARCHMAGE_ULTIMATE_SPELL_MANA_COST);

    //casting spells functions
    //currentHero->basic_spell_cast =archMageFunctions[0]; //G
    //ultimate_spell_cast = archMageFunctions[1];          //G
    //currentHero->regenerateMana =

    return currentHero;
}

void archMageAction(ArchMage* currentArchmage,int* current_choice){
   // printf("%d",*current_choice);
    if(*current_choice == CAST_BASIC_SPELL)
    {
        archMageCastBasicSpell(currentArchmage);
        //currentArchmage->action(currentArchmage);
    }
    else if(*current_choice == CAST_ULTIMATE_SPELL)
    {
        archMageCastUltimateSpell(currentArchmage);
    }
    else if(*current_choice == REGENERATE_MANA){
        regenManaArchMage(currentArchmage);
    }
}


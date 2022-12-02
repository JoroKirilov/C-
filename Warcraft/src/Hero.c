#include "Hero.h"
#include <string.h>



void setName(Hero *const hero, const char *name)
{
    strcpy(hero->name, name);
}


void setMaxMana(Hero *const hero, const int16_t maxMana)
{
    hero->maxMana = maxMana;
}


void setCurrMana(Hero *const hero, const int16_t currMana)
{
    hero->currMana = currMana;
}


void setManaRegenRate(Hero *const hero, const int16_t manaRegenRate)
{
    hero->manaRegenRate = manaRegenRate;
}


void setHeroClass(Hero *const hero, int16_t heroClass)
{
    hero->heroClass = heroClass;
}

void setBasicSpellName(Hero *hero, const char *basicSpellName)
{
    strcpy(hero->spells[0].name , basicSpellName);
}


void setBasicSpellManaCost(Hero *hero, const int16_t basicSpellManaCost )
{
    hero->spells[0].manaCost = basicSpellManaCost;
}


void setUltimateSpellName(Hero *hero, const char *ultimateSpellName)
{
    strcpy(hero->spells[1].name , ultimateSpellName);
}


void setUltimateSpellManaCost(Hero *hero, const int16_t ultimateSpellManaCost)
{
    hero->spells[1].manaCost = ultimateSpellManaCost;
}


void heroBaseInit(Hero *hero,
                  const char *inputName,
                  int16_t inputMaxMana,
                  int16_t inputManaRegenRate,
                  int16_t heroClass)
{
    setName(hero, inputName);
    setMaxMana(hero, inputMaxMana);
    setCurrMana(hero, inputMaxMana);
    setManaRegenRate(hero, inputManaRegenRate);
    setHeroClass(hero, heroClass);
}

void heroSpellsInit(Hero *hero,
                    const char *basicSpellName,
                    const int16_t basicSpellManaCost,
                    const char *ultimateSpellName,
                    const int16_t ultimateSpellManaCost)
{
    setBasicSpellName(hero, basicSpellName);
    setBasicSpellManaCost(hero, basicSpellManaCost );
    setUltimateSpellName(hero, ultimateSpellName);
    setUltimateSpellManaCost(hero, ultimateSpellManaCost);
}

void RegenManaDefault(Hero* currentHero)
{
    currentHero->currMana += currentHero->manaRegenRate;

    if(currentHero->currMana > currentHero->maxMana)
    {
        currentHero->currMana = currentHero->maxMana;
    }
}


void heroAction(Hero* currentHero,const  uint8_t * const current_choice)
{
    currentHero->heroActions[*current_choice](currentHero);
}



void setHeroFunction(Hero* hero, uint8_t idxAction, void* action)
{
    hero->heroActions[idxAction]= action;
}










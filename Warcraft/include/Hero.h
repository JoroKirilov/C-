#ifndef HERO_H_
#define HERO_H_

#include <form.h>
#include "Defines.h"
#include "Vector.h"

#define MAX_SPELL_NAME_SIZE 20
#define MAX_HERO_NAME_SIZE 20
#define MAX_SPELLS 2

typedef struct {
  char name[MAX_SPELL_NAME_SIZE];
  int16_t manaCost;
} Spell;

typedef struct {
    Spell spells[MAX_SPELLS];
    char name[MAX_HERO_NAME_SIZE];
    int16_t maxMana;
    int16_t currMana;
    int16_t manaRegenRate;
    int16_t heroClass;
} Hero;

typedef struct {
    Vector party;
    Vector actions;
    int16_t turns;
}Party;

void setName(Hero *const hero, const char *name);

void setMaxMana(Hero *const hero, const int16_t maxMana);

void setCurrMana(Hero *const hero, const int16_t currMana);

void setManaRegenRate(Hero *const hero, const int16_t manaRegenRate);

void setHeroClass(Hero *const hero, int16_t heroClass);

void setBasicSpellName(Hero *hero, const char *basicSpellName);

void setBasicSpellManaCost(Hero *hero, const int16_t basicSpellManaCost );

void setUltimateSpellName(Hero *hero, const char *ultimateSpellName);

void setUltimateSpellManaCost(Hero *hero,const int16_t ultimateSpellManaCost);


void heroBaseInit(Hero *hero, const char *inputName, int16_t inputMaxMana,
                  int16_t inputManaRegenRate, int16_t heroClass);

void heroSpellsInit(Hero *hero, const char *basicSpellName,
                    const int16_t basicSpellManaCost, const char *ultimateSpellName,
                    const int16_t ultimateSpellManaCost);

void RegenManaDefault(Hero* currentHero);
//
//void RegenManaAllOthers(Hero * currentHero);



#endif /* HERO_H_ */

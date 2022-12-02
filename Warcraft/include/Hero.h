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

typedef struct Hero{
    Spell spells[MAX_SPELLS];
    char name[MAX_HERO_NAME_SIZE];
    int16_t maxMana;
    int16_t currMana;
    int16_t manaRegenRate;
    int16_t heroClass;
    void (*heroActions[3])(struct Hero * );
} Hero;

typedef struct {
    Vector heroes;
    Vector actions;
    int16_t turns;
}Party;


/**
 * Set hero name
 * @param pointer struct of type Hero
 * @param hero name
 */
void setName(Hero *const hero, const char *name);

/**
 * Set hero maximum mana
 * @param pointer struct of type Hero
 * @param value for maxMana
 */
void setMaxMana(Hero *const hero, const int16_t maxMana);
/**
 * Set hero current current mana
 * @param pointer struct of type Hero
 * @param value for current Mana
 */
void setCurrMana(Hero *const hero, const int16_t currMana);
/**
 * Set hero  mana regenerate rate
 * @param pointer struct of type Hero
 * @param mana Regenerate  Rate
 */
void setManaRegenRate(Hero *const hero, const int16_t manaRegenRate);
/**
 * Set hero current class
 * @param pointer struct of type Hero
 * @param hero as class integer
 */
void setHeroClass(Hero *const hero, int16_t heroClass);

/**
 * Set hero current basic spell name
 * @param pointer struct of type Hero
 * @param basic spell name as char pointer
 */
void setBasicSpellName(Hero *hero, const char *basicSpellName);
/**
 * Set hero current basic spell mana cost
 * @param pointer struct of type Hero
 * @param basicSpellManaCost as integer
 */
void setBasicSpellManaCost(Hero *hero, const int16_t basicSpellManaCost );
/**
 * Set hero current ultimate spell name
 * @param pointer struct of type Hero
 * @param current ultimate spell name
 */
void setUltimateSpellName(Hero *hero, const char *ultimateSpellName);
/**
 * Set hero current ultimate spell mana cost
 * @param pointer struct of type Hero
 * @param  ultimate spell as integer
 */
void setUltimateSpellManaCost(Hero *hero,const int16_t ultimateSpellManaCost);

/**
 * Set hero base atributes
 * @param pointer struct of type Hero
 * @param  ultimate spell as integer
 * @param  ultimate spell as integer
 */
void heroBaseInit(Hero *hero, const char *inputName, int16_t inputMaxMana,
                  int16_t inputManaRegenRate, int16_t heroClass);
/**
 * Set hero base spells
 * @param pointer struct of type Hero
 * @param  basic spell name
 * @param  basic spell mana cost
 * @param  ultimate spell name
 * @param  ultimate spell mana cost integer
 */
void heroSpellsInit(Hero *hero, const char *basicSpellName,
                    const int16_t basicSpellManaCost, const char *ultimateSpellName,
                    const int16_t ultimateSpellManaCost);

/**
 * Default regeneration action of base type hero
 * @param pointer struct of type Hero
 */
void RegenManaDefault(Hero* currentHero);
/**
 * Action of the current hero by givven index
 * @param pointer struct of type Hero
 * @param  current choice(index) of action
 */
void heroAction(Hero* currentHero,const uint8_t *const current_choice);


/**
 * Set hero action
 * @param struct pointer to Hero
 * @param index of the given action
 * void pointer used for the function pointer
 */

void setHeroFunction(Hero* hero,uint8_t idxAction,void *action);





#endif /* HERO_H_ */

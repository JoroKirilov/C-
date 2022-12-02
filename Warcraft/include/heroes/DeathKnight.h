#ifndef DEATHKNIGHT_H
#define DEATHKNIGHT_H
#ifndef HERO_H_
#include "Hero.h"
#endif
/**
 * Initialization of DeathKnight
 * Abstract / Opaque struct of type DeathKnight
 * For full implementation see: DeathKnight.c
 */
typedef struct DeathKnight DeathKnight;


/**
 * Initialization of DeathKnight
 * @param char array of size 20
 * @param int mana
 * @param int max_mana
 * @param int regenMana
 * @param int manaModifier
 * @param Error pointer
 * @return structure pointer of type DeathKnight
 */
DeathKnight * initDeathKnight( char name[MAX_HERO_NAME_SIZE] , int max_mana, int regenManaRate, Error *err);

/**
 * Action basic spell of the DeathKnight
 * @param structure pointer of type DeathKnight
 * @return
 */

void deathKnightActionCastBasicSpell(DeathKnight* currentHero);
/**
 * Action  ultimate spell of the DeathKnight
 * @param structure pointer of type DeathKnight
 */
void deathKnightActionCastUltimateSpell(DeathKnight* currentHero);



#endif //WARCRAFT_DEATHKNIGHT_H

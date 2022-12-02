#ifndef DRAWRANGER_H_
#define DRAWRANGER_H_
#ifndef HERO_H_
    #include "Hero.h"

#endif
/**
 * Initialization of DeathKnight
 * Abstract / Opaque struct of type DeathKnight
 * For full implementation see: DeathKnight.c
 */
typedef struct DrawRanger DrawRanger;

/**
 * Initialization of DrawRanger
 * @param char array of size 20
 * @param int mana
 * @param int max_mana
 * @param int regenMana
 * @param int manaModifier
 * @param Error pointer
 * @return structure pointer of type DrawRanger
 */

DrawRanger * initDrawRanger( char name[MAX_HERO_NAME_SIZE] , int max_mana, int regenManaRate,Error *err);

/**
 * Action basic spell of the DeathKnight
 * @param structure pointer of type DeathKnight
 * @return
 */


void drawRangeActionCastBasicSpell(DrawRanger* currentHero);

/**
 * Action  ultimate spell of the DeathKnight
 * @param structure pointer of type DeathKnight
 */

void drawRangeActionCastUltimateSpell(DrawRanger* currentHero);

#endif //WARCRAFT_DRAWRANGER_H

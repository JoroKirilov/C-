#ifndef ARCHMAGE_H_
#define ARCHMAGE_H_
#ifndef HERO_H_
#include "Hero.h"
#endif
/**
 * Initialization of ArchMage
 * Abstract / Opaque struct of type ArchMage
 * For full implementation see: ArchMage.c
 */
typedef struct ArchMage ArchMage;

/**
 * Initialization of ArchMage
 * @param char array of size 20
 * @param int mana
 * @param int max_mana
 * @param int regenMana
 * @param Error pointer
 * @return structure pointer of type ArchMage
 */

ArchMage * initArchMage( char name[MAX_HERO_NAME_SIZE ] , int max_mana, int regenManaRate ,int manaModifier, Error *err);


/**
 * Action basic spell of the ArchMage
 * @param structure pointer of type ArchMage
 */

void archMageCastBasicSpell(ArchMage* currentArchmage);


/**
 * Action regenerate mana ArchMage
 * @param structure pointer of type ArchMage
 */


void regenManaArchMage(ArchMage* currentArchMage);
/**
 * Action  ultimate spell of the ArchMage
 * @param structure pointer of type ArchMage
 */
void archMageCastUltimateSpell(ArchMage* currentArchmage);




#endif

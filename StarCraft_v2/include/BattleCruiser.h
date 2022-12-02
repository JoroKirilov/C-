#ifndef STARCRAFT_BATTLE_CRUISER_H
#define STARCRAFT_BATTLE_CRUISER_H

#include "ProtossShip.h"
#include "TerranShip.h"

typedef struct battleCruiser {
    TerranShip terranShip;
    uint16_t yamatoDamage;
    uint16_t yamatoLoading;
    uint16_t yamatoCannonLoadingTurns;
} BattleCruiser;


/**
 * Initialize a new ship of type Battle cruiser.
 * @return Error type of error or NO_ERROR
 */
Error initBattleCruiser(BattleCruiser **self, const int16_t shipID);


/**
 * Generate Battle cruiser attack
 * @param BattleCruiser pointer to struct of Battle cruiser ship.
 * @param AttackedShip pointer to struct of protoss ship.
 * @return bool Alive or Destroyed.
 */
void battleCruiserAttacks(BattleCruiser *const attackingShip, ProtossShip *const attackedShip);


/**
 * Check if Battle Cruiser load Yamato Cannon Attack
 * @param BattleCruiser pointer to struct of Battle cruiser ship.
 * @return bool READY or NOT_READY.
 */
bool yamatoIsReady(const BattleCruiser *const self);


/**
 * Set Yamoto loading to zero when used it
 * @param BattleCruiser pointer to struct of Battle cruiser ship.
 */
void regulateYamatoLoading(BattleCruiser *const battleCruiser);


/**
 * Get value of Yamato damage
 * @param BattleCruiser pointer to struct of Battle cruiser ship.
 */
int16_t getYamatoDamage(const BattleCruiser *const battleCruiser);

#endif //STARCRAFT_BATTLE_CRUISER_H

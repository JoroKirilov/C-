#ifndef GAME_LOGIC_H_
#define GAME_LOGIC_H_

#include "Hero.h"
#include "ErrorHandler.h"


/**
 * Main game loop
 * @param still not decided
 */
Error startGame(Party* party);

/**
 * Get usr input :there should be validations maybe in validations.h & *.c
 * @param pointer to structure Party
 */
Error getInputHeroes(Party* party);
/**
 * Get usr input :
 * @param pointer to structure Party
 */
Error getActionsInput(Party* party);


/**
 * free memory : for loop that is freeing memmory allocated as vectors
 * @param still not decided
 */
void deinit(Party *const party);

#endif //WARCRAFT_GAME_LOGIC_H

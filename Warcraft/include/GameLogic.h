//
// Created by aod on 11/24/22.
//

#ifndef GAME_LOGIC_H_
#define GAME_LOGIC_H_

/**
 * Main game loop
 * @param still not decided
 */

int startGame(Party* heroes);

/**
 * Init heroes by given heroClass :see hero struct
 * @param still not decided
 */

void initHeroes();



/**
 * Get usr input :there should be validations maybe in validations.h & *.c
 * @param still not decided
 */


void getNumberOfActions(Party* heroes);

/**
 * free memory : for loop that is freeing mem **heroes in order to change the adress of the pointer
 * @param still not decided
 */


void deInitHeroes();

void getUserInputHeroes(Party *heroes);






#endif //WARCRAFT_GAME_LOGIC_H

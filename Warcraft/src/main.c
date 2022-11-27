#include <stdio.h>
#include <stdlib.h>
#include "Hero.h"
#include "GameLogic.h"

int main() {

    Party heroes;
    getUserInputHeroes(&heroes);
    getNumberOfActions(&heroes);
    startGame(&heroes);


    return EXIT_SUCCESS;
}
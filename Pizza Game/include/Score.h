#ifndef SCORE
#define SCORE

#include<stdint.h>
#include "defines.h"

void scoreCalculation( uint16_t customerOutside ,int16_t *score );

GameResult checkGameResult ( int16_t score) ;


#endif // SCORE
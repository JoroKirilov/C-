#include "headers/initArrays.h"


void initArrays ( const uint16_t inputDataArr[],
                  uint16_t fruitsWeightArr[],
                  uint16_t exactCombinationArr[],
                  const uint16_t numberOfFruits ) 
{
    uint16_t idx = 0 ; 

    for (idx = 0; idx < numberOfFruits  ; idx++)
    {
        fruitsWeightArr[idx] = inputDataArr[idx + 1];
        exactCombinationArr[idx] = 0 ; 
    }
}
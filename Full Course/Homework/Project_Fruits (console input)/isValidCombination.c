#include "isValidCombination.h"
#include "stdtype.h"
#include <stdio.h>
#include <stdbool.h>

#define DESIRED_WEIGHT 1000

bool checkValidCombinations(
    const uint16 fruitsCombination[] ,
    uint16 validCombination[],
    const uint16 numberOfFruits ,
    uint16 *sizeOfArr  ) 
{   

    bool isValid = false;
    uint16 p = 0 ;
    uint16 idx = 0 ;
    uint16 sumOfFruitsWeight = 0 ;
    uint16 j = 0 ;
    
    for (p = 0; p < numberOfFruits ; p++ )
    {
        if (isValid)
        {
            break;
        }
        validCombination[0] = fruitsCombination[p];
        j = 1;
        *sizeOfArr = j ;   

        if(validCombination[0] == DESIRED_WEIGHT)
        {
        isValid = true;
        break ;
        }
        else
        {
            sumOfFruitsWeight = fruitsCombination[p] ; 
           
            for( idx = 0  ; idx < numberOfFruits ; idx++)
            {
                if (idx != p)
                {     
                    sumOfFruitsWeight += fruitsCombination[idx];

                    if (sumOfFruitsWeight == DESIRED_WEIGHT)  
                    {
                        validCombination[j] = fruitsCombination[idx];
                        *sizeOfArr += 1 ;
                        isValid = true ;
                        break; 
                    }
                    else if (sumOfFruitsWeight < DESIRED_WEIGHT)                                        
                    {
                        validCombination[j] = fruitsCombination[idx];
                        j++;
                        *sizeOfArr = j;
                    }
                    else
                    {
                        sumOfFruitsWeight -= fruitsCombination[idx];
                    }
                }
            }
        } 
    }
    return isValid;
}
#include "isInputInCorrectRange.h"
#include<stdio.h>

#define NUMBER_OF_FRUITS 0


void IsInCorrectRange (const uint16_t inputDataArr[] ,const uint16_t rowCount ) 
{
    uint16_t weightFruits = 0 ; 
    if(inputDataArr[NUMBER_OF_FRUITS] < 1 || inputDataArr[NUMBER_OF_FRUITS] > 50)      // allowed range for fruits (1 to 50)
    {      
        printf("%s failed. Fruits must be in range from 1 to 50\n", __func__);
        return;         
    }

    for (weightFruits = 1; weightFruits < rowCount; weightFruits++)
    {
        if (inputDataArr[weightFruits] < 1 || inputDataArr[weightFruits] > 1000)  // allowed range for weights of fruits (1 to 1000)
        {
            printf("%s failed. Weight must be in range from 1 to 1000 g.\n", __func__);
            return; 
        }    
    }
    
}


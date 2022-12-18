#include "headers/checkIsExactCombination.h"

#define DESIRED_WEIGHT 1000
#define FIRST_FRUIT 0 

bool checkIsExactCombination(
    const uint16_t fruitsCombination[] ,
    uint16_t exactCombination[],
    const uint16_t numberOfFruits ,
    uint16_t *combinationSize ) 
{   

    uint16_t i = 0 ; 
    uint16_t p = 0 ; 
    uint16_t j = 0 ;
    uint16_t wantedAmount = 0 ;  
    uint16_t idxArr = 1 ; 
    uint16_t tempArr[numberOfFruits];
    
    for(p = 0 ; p < numberOfFruits ; p++) // most outer loop is for set first element in supposed combination
    {   
        for (i = 0; i < numberOfFruits; i++)
        {
            tempArr[i] = fruitsCombination[i] ;  // every iteration restore the values of the origin array  
        }
        
        exactCombination[FIRST_FRUIT] = tempArr[p] ; 

        if(exactCombination[FIRST_FRUIT] == DESIRED_WEIGHT) // check if we have one fruit with desired weight
        {
                return true; 
        }

        for(i = 0 ; i < numberOfFruits ; i++)   // middle loop add second fruit and calculate WANTED REMAINING AMOUNT
        {
            if(p != i  )
            {
                if (tempArr[i] + tempArr[p] == DESIRED_WEIGHT)  // another check if we reach the desired weight
                {
                    exactCombination[idxArr] = tempArr[i];
                    idxArr++;
                    *combinationSize = idxArr ;
                    return true ;
                }
                
                if(tempArr[i] + tempArr[p] < DESIRED_WEIGHT)  
                {
                exactCombination[idxArr]  = tempArr[i]; 
                idxArr++;
                wantedAmount = DESIRED_WEIGHT - (tempArr[p] + tempArr[i]);   // calculate WANTED REMAINING AMOUNT

                    for(j = 0 ; j < numberOfFruits ; j++)  // most inner loop used for searching REMAINING AMOUNT                 
                    {
                        if(j != p && j != i)
                        {
                            if(wantedAmount == tempArr[j])  // check if element value is equal to wanted remaining amount
                            {
                          
                                exactCombination[idxArr] = tempArr[j];
                                idxArr++;
                                *combinationSize = idxArr ;          
                                return true ;
                           
                            }
                            else if(wantedAmount > tempArr[j] )  // check next elemnt value is bigger than remaining amount
                            {  
                                if(tempArr[j] != 0)
                                {
                                wantedAmount = wantedAmount - tempArr[j]; // we recalculate WANTED REMAINING AMOUNT
                                exactCombination[idxArr] = tempArr[j];
                                idxArr++ ;
                                }  
                            }
                         }
                    }
            idxArr= 1 ;        // set index start from second element
            tempArr[i] = 0 ;  // reset the unnecessary value from the array
            }
          }
        }
    }
    return false ; 
}
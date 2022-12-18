#include "headers/getInput.h"
#include "headers/validInput.h"
#include "headers/initArrays.h"
#include "headers/sortArr.h"
#include "headers/checkIsExactCombination.h"
#include "headers/printResult.h"

#define MAX_INPUT 100
#define FIRST_ROW 0

int main()
{  
    uint16_t combinationSize = 1 ;  //start from the first fruit element
    uint16_t numberOfFruits = 0 ;
    uint16_t inputDataArr[MAX_INPUT] ;
    bool isExactCombination = false ; 
    
    getInput(inputDataArr) ;
    
    numberOfFruits = inputDataArr[FIRST_ROW]; // get number of fruits from first row in input
    
    uint16_t fruitsWeightArr[numberOfFruits] ;
    uint16_t exactCombinationArr[numberOfFruits];

    initArrays(inputDataArr , fruitsWeightArr , exactCombinationArr , numberOfFruits);

    sortArr (fruitsWeightArr , numberOfFruits); 

    isExactCombination = checkIsExactCombination(fruitsWeightArr , exactCombinationArr , numberOfFruits , &combinationSize);

    printResult(isExactCombination , exactCombinationArr , combinationSize);    
}
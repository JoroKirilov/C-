#include<stdio.h>
#include<stdbool.h>
#include "stdtype.h"

#include "takeNumbersOfFruits.h"
#include "initFruitsWeights.h"
#include "isValidCombination.h"
#include "printResult.h"

#define BUFFER_SIZE 100 

int main()
{  
    size_t i ;
    uint16 sizeOfArr = 0 ;
    uint16 numberOfFruits = 0 ;
    bool isValidCombination = false ; 
    bool isValidInput = true ; 
    char buffer[BUFFER_SIZE] ; 
    
    do
    {   
         printf("Enter number of fruits: (from 1 to 50)");
         fgets (buffer , BUFFER_SIZE , stdin);
         isValidInput = parse_int(buffer , &numberOfFruits);
        
    } while (!isValidInput);
    
    

    uint16 fruitsCombinationArr[numberOfFruits] ;
    uint16 validCombinationArr[numberOfFruits] ;

    initFruitsWeights(fruitsCombinationArr , numberOfFruits);

    isValidCombination = checkValidCombinations(fruitsCombinationArr , validCombinationArr , numberOfFruits , &sizeOfArr);
    
    printResult(isValidCombination , validCombinationArr , sizeOfArr); 
    
    printf("Look output.txt file in the same dir for results"); 
    
}
#include "headers/printResult.h"
#include <stdio.h>

void printResult (bool isExactCombination , const uint16_t ExactCombinationArr[] ,const uint16_t combinationSize)
{
    uint16_t idx = 0  ;
    FILE *filePointer = fopen("inputOutput/output.txt" , "w+");

    if (filePointer == NULL)   // checks if the file is open
    {
        printf("%s failed. Open the file failed\n" , __func__);
        return ;
    }
    else 
    {
        if (!isExactCombination)
        {
            fprintf(filePointer , "NO\n");
        }
        else
        {
             if (ExactCombinationArr == NULL)
             {
                printf("%s failed. Array is null.\n", __func__);
                return;
             }
   
             if (combinationSize == 0)
             {           
                printf("%s failed. Zero element size\n", __func__);
                return;
             }
               
                for ( idx = 0; idx < combinationSize; idx++ )
                {
                fprintf(filePointer, "%hu\n" , ExactCombinationArr[idx]);  // print exact combination of weights
                }
        }
    } 
    fclose(filePointer);    
}
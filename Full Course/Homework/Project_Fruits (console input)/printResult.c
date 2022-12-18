#include "printResult.h"
#include "stdtype.h"
#include<stdio.h>
#include <stdbool.h>

void printResult (bool isValid , const uint16 rightCombinationArr[] ,const uint16 sizeOfArr)
{
    uint16 i ;
    FILE *f = fopen("output.txt" , "w+"); 

    if (rightCombinationArr == NULL)
    {
        fprintf(stderr, "%s failed. Array is null.\n", __func__);
        return;
    }
   
    if (sizeOfArr == 0)
    {
        fprintf(stderr, "%s failed. Zero element size\n", __func__);
        return;
    }

    if (isValid)
    {
        for ( i = 0; i < sizeOfArr; i++ )
        {
            fprintf(f, "%hu\n" , rightCombinationArr[i]);
        }
        
    }
    else
    {
        fprintf(f , "NO\n");
    }
}
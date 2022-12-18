#include "initFruitsWeights.h"
#include "stdtype.h"
#include<stdio.h>


void initFruitsWeights (uint16 arrToFill[] ,const uint16 numberOfFruits)
{
    int i ;
    
     printf("%hu\n" , numberOfFruits);
     for (i = 0; i < numberOfFruits; i++)
    {   
        printf("Enter fruit #%d\n" , i + 1 );
        scanf("%hu", &arrToFill[i]);
    }
}
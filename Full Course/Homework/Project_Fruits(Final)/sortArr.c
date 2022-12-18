#include "headers/sortArr.h"
#include<stdint.h>

void sortArr (uint16_t arrToSort[] ,const uint16_t size)
{
    uint16_t j , i ;
    uint16_t tmp ;

    for ( i = 0; i < size; i++)
    {
        for ( j = i + 1 ; j < size; j++)
        {
            if (arrToSort[i] < arrToSort[j])
            {
                tmp =arrToSort[i];
                arrToSort[i] = arrToSort[j];
                arrToSort[j] = tmp ;         
            }
        }   
    }    
}
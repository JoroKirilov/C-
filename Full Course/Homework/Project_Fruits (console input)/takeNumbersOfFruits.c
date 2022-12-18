#include "takeNumbersOfFruits.h"
#include "stdtype.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 4096


bool parse_int(char *string , uint16 *numberOfFruits)
{
    int i = 0 ; 
    int isValidRangeOfNumber ;
    while(isspace(string[i]) == 1) i++ ;

    int lenght = strlen(string); 

    if (lenght == i )
    {
        return false ;
    }

    if (!isdigit(string[i])) return false ; 

    char integerBuffer[BUFFER_SIZE] = {0}; 
    int integer_char = 0 ; 

    while (i < lenght && !isspace(string[i]))
    {
        if (!isdigit(string[i])) return false ; 
        
           integerBuffer[integer_char] = string[i] ;
           integer_char ++ ; 
           i ++ ; 
        
    }

    while (isspace(string[i])) i ++ ; 

    integerBuffer[i] = '\0'; 

    if (string[i] != '\0')
    {
        return false ;
    }
    isValidRangeOfNumber = atoi(integerBuffer); 
    if(isValidRangeOfNumber < 1 || isValidRangeOfNumber > 50)
    {
        return false ;
    }
    
    *numberOfFruits = atoi(integerBuffer) ;
    return true ; 
}
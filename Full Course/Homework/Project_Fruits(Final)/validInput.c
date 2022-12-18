#include "headers/validInput.h"
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 100

bool validInput(const char string[])
{
    uint16_t i = 0 ; 
    uint16_t lenght = strlen(string);
    
    while ( i < lenght - 1 )
    {   
      if (!isdigit(string[i])) return false ; 
      i++; 
    }
    return true ; 
}
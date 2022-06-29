#include <stdio.h>

void reverseWord (void)
{
  
    char string[100] ;
      scanf("%s" , string) ; 
    int indexCounter  ; 
    for (indexCounter = 0 ; string[indexCounter] != 0 ; indexCounter++)
    {
        //empty operator
    }
    
    indexCounter -- ; 
    
    while (string[indexCounter] >= 0 )
    {
        putchar (string[indexCounter]);
        indexCounter--;
    } 
}

int main()
{
   reverseWord();
    
    

    return 0;
}



#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    bool isMatch = false ; 
    char string[10] ;
 
    while (isMatch == false)
    {
           scanf ("%s" , string);
           
        if (strcmp(string , "black") == 0)
        {
        isMatch = true ; 
        printf ("This is the password");
        }
        else
        {
        printf ("Wrong password\n");
        }
    }  
    
    
        
 

return 0;
}

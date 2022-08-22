#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[13];
    char ch2[13];
    int com = 0; 
    
    strcpy(ch1 , "coding");
    strcpy(ch2 , "CODING");
    com = strcmp(ch1 , ch2);
    
    if ( com < 0 )
    {
        printf("ch1 is less than ch2\n");
    }
    else if (com > 0)
    {
        printf("ch2 is less than ch1\n");
    }
    else
    {
        printf("the string is equal\n");
    }
    return 0 ; 
    
}

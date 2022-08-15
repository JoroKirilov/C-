#include <stdio.h>

int readAndReturnOnlyDigits();
int main()
{
    int rezult = (int)readAndReturnOnlyDigits() ; 
    printf("%d" , rezult);
    
   
   

    return 0;
}

int readAndReturnOnlyDigits()
{   //for(int i = 0; i < 3 ; i++)
    //{
    char charecter ;
    scanf("%c" , &charecter);
    if (charecter >= '0' && charecter <= '9')
    {
        return (int)charecter;
    }
    else
    {
        printf("only digits pls");
    }
    //}
     
}
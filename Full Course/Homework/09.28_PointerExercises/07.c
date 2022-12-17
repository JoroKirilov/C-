#include<stdio.h>

void concatString(char str1[] , char str2[])
{
    char concatString[100] ; 
    char *pConcatStr = concatString ;
    char *pnt1 = str1 ; 
    char *pnt2 = str2 ;

    while (*pnt1 != '\0')
    {
        *pConcatStr = *pnt1 ;
        pnt1 ++ ; 
        pConcatStr++ ; 
    }
    *pConcatStr = ' ';
    *pConcatStr++ ;

    while (*pnt2 != '\0')
    {
        *pConcatStr = *pnt2 ;
        pnt2 ++ ; 
        pConcatStr++ ; 
    }
    
    printf("%s" , concatString);
    printf("\n"); 
    
}


int main()
{
    char str1[] = "Hello";
    char str2[] = "World"; 

    concatString(str1 , str2);
}
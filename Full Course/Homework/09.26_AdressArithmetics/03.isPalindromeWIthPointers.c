#include<stdio.h>
#include<string.h>

int main()
{
    int i , j ; 
    int isPalindrome = 1 ; 
    char str[100];
    scanf("%100[^\n]" , str);
    char *p = str ; 
    char *p1 = &str[strlen(str) - 1];

    while (p <= p1)
    {
        if (*p != *p1)
        {
            isPalindrome = 0 ; 
            break; 
            p++ ; p1-- ;
        }
        
    }
    if (isPalindrome == 0 )
    {
        printf("Is not palindrome");
    }
    else{
        printf("Is palindrome");
    }
    
    
    
}
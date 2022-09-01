#include <stdio.h>

int main ()
{
    int isVowelUpperCase ;
    int isVowelLowerCase ;
    char c ;
    printf("Enter one character:\n");
    scanf("%c" , &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c== 'u')
    {
        isVowelLowerCase = 1 ;
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c== 'U')
    {
        isVowelUpperCase = 1 ;
    }

    if(isVowelLowerCase || isVowelUpperCase)
    {
        printf("THe entered character is vowel\n");
    }
    else{
        printf("The entered character is consonant");
    }
}

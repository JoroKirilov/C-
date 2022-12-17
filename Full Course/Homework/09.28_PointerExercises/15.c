/* 15. Напишете програма, която да намери броя на гласни и съгласни букви в
текст, въведен от клавиатурата, като използвате указатели. */

#include<stdio.h>
#include<ctype.h>

void countTypeOfLetters(char str[])
{
    int countVowel = 0 ; 
    int countConsonant = 0 ;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'o' || *str == 'i' || *str == 'e' || *str == 'u'
        || *str == 'A' || *str == 'O' || *str == 'I' || *str == 'E' || *str == 'U')
        {
            countVowel++; 
        }
        else
        {
            if (*str != ' ')
            {
               countConsonant++ ;
            }     
        }
        str++ ; 
    }  
    printf("Vowel = %d and consonant = %d\n" , countVowel , countConsonant); 
}

int main()
{
    char str[100] ;
    printf("Input your string :"); 
    scanf("%100[^\n]" , (str));
    printf("%s---" , str);

   countTypeOfLetters(str) ;
}
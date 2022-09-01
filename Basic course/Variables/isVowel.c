#include <stdio.h>

int main ()
{

    char c ;
    printf("Enter one character:\n");
    scanf("%c" , &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c== 'u')
    {

        printf("The character is lower case and is vowel");

    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c== 'U')
    {
       printf("The character is upper case and is vowel");

    }
    else
    {
        printf("The entered character is consonant");
    }
}

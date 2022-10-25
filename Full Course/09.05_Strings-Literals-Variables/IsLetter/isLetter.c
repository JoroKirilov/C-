#include<stdio.h>

int isLetter(char c)
{
    return (c >= 'a' && c <= 'z' || c>= 'A' && c<= 'Z');
}
int main ()
{
    char c ;
    scanf("%c" , &c);
    if(isLetter(c) == 1)
    {
         printf("C is letter");
    }
    else
    {
        printf("C is not a letter");
    }

}

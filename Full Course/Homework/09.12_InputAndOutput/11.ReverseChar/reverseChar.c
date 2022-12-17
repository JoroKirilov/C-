/* Упражнение 11*. Напишете функция void reverse(char s[]), която обръща
низа char s[]. */

#include<stdio.h>
#include<string.h>

void reverse(char s[])
{
    for(int i = strlen(s) ; i >= 0 ; i--)
    {
        putchar(s[i]);
    }
}

int main ()
{
    char s[100] ;
    gets(s);
    reverse(s);
}

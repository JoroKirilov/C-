//4. Напишете програма, която копира входа си на изхода, като
//замества всеки низ повече от една шпации, с една единствена
//шпация.

#include<stdio.h>

int main()
{
    int count = 0 ;
    char c ;
    while((c =getchar()) != EOF)
    {
        if(c == ' ')
        {
            count++;
        }
        if(c != ' ')
        {
            count = 0;
        }
        if(count > 1)
        {
            continue ;
        }
        putchar(c);
    }
}

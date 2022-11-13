#include<stdio.h>

int main()
{
    char str[] = "Hello" ;
    int index = 0;

    while(str[index] != 0)
    {
        if(str[index] == 'l')
        {
            str[index] = 'x' ;
        }

        printf("%c" , str[index]);
        index++;


    }




}

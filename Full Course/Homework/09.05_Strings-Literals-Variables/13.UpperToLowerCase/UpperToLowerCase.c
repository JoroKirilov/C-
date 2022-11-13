#include<stdio.h>


int main()
{
    char str[] = "HELLO";
    int index = 0 ;

    while(str[index] != 0 )
    {
        str[index] = tolower(str[index]);
        printf("%c" , str[index]);

        index++ ;
    }

}

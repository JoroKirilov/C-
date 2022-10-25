#include<stdio.h>
#include<string.h>

int main ()
{
    char str[] = "Hello" ;
    int i = strlen(str);

    while(i >= 0 )
    {
        printf("%c" , str[i]) ;
        i -- ;
    }

}

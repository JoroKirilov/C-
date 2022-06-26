#include <stdio.h>
#include <string.h>

int main ()
{
    char command[10];
    scanf("%s", command);
    if (strcmp(command , "Johnny!") == 0)
    {
        printf("Hello , my love!");
    }
    else 
    {
        printf("Hello , %s" , command);
    }
}

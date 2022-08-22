#include <stdio.h>
#include <string.h>

int main ()
{
    int numberOfMessage , command ;
    scanf("%d\n", &numberOfMessage);
    for(int i = 0 ; i < numberOfMessage ; i++)
    {
        scanf("%d", &command);
        if (command == 88) 
        {
            printf("Hello\n");
        }
        else if (command == 86)
        {
            printf("How are you?\n");
        }
        else if (command != 86 && command < 88)
        {
            printf("GREAT!\n");
        }
        else
        {
            printf("Bye.\n");
        }
    }
 
}

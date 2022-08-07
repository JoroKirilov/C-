
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int price = 130 ; 
    char color[10];
    
    bool isColor = 0 ;
    int number = 44; 
    printf("Enter color\n");
    scanf("%s" , color);
    
    
    bool canIReturn = 1 ; 
    if(price <= 150 && (number == 44 || number == 45) && strcmp(color , "black") == 0 && canIReturn)
    {
        printf("I have new sneakers");
    }
    else 
    {
        printf("I must keep looking for my new sneakers");
    }
    return 0;
}

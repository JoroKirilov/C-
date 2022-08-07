
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int price = 130 ; 
    char color[10];
    char mycolor[10] = "black";
    bool isColor = 0 ;
    int number = 44; 
    printf("Enter color\n");
    scanf("%s" , color);
    
    if (strcmp(color, mycolor) == 0 ) 
    {
        isColor = 1 ; 
    }
    
    bool canIReturn = 1 ; 
    if(price <= 150 && (number == 44 || number == 45) && canIReturn && isColor)
    {
        printf("I have new sneakers");
    }
    else 
    {
        printf("I must keep looking for my new sneakers");
    }
    return 0;
}

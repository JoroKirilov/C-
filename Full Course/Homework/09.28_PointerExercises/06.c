#include<stdio.h>

int findLenOfString(char str[]);

    
int main()
{
    char str [100] ;
    printf("Input your string: ");
    fgets(str,  sizeof(str) , stdin);
    
    printf("%d" , findLenOfString(str)); 
}



int findLenOfString(char str[])
{
    char* ptr = str ; 
    int count = 0; 

    while (*ptr != '\0')
    {
        count++ ;
        ptr++ ;
    }
    return count - 1 ;
    
}
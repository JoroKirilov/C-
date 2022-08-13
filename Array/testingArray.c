

#include <stdio.h>

int main()
{
    int numbers[5] ; 
    for (char i = 0 ; i < 5 ; i ++)
    {
        printf("I expect number %d :" , i);
        scanf("%d" , &numbers[i]);
       
        
    }
    printf("Your arr contains :\t");
    for (char i = 0 ; i < 5 ; i ++)
    {
        printf("[%d]%d\t",i , numbers[i]);
    }

    return 0;
}

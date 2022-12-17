#include<stdio.h>

int main()
{
    int sum = 0 ;
    int i , j ;
    int arrNum[10] ; 
    for ( i = 0; i < 10; i++)
    {
        printf("#%d : " , i+1);
        scanf("%d",  &arrNum[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arrNum[i] % 2 != 0)
        {
            sum += arrNum[i];
        }
        
    }
    printf("%d\n" , sum);
    for ( i = 0; i < 10; i++)
    {
        printf("%d " , arrNum[i]);
    }
    
    
    
}
#include<stdio.h>

int main()
{
    int i ;
    int arr[10]; 
    int *pArr = arr ;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d" , pArr +i) ;
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d " , *(pArr + i) );
    }
    
}
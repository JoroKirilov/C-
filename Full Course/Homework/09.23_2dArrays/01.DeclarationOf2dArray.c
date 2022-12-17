/* Задача 1. Декларирайте двумерен масив с по 5 елемента (5 x 5). След като
сте готови, направете въвеждане на данните в масива, като четете от
потребителя със scanf. Отпечатайте масива в конзолата, спазвайки броя
редове и колони. */

#include<stdio.h>

void fillArray( int arr[][5]  ,int row , int col)
{
    int i , j ;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    
}

void printArray(int arr[][5]  ,int row , int col)
{
    int count = 0;
    int i, j ;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            if (count >= 5)
            {
                printf("\n");
                printf("-----------");
                printf("\n");
                count = 0 ; 
            }
            count++;

            
            printf("%d ", arr[i][j]);
        }
        
    }
    printf("\n");
    
}

int main()
{
    int arr[5][5] ; 

    fillArray(arr , 5 , 5);

    printArray(arr , 5 , 5);

    
}
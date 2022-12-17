//11. Напишете програма, която сортира масив, въведен от клавиатурата, използвайки указатели.


#include<stdio.h>

#define SIZE 10

void sortArr(int arr[] , int size)
{
    int temp , i , j ;

    for ( i = 0; i < size; i++)
    {
        for ( j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp ; 
            }
            
        }
        
    }
    
}

int main()
{
    int i ; 
    int arrNum[SIZE];
    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d" , &arrNum[i]);
    }

    sortArr(arrNum , SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        printf("%d - " , arrNum[i]);
    }
        
}
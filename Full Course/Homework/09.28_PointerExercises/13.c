//13. Напишете програма, която намира максималния и минималния елементи в масив, използвай указатели.

#include<stdio.h>
#define SIZE 7

void findMaxNum(int arr[], int size);
void findMinNum(int arr[], int size);

int main()
{
    int arrNum[] = {-223, -34, 54, 65, 65, 34, 3};

    findMaxNum(arrNum, SIZE);
    findMinNum(arrNum, SIZE);
}

void findMaxNum(int arr[], int size)
{
     
    int *ptrArr = arr ; 
    int maxNum = *ptrArr ; 
    for ( ; ptrArr < &arr[SIZE - 1] ; ptrArr++)
    {
        if (maxNum < *(ptrArr + 1))
        {
            maxNum = *(ptrArr + 1);
        }
        
    }
    printf("Max number in array is :%d\n" , maxNum);
    
}
void findMinNum(int arr[], int size)
{
     
    int *ptrArr = arr ; 
    int minNum = *ptrArr ; 
    for ( ; ptrArr < &arr[SIZE - 1] ; ptrArr++)
    {
        if (minNum > *(ptrArr + 1))
        {
            minNum = *(ptrArr + 1);
        }
        
    }
    printf("Min number in array is :%d\n" , minNum);
    
}
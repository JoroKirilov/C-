#include<stdio.h>

#define SIZE 5

void searchNumInArray(int arr[], int size, int key)
{
    int *ptr = arr ;
    int count = 0 ;
    
    for ( ; ptr <= &arr[size] ; ptr++ )
    {
        if (*ptr == key )
        {
            printf("Number %d is in array on %d position " , key , count + 1);
        }
        count++ ;
    }
    
}

int main()
{
    int i ; 
    int key = 3 ;
    int arr[5] = {1 ,2 ,3 ,4 ,5};
    
    searchNumInArray(arr , SIZE , key);

 
    
}
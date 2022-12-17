#include<stdio.h>

#define SIZE 5

void changeElementsOfArrays(int arr[], int arr2[], int size)
{
    int temp ; 
    int *ptr = arr ;
    int *ptr1 = arr2 ;
    for ( ; ptr < &arr[size] ; ptr++ , ptr1 ++  )
    {
        temp = *ptr ; 
        *ptr = *ptr1 ;
        *ptr1 = temp ;
    }
    
}

int main()
{
    int i ; 
    int arr[5] = {1 ,2 ,3 ,4 ,5};
    int arr2[5] = {5, 4, 3, 2, 1};
    
    changeElementsOfArrays(arr , arr2 , SIZE);

    for ( i = 0; i < 5; i++)
    {
        printf("%d " , arr2[i]);
    }
    

}
#include<stdio.h>

#define SIZE 5

void reverseArray(int arr[], int size)
{
    int temp ; 
    int *ptr = arr ;
    int *ptr1 = &arr[size - 1] ;
    for ( ; ptr <= ptr1 ; ptr++ , ptr1--)
    {
        temp = *ptr;
        *ptr = *ptr1;
        *ptr1 = temp;
    }
    
}

int main()
{
    int i ; 
    int arr[5] = {1 ,2 ,3 ,4 ,5};
    
    reverseArray(arr , SIZE);

    for ( i = 0; i < 5; i++)
    {
        printf("%d " , arr[i]);
    }
    
}
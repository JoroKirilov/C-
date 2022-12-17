
#include<stdio.h>

#define SIZE 5

void copyArrays(int arr[], int copyArr[], int size)
{
    int *ptr = arr ;
    int *ptr1 = copyArr;
    for ( ; ptr < &arr[size] ; ptr++ , ptr1 ++  )
    {
        *ptr1 = *ptr;    
    }
    
}

int main()
{
    int i ; 
    int arr[5] = {1 ,2 ,3 ,4 ,5};
    int copyArr[5];
    
    copyArrays(arr , copyArr , SIZE);

    for ( i = 0; i < 5; i++)
    {
        printf("%d " , copyArr[i]);
    }
    

}
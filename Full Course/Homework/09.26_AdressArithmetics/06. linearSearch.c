/* Задача 6. Напишете функцията int linear_search(const int a[], int n, int key);
използвайки адресна аритметика без инкрементиращи променливи. */

#include<stdio.h>

int linear_search(const int a[] , int n , int key)
{
    for (int i = 0; i < n; i++ , a++)
    {
        if (*a == key)
        {
            return 1 ; 
        }
        
    }
    return 0 ; 
    
}

int main()
{
    int arr[] = {1 , 2 , 3 , 65 , 64};
    int result = linear_search(arr , 5 , 4);
    if (result == 1)
    {
        printf("Yes");
    }
    else{
        printf("NO");
    }
}
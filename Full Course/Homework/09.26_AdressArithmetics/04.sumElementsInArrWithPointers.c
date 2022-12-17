/* Задача 4. Напишете функцията за сумиране елементите на масив,
използвайки адресна аритметика вместо инкрементиращa променливa */

#include<stdio.h>


int sumArr(int arr[])
{
    int i = 0 ;
    int sum = 0 ;
    while (i <= 5)
    {
        sum += *arr ;
        arr++ ;  
        i++ ;
    }
    return sum ; 
     
       
}


int main()
{
    int arr[] = {1 , 2 , 4 , 5 , 7};
    int result ; 
    result = sumArr(arr);
    printf("%d" , result);
}
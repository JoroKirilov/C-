/* Задача 4. Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
където А е обикновен масив от цели числа, n - размера на масива, dir -
посоката, в която да бъде сортиран масива, и ftype - указател към функция,
която приема масив, неговия размер и в каква посока да бъде сортиран
входния масив. ftype трябва да сортира масива във възходящ или низходящ
ред в зависимост от третия параметър на функцията. Принтирайте изходния
и резултатни масиви. */



#include<stdio.h>

typedef void (*ftype) (int arr[] , int n, int dir ) ;

void sort(int *arr , int n , int dir)
{
    int temp = 0 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dir == 1)    
            {                                       //{1, 6, 2, 4, 5};
                if (arr[i] < arr[j])
                {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ; 
                }
            } 
            if (dir == -1)
            {
                if (arr[i] > arr[j])
                {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ; 
                }
            }               
        }
        
        
    } 
}

 void sort_arr(int *arr, int n, int dir, ftype fp)
{
     fp(arr ,  n ,  dir) ; 
    
     for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]) ;
    }
}



int main()
{   
    int n = 5 ;
    int dir = 1 ;
    int A[] = {1, 6, 2, 4, 5};
  
    ftype fp = sort ;

    sort_arr(A , n , dir , fp);
    
   
}
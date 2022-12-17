/* void sort ( int a[], int n){
int i = 0, j = 0, temp = 0;
for ( i = 0; i < n - 1; ++i ){
for ( j = i + 1; j < n; ++j ){
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp; */


#include<stdio.h>

void sort(int a[] , int n)
{
    int temp = 0 ;
    int *p1 = &a[n];
    int *p2 = a ; 
    int *p3 ;
   
    
    for(; p2 < p1 ; p2++)
    {
        for(p3= (p2 + 1) ; p3 < p1 ; p3++)
        {
            if (*p2 > *p3)
            {
            temp = *p2 ; 
            *p2 = *p3 ;
            *p3 = temp ;
            }
        }
    }
}

int main()
{
    int i ; 
    int arr[4] = { 2 , 1 , 3 , 1} ;
    sort(arr , 4); 
    for ( i = 0; i < 4; i++)
    {
        printf("%d " , arr[i]);
    }
    
}

#include <stdio.h>

# define SIZE 5

int arrA [SIZE] = {1 , 2 , 3 , 4 , 5};
int arrB [SIZE];

int main()
{
    printf("Before the copy:\n");
    for(int i = 0 ; i < SIZE ; i ++ )
    {
        printf("%d\t" , arrB[i]);
        arrB[i] = arrA[i] ;
    }
    printf("\nPrint after the copy:\n");
    for (int t = 0 ; t < SIZE ; t ++)
    {
        printf("%d\t" , arrB[t]);
    }
}



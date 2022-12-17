/* Задача 3. Напишете програма, която проверява дали две дадени матрици са
еднакви, сравнявайки съответните елементи в тях. Разпечатайте в конзолата
двете изходни матрици и резултата от сравнението. */

#include<stdio.h>

void isArraysisSame(int row , int col , int arr1[][col] , int arr2[][col] );

int main()
{
     
    int arr1[][4] = {
                    {1, 2, 3, 4},
                    {1, 2, 3, 4},
                    {0, 2, 3, 4},
                    {0, 2, 3, 4}
                   };

    int arr2[][4] = {
                    {1, 2, 3, 4},
                    {1, 2, 3, 4},
                    {0, 2, 3, 4},
                    {0, 2, 3, 4}
                   };
                
isArraysisSame( 4, 4, arr1 , arr2 );



}


void isArraysisSame( int row , int col, int arr1[][col] , int arr2[][col])
{
    int isSame = 0 ; 
    int i , j ; 
    for (i = 0; i < row && isSame == 0; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                isSame = 1 ; 
                break;
            }
           
        }
    }
    if(isSame == 1)
    {
        printf("Two arrays is not the same.\n");
    }
    else
    {
        printf("Two arrays is the same\n");
    }
        
}
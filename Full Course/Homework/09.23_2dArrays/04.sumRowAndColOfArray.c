// Задача 4. Напишете програма, която сумира редовете и колоните на въведена
// от потребителя матрица. Разпечатайте матрицата и резултатите в конзолата.

#include<stdio.h>

void sumArrayRows(int row , int col ,int  arr1[][col]);
void sumArrayCols(int row , int col ,int arr1[][col]);


int main()
{
    int arr1[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
        //{1, 2, 3, 4}
    }; 
  

    sumArrayRows( 3 , 4 , arr1 ) ; 
    sumArrayCols( 3 , 4 , arr1 ) ;




}

//This solution work only if array's rows and cols are equal  


/* void sumArrayRowAndCol(int row , int col ,int arr1[][col] )
{
    int i , j , sumRow ,sumCol;
   

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            sumRow += (arr1[i][j]);
            sumCol += (arr1[j][i]);
            
        }
        printf("Sum of elements row %d = %d\n" , i+1,  sumRow);
        printf("Sum of elements col %d = %d\n" , i+1 , sumCol);
        sumRow = 0 ; 
        sumCol = 0 ;
     
    }
    
} */

void sumArrayRows(int row , int col ,int arr1[][col])
{
    int i , j , sumRow ;
   

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            sumRow += (arr1[i][j]);   
        }
        printf("Sum of elements row %d = %d\n" , i+1,  sumRow);
    
        sumRow = 0 ;
    }
}

void sumArrayCols(int row , int col ,int arr1[][col])
{
    int i , j , sumCols ; 
   

    for ( i = 0; i < col; i++)
    {
        for ( j = 0; j < row; j++)
        {
            sumCols += (arr1[j][i]);   
        }
        printf("Sum of elements cols %d = %d\n" , i+1,  sumCols);
    
        sumCols = 0 ;
    }
}
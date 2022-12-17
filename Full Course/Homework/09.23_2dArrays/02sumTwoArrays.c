// Задача 2. Напишете програма, която събира две матрици (4х4) и записва
// резултата в трета такава със същия размер. Събирането на матриците
// става като намерим сумата на съответстващите елементи в тях. Данните за
// изходните матрици трябва да бъдат въведени от потребителя. Разпечатайте
// трите матрици в конзолата.


#include<stdio.h>

void fillTheArray(int arr[][4] , int row , int col);
void sumTheArray(int arr1[][4] ,int  arr2[][4] , int resultArr[][4] ,int row , int col);
void printArray(int arr[][4], int row , int col);

int main()
{
    int firstArray[4][4] ; 
    int secondArray[4][4] ; 
    int sumArray[4][4] ; 

    fillTheArray ( firstArray , 4 , 4);
    fillTheArray ( secondArray , 4 , 4);

    sumTheArray(firstArray , secondArray , sumArray , 4 , 4);

   

    printArray(sumArray , 4 ,4 );

}

void fillTheArray(int arr[][4] , int row , int col)
{
    int i , j ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("arr[%d][%d]:" , i , j );
            scanf("%d" , &arr[i][j]);
        }
        
    }   
    printf("-------------\n");
}

void sumTheArray(int arr1[][4] ,int  arr2[][4] ,int resultArr[][4] ,int row , int col)
{
    int i , j ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            resultArr[i][j] = arr1[i][j] + arr2[i][j]; 
        }
        
    }    
}


void printArray(int arr[][4] ,int row ,int col )
{
    int i , j ;
    int count = 0 ; 
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (count == row)
            {
                printf("\n");
                printf("-------\n");
                count = 0 ; 
            }
            count++ ; 
            
            printf("%d " , arr[i][j]);
        }
        
    }    
    printf("\n");
}


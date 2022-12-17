// Задача 6*. Напишете програма, която търси дадено число в сортирана по
// редове матрица. Генерирайте елементите на матрицата с rand(). Принтирайте
// матрицата и въведете от клавиатурата търсеното число. Покажете позицията
// му.

#include<stdio.h>
#include<stdlib.h>




void sortArray(int row , int col , int arrNum[][col], int arr[row*col]);
void searchingForNum(int row , int col ,int arrNum[][col]);

int main()
{
    int i , j ; 
    int count = 0;
    int arrNums[4][4] ; 
    int arr[16] ; 
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            arrNums[i][j] = rand() % 10 ;
        }
        
    }
    for ( i = 0; i < 4; i++)
    {      
        for ( j = 0; j < 4; j++)
        {
            if (count == 4)
            {
                printf("\n");
                count = 0 ; 
            }
            count++ ;
            printf("%d " , arrNums[i][j]);       
        }     
    }


    sortArray(4 ,4 , arrNums , arr) ;
   
    
    
    printf("\n--------------------------\n");

    for ( i = 0; i < 4; i++)
    {      
        for ( j = 0; j < 4; j++)
        {
            if (count == 4)
            {
                printf("\n");
                count = 0 ; 
            }
            count++ ;
            printf("%d " , arrNums[i][j]);       
        }     
    }
    printf("\n"); 
   
     searchingForNum(4 , 4 , arrNums) ; 
    
}

void sortArray(int row , int col , int arrNum[][col] ,int arr[col * row])
{
    int temp ; 
    int i , j ;
    int k = 0 ; 
       

// copy 2d array in 1d array                                   
  for (i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
        *(arr + ((i * col) + j)) = *( *(arrNum+i) +j );
    }  
  }

//sort 1d array
  for ( i = 0; i < row * col; i++)
  {
    for ( j = i+1; j < row*col; j++)                    
    {
        if (*(arr+i) > *(arr+j))
        {
            temp = *(arr + i);
            *(arr +i) = *(arr + j);
            *(arr + j) = temp ;
        }   
    }   
  }

    //fill 2d array with sorted 1d array 

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            *(*(arrNum+i) + j) = *(arr + k);
            k++; 
        }
    }
}

void searchingForNum(int row , int col ,int  arrNum[][col])
{
    int i , j ;
    int searchinNum = 0 ; 
    printf("Input searching number :\n");
    scanf("%d" , &searchinNum);

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (searchinNum == arrNum[i][j])
            {
                printf("Searchin number %d is in row %d and col %d\n", searchinNum , i , j );
            }
            
            
        }
        
    }
    

}
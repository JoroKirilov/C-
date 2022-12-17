/* Задача 7*. Напишете програма, която печата броя на уникалните редове в
бинарна матрица, съставена само от единици и нули.
 */

#include<stdio.h>
#define ROW 4
#define COL 4

int main()
{
    int i , j;
    int k = 1; 

    int isSame = 0 ; 
    int unique = 0 ; 
    int count = 0 ;
    int arr[ROW][COL] = {
        {1 , 1 , 0 ,1},
        {1 , 1 , 1 ,1},
        {1 , 0 , 1 ,1},
        {1 , 1 , 1, 1}
                    };
    for(int k = 0 ; k < ROW ; k++)
    {
        for ( i = 0; i < ROW; i++)
        {   
            for ( j = 0; j < COL; j++)
            {
                if(k != i)
                {
                    if (arr[k][j] == arr[i][j])
                    {
                    count++ ; 
                        if (count == 4)
                        {
                        isSame++ ;
                        }        
                    }
                }
    
             }
        count = 0 ; 
        }
        if(isSame < 1)
        {
            unique++ ;
            
        }
        isSame = 0 ;
        
    }
    printf("%d\n" , unique);
}
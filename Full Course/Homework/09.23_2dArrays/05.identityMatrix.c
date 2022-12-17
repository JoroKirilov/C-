/* Задача 5*. Напишете програма, която проверява дали дадена матрица е identity matrix 
- матрица с размер (N x N), където само елементите
 в главния диагонал са единици, а всички останали елементи са нули. */

 #include<stdio.h>

 int main()
 {
    int isIdentity = 1 ;
    
    int arr[4][4] = {
                        {1 , 0 , 0 , 0},
                        {0 , 1 , 0 , 0},
                        {0 , 0 , 0 , 0},
                        {0 , 0 , 0 , 0}
                    };
    


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j && arr[i][j] != 1 )
            {  
                isIdentity = 0 ; 
                break; 
            }
            if (i != j && arr[i][j] != 0)
            {
                isIdentity = 0;
                break ;
            }
                             
        }    
    }
    if (isIdentity == 1 )
    {
        printf("True\n");
    }
    else
    {
        printf("false\n");
    }  
 }

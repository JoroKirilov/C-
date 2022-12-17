/* Напишете програма, която принтира съдържанието на масив, като показва позицията в масива
на горния ред. Пример:
0 1 2 3 4 5 6 7 8 9
| 1| 8| 10| 7| 4| 112| 43| 144| 18| 11| */

#include<stdio.h>

int main()
{   int i ; 
    int arrNum[] = {1 , 8 , 10 , 7 , 4 , 112 , 43 , 144 , 18 , 11 };
    int *pArrNum ; 
    pArrNum = arrNum ;
    for ( i = 0; i < 10; i++)
    {
        printf("%d   " , i );
    }
    
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        
        printf("| %d" , *(pArrNum + i) );
    }
    printf("\n");
    
}

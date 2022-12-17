/* Напишете програма, която въвежда масив от цели числа от клавиатурата. Сортирайте го във
възходящ ред. След това от клавиатурата въведете цяло число и го поставете на правилната
му позиция в масива, така че да не се нарушава реда. Принтирайте масива. */

#include<stdio.h>

int main()
{
    int num , i , j , n ;
    printf("Input number of elements:\n");
    scanf("%d", &n);
    int arrNum[n];
    int *pArrNum ; 
    pArrNum = arrNum ;
    printf("Input %d elements of array\n" , n);

    for ( i = 0; i < n; i++)
    {
        printf("#%d: " ,  i);
        scanf("%d" , pArrNum + i);
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++ )
        {       
           if( *( pArrNum + i) >  *( pArrNum + j ) )
           {
            int temp ; 
            temp = *( pArrNum + i);
            *( pArrNum + i) = *( pArrNum + j );
            *( pArrNum + j ) = temp ;
           } 
        }    
    }

    printf("Input one number\n");
    scanf("%d" , &num);
    for (size_t i = 0; i < n; i++)
    {                                           // 2 , 4 , 5  8 , 12 , 67 
       if (*(pArrNum + i ) > num)                 //   n = 6
       {                                        //  2 > 6   2 > 6  5 > 6  8 > 6                  
           *(pArrNum + i) = num ;
          break;                                
       }
    }   
    
    for (size_t i = 0; i < n; i++)
    {
        printf("%d " , *(pArrNum + i));
    } 
}
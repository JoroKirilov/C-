/* Напишете програма, която да обедини два масива от цели числа, като ги сортира в низходящ
ред и ги принтира. */

#include<stdio.h>

int main()
{
    int i , j ; 
    int firstArr[] = {1 ,3 ,6 ,2 ,44 ,54 ,34 ,23 ,12 ,65};
    int secondArr[] = {43 ,23 ,123 ,543 ,28 ,18 ,54 ,99 ,11 ,12};
    int mainArr[20];
    int *pFirstArr ;
    int *pSecondArr ;
    int *pMainArr ;
    pFirstArr = firstArr ;
    pSecondArr = secondArr ;
    pMainArr = mainArr ; 

    for ( i = 0; i < 10; i++)
    {
        *(pMainArr + i) = *(pFirstArr + i);
        *(pMainArr + 10 + i) = *(pSecondArr + i);

    }
    
    for(i = 0 ; i < 20 ; i++)
    {
        for(j = i + 1 ; j < 20 ; j++)
        {
            if (*(pMainArr + i) > *(pMainArr + j))
            {
                int temp ; 
                temp = *(pMainArr + i);
                *(pMainArr + i) = *(pMainArr + j);
                *(pMainArr + j) = temp ;           
            }
        }
    }
    for ( i = 0; i < 20; i++)
    {
        printf("%d " , *(pMainArr + i));
    }
    
    

}
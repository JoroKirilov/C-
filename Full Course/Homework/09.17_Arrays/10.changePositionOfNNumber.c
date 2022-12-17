//Напишете Програма която да измества всички инстации на число което се намира в масив в крайната му позиция:
//Ако имаме масива [2, 1, 2, 2, 2, 3, 4, 2]
//и числото 2 трябва да изпринтирате масива
//[1, 3, 4, 2, 2, 2, 2, 2].

//Вижте дали можете да направите програмата с 1 цикъл.


#include<stdio.h>

int main()
{
    int i ;
    int n ;
    printf("Enter what number you want to change position: \n");
    scanf("%d" , &n);
    int j = 0 ;
    int k = 0 ;
    int arrNumbers[] = { 2 , 1 , 2 , 2 , 2 , 3 , 4 , 2 };
    int arrTempNums[8] ;

    for(i = 0; i < 8 ; i++)
    {

        if(arrNumbers[i] == n)
        {
            arrTempNums[7 - j] = arrNumbers[i];
            j++;
        }
        if(arrNumbers[i] != n)
        {
           arrTempNums[k] = arrNumbers[i] ;
            k++;
        }
    }
    printf("The reverse array is :");
    for(i = 0 ; i < 8 ; i++)
    {
        printf("%d ", arrTempNums[i]);
    }
}

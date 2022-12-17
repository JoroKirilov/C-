//Прочетете масив от цели числа от клавиатурата. Копирайте
//въведения масив във втори масив, като умножите стойността
//на всеки елемент по 2. Принтирайте двата масива.

#include<stdio.h>

int main()
{
    int arrOrigin[20];
    int arrCopy[20];

    for(int i = 0 ; i < 20 ; i++)
    {
        scanf("%d" , &arrOrigin[i]);


    }
    for(int j = 0 ; j < 20 ; j++)
    {
        arrCopy[j] = arrOrigin[j] * 2 ;
        printf("%d\t" , arrOrigin[j]);
        printf("%d\n" , arrCopy[j]);

    }


}


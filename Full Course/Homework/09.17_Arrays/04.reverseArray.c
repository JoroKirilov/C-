//Напишете програма, която приема 10 цели числа от
//клавиатурата, запазва ги в масив и ги принтира в обратен ред.

#include<stdio.h>

int main()
{
    int arrNum[10] = { };

    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &arrNum[i]);
    }
    for(int j = 9 ; j >= 0 ; j--)
    {
        printf("%d " , arrNum[j]);
    }
}

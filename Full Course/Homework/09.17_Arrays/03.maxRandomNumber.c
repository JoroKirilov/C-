//Напишете програма, която запълва масив от 20 елемента с
//произволно избрани стойности. За целта използвайте функцията
//rand(). Намерете най-голямото число в масива. Принтирайте
//намереното число и масива.

#include<stdio.h>
#include<limits.h>

int main()
{
    int randomNumber[20];
    int maxNum = INT_MIN;


    for(int i= 0 ; i < 20 ; i++)
    {
        randomNumber[i] = rand() % 100 + 1 ;
    }
    for(int j = 0 ; j < 20 ; j++)
    {
        if(randomNumber[j] > maxNum)
        {
            maxNum = randomNumber[j];
        }
        printf("%d  " , randomNumber[j]);
    }
    printf("\n");
    printf("Max number in array is %d " , maxNum);

}

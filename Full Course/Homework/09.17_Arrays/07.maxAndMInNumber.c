//Напишете програма, която да намери максималния и
//минималния елемент в масив от цели числа. Масива трябва да
//бъде въведен от клавиатурата. Принтирайте целия масив и
//резултатите.

#include<stdio.h>
#include<limits.h>

int main()
{
    int arrNumber[20];
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    for(int i = 0 ; i < 20 ; i++)
    {
        scanf("%d" , &arrNumber[i]);
    }
    printf("{ ");
    for(int j = 0 ; j < 20 ; j++)
    {
        if(minNum > arrNumber[j])
        {
            minNum = arrNumber[j];
        }
        if(maxNum < arrNumber[j])
        {
            maxNum = arrNumber[j];
        }
        printf("%d ", arrNumber[j]);
    }
    printf("}\n");
    printf("Max Number = %d\n" , maxNum);
    printf("Min Number = %d\n" , minNum);

}

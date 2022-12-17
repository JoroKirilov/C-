//Напишете програма, която да отделя в два отделни масива
//четните и нечетните числа от даден масив с цели числа. Масива
//да бъде въведен от клавиатурата. Принтирайте оригиналния и
//двата резултатни масива.

#include<stdio.h>

int main()
{
    int arrNum[20];
    int arrEvenNum[20];
    int arrOddNum[20];
    int counterEven = 0;
    int counterOdd = 0;
    printf("Input 20 elements : \n");

    for(int i = 0 ; i < 20 ; i++)
    {
        scanf("%d" , &arrNum[i]);
    }
    printf("Original array is : ");
    for(int j = 0 ; j < 20 ; j++)
    {
        if(arrNum[j] % 2 == 0)
        {
            arrEvenNum[counterEven] = arrNum[j];
            counterEven++;
        }
        else
        {
            arrOddNum[counterOdd] = arrNum[j];
            counterOdd++;
        }
        printf(" %d " , arrNum[j]);
    }
    printf("\n");
    for(int g = 0 ; g < 20 ; g++)
    {
        if(arrEvenNum[g] != 0 || arrOddNum[g] != 0)
        {
            printf("%d\t" , arrEvenNum[g]);
            printf("%d\n" , arrOddNum[g]);
        }
    }

}

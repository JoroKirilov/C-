//Напишете програма, която да завърти даден масив от цели
//числа с N позиции наляво. Масива и числото N трябва да бъдат
//въведени от клавиатурата. Принтирайте оригиналния и
//резултатния масиви.

#include<stdio.h>

int main()
{
    int i , j , n ;
    int temp = 0 ;
    int arrNums[] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100};

    printf("Enter numbers of position to shift:\n");
    scanf("%d" , &n);

    for(j = 0 ; j < n ; j++)
    {
        temp = arrNums[0];
        for(i = 0 ; i < 9 ; i++)
            {
                arrNums[i] = arrNums[i + 1];
            }
            arrNums[9] = temp;
    }
    for(i = 0 ; i < 10 ; i++)
    {
        printf("%d " , arrNums[i]);
    }

}

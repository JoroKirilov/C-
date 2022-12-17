//Напишете програма, която запълва масив от 20 елемента с
//произволно избрани цели числа. За целта използвайте
//функцията rand(). Въведете едно цяло число от
//клавиатурата. Проверете дали въведеното число от
//клавиатурата е намерено в масива. Принтирайте масива и
//отговора дали числото е намерено в масива.


#include<stdio.h>

int main()
{
    int randomNumber[10] = { };
    int guess = 0 ;
    int isTrue = 0 ;

    for(int i = 0 ; i < 10 ; i++)
    {
        randomNumber[i] = rand() %50 + 1;
    }
    printf("Enter one number from 0 to 50\n");
    scanf("%d" , &guess);

    for(int j = 0 ; j < 10 ; j++)
    {
        if(randomNumber[j] == guess)
        {
            isTrue = 1 ;
        }
        printf("%d\n" , randomNumber[j]);
    }

    if(isTrue == 1)
    {
        printf("The number %d is contained in array" , guess);
    }
    else
    {
        printf("The number %d is not contained in array" , guess);
    }
}

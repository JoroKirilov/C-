//Напишете програма, която принтира уникалните елементи от
//масив с цели числа, въведени от клавиатурата. За целта, някои
//от числата трябва да се повтарят.


#include<stdio.h>

int main()
{
    int arrNumber[20];
    int counter = 0 ;
    int current = 0 ;
    int j ;

    for(int i = 0 ; i < 20 ; i++)
    {
        scanf("%d" , &arrNumber[i]);
    }

    for(j = 0 ; j < 20 ; j++)
    {
        for(int x = 0 ; x < 20 ; x++)               // 1 2 3 4 5 5 5 5 5 //
        {
            if(arrNumber[j] == arrNumber[x])
            {
                counter++;

            }
        }
        if(counter == 1)
        {
            printf("Unique numbers is array are :\n");
            printf("%d\n" , arrNumber[j]);
        }
        counter = 0 ;

    }

}

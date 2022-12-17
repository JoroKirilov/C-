//Напишете програма, която да брои колко пъти се среща едно
//число в даден масив от цели числа. Масива трябва да бъде
//въведен от клавиатурата. Принтирайте резултатите.


#include<stdio.h>

int main()
{
    int arrNumbers[5] = { };
    int sameNumber = 0 ;
    int counter = 0 ;
    int i ;
    int a = 0 ;

    for(i = 0 ; i < 5 ; i++)
    {
        printf("Enter numbers for array: \n");
        scanf("%d" , &arrNumbers[i]);
    }

    for(a = 0 ; a < 5 ; a++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(arrNumbers[a] == arrNumbers[j] && a != j )
            {
                sameNumber = arrNumbers[a] ;
                for(int x = 0 ; x < 5 ; x++)
                {
                    if(arrNumbers[x] == sameNumber )
                    {
                        counter++;
                    }

                }
                printf("%d -- %d" , sameNumber , counter);
                return 0 ;
            }
        }

    }
}

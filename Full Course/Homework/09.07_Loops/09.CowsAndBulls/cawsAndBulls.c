#include<stdio.h>

int main()
{   int cows , bulls ;
    int guessPlayer2;
    int num;
    int fourBulls = 0 ;
    printf("Player1 enter 4 digits number:\n");

    scanf("%d", &num);
    int mainNum[] = {
        num / 1000 ,
         num  / 100 % 10 ,
          num / 10 % 10 ,
           num % 10 };

    do
    {

        printf("Player2 what is your guess ? :\n");
        scanf("%d" , &guessPlayer2);
        int guess[] = {
            guessPlayer2 / 1000 ,
             guessPlayer2 / 100 % 10 ,
              guessPlayer2 / 10 % 10 ,
               guessPlayer2 % 10 } ;

        if(mainNum[0] == guess[0] && mainNum[1] == guess[1] && mainNum[2] == guess[2] && mainNum[3] == guess[3])
        {
            fourBulls = 1 ;
        }
        for(int i = 0 ; i < 4 ; i++)
        {
            for(int j= 0 ; j < 4 ; j++)
            {
                if(mainNum[i] == guess[j])
                {
                    if(i == j)
                    {
                        bulls++;
                    }
                    else
                    cows++;
                }
            }
        }
        printf("You have %d cows\n" , cows);
        printf("You have %d bulls\n" , bulls);
        cows = 0 ;
        bulls = 0 ;



    }while(fourBulls != 1);
    printf("You win");

}

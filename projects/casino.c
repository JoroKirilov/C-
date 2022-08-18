#include <stdio.h>

int rules();
int round1();

int main()
{
    rules() ;
    
    printf("\n\n\");
    
    round1();
    
    return 0 ; 
}
   
int round1()
{
    char name[50];
    printf("Enter your name : ");
    scanf("%s" , name);
    
    printf("\n\n");
    
    int deposit1;
    printf("Enter the amount of money to deposit for the game : ");
    scanf("%d" , &deposit1);
    
    printf("\n\n");
    
    printf("Your current balance is %d" , deposit1) ; 
    
    printf("\n\n");
    
    int bet1;
    printf("%s , Enter the money to bet : $" , name);
    scanf("%d" , &bet1) ; 
    
    printf("\n\n");
    
    if(bet1 > deposit1)
    {
      printf("Money Exceeds,\n");
      printf("Enter again : $");
      scanf("%d" , bet1);
    }
    
    printf("\n\n");
    
    int computer1;
    computer1 = rand() % 10 ; 
    
    int guest1 ; 
    printf("Guess a number from 1 to 10 : ") ; 
    scanf("%d" , &guest1);
    
    printf("\n\n");
    
    if(guest1 > 10)
    {
        printf("Number exceeds, \n");
        printf("Enter Again : $");
        scanf("%d" , &guest1);
        
    }
    
    printf("\n\n");
    
    if(guest1 == computer1)
    {
        printf("You have won $%d" , bet1);
        printf("\n\n");
        
        int bet2;
        bet2 = bet1 * 10;
        
        int new_won ; 
        if(bet1 == deposit1)
        {
            new_won = bet2 + 0 ;
        }
        else
        {
            new_won = bet2 + deposit1;
        }
        
        printf("You have won $%d as total" , new_won);
        
    }
    else if(guest1 != computer1)
    {
        printf("You have loss $%d" , bet1);
        printf("\n\n");
        
        printf("The correct number is : %d" , ) /// day 1 
    }
}

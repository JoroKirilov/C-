#include <stdio.h>
#include <stdlib.h>

void add(void);
void sub(void);
void mul(void);
void divide(void);

int main()
{
int choice    ;
printf(" Simple calculator \n");
    do
    {
    printf("\n1 - addition\n");
    printf("2 - substration\n");
    printf("3 - multiplication\n");
    printf("4 - divide\n");
    printf("0 - quit\n");
    printf("choice operation :");
    scanf("%d" , &choice);
    

        if ( choice != 0)
        {
            switch (choice)
            {
                case 1: 
                    add();
                    break;
                case 2: 
                    sub();
                    break;
                case 3: 
                    mul();
                    break;
                case 4: 
                    divide();
                    break;
                default :
                printf("PLease , enter number from 1 to 4 or 0\n");
            }
        }
        else
        {
            printf("Bye bye");
        }
    }    
    while(choice != 0);
    return 0;
}

void add(void)
{
    int number1 , number2 , result ; 
    printf("Enter operant 1:");
    scanf("%d" , &number1);
    printf("Enter operant 2:");
    scanf("%d", &number2);
    result = number1 + number2; 
    printf("operant1 + operant2 = %d\n" , result);
}

void sub(void)
{
    int number1 , number2 , result ; 
    printf("Enter operant 1:");
    scanf("%d" , &number1);
    printf("Enter operant 2:");
    scanf("%d", &number2);
    result = number1 - number2; 
    printf("operant1 - operant2 = %d\n" , result);
}

void mul(void)
{
    int number1 , number2 , result ; 
    printf("Enter operant 1:");
    scanf("%d" , &number1);
    printf("Enter operant 2:");
    scanf("%d", &number2);
    result = number1 * number2; 
    printf("operant1 * operant2 = %d\n" , result);
}

void divide(void)
{
    int number1 , number2 , result ; 
    printf("Enter operant 1:");
    scanf("%d" , &number1);
    printf("Enter operant 2:");
    scanf("%d", &number2);
    result = number1 / number2; 
    printf("operant1 / operant2 = %d\n" , result);
}

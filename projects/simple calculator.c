
#include <stdio.h>

void sub (void) ;
void add (void) ;
void mil (void) ;
void divide (void) ;

int main()
{
    add();
    sub();
}


void add (void)
{
    int op1; 
    int op2;
    int result ; 
    printf("Enter operant 1 : ");
    scanf ("%d" , &op1) ;
    printf("Enter operant 2 : ");
    scanf ("%d" , &op2) ;
    result = op1 + op2 ;
    printf("\n%.2d + %.2d = %.2d", op1 , op2 , result);
}


    void sub(void)
{
/* Локални променливи */
double op1;
double op2;
double result;
/* Четене на операндите от клавиатурата */
printf("Enter operand1: ");
scanf("%lf", &op1);
printf("Enter operand2: ");
scanf("%lf", &op2);
/* Извършване на операцията изваждане */
result = op1 - op2;
/* Отпечатване на резултата */
printf ("\nop1 - op2 = %f\n\n", result);

}

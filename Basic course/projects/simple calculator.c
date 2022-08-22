
#include <stdio.h>
#include <windows.h>

void sub(void);
void add(void);
void mil(void);
void divide(void);

int main()
{

    int x;


    do
    {
        printf("\nChoose operation ! : \n");
        printf("1--add\n2--sub\n3--mil\n4--divide\n0--quit\n");
        scanf_s("%d", &x);
        switch (x)
        {
        case 1: add(); break;
        case 2: sub(); break;
        case 3: mil(); break;
        case 4: divide(); break;
        }
    } while (x != 0);

    printf("Thank you. Good buy . ");
}


void add(void)
{
    int op1;
    int op2;
    int result;
    printf("Enter operant 1 : ");
    scanf_s("%d", &op1);
    printf("Enter operant 2 : ");
    scanf_s("%d", &op2);
    result = op1 + op2;
    printf("\n\t\t%.2d + %.2d = (%.2d)\n", op1, op2, result);
    Sleep(5000);
    system("cls");
}
void mil(void)
{
    int op1;
    int op2;
    int result;
    printf("Enter operant 1 : ");
    scanf_s("%d", &op1);
    printf("Enter operant 2 : ");
    scanf_s("%d", &op2);
    result = op1 * op2;
    printf("\n\t\t%.2d + %.2d = (%.2d)\n", op1, op2, result);
    Sleep(5000);
    system("cls");
}
void divide(void)
{
    int op1;
    int op2;
    int result;
    printf("Enter operant 1 : ");
    scanf_s("%d", &op1);
    printf("Enter operant 2 : ");
    scanf_s("%d", &op2);
    result = op1 / op2;
    printf("\n\t\t%.2d + %.2d = (%.2d)\n", op1, op2, result);
    Sleep(5000);
    system("cls");
}


void sub(void)
{

    int op1;
    int op2;
    int result;

    printf("Enter operand1: ");
    scanf_s("%d", &op1);
    printf("Enter operand2: ");
    scanf_s("%d", &op2);

    result = op1 - op2;

    printf("\n\t\t%.2d - %.2d = (%.2d)\n", op1, op2, result);
    Sleep(5000);
    system("cls");
}

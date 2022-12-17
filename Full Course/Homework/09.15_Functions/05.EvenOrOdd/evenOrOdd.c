//Напишете програма на С, която чрез функция проверява дали
//дадено число е четно или не.

#include<stdio.h>

void isEven(int a)
{
    if (a % 2 == 0)
    {
    printf("Number %d is even\n" , a);
    }
    else
    {
        printf("Number %d is odd\n", a);
    }
}

int main()
{
    isEven(2);
    isEven(3);
    isEven(5);
}



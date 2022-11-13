//Разбийте число като сума от степени на двойката.


#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "01111101";
    int power = 1;
    int sum = 0;
    printf("binary 01111101 = sum of:\n");

    for(int i = strlen(str) - 1 ; i >= 0 ; i--)
    {
        int digit = 0;
        if(str[i] == '1'){
            digit = 1;
        }
        sum += digit * power;
        power *= 2 ;
        if(str[i] == '1')

        printf("%d\t\n", sum);
    }



}

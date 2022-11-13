#include<stdio.h>

int main()
{
    int num1 = 3 ;
    int num2 = 5 ;
    int result ;

    result = num1 & num2;
    printf("%d & %d = %d\n" , num1 , num2 , result );

    result = num1 | num2 ;
    printf("%d | %d = %d" , num1 , num2 , result );

    result = num1 ^ num2 ;
    printf("%d ^ %d = %d" , num1 , num2 , result );


}

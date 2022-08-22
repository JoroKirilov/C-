#include <stdio.h>

int result(char a, int b , int c)
{
    int resultOfOperation = 0 ;
   if (a == '+')
    {
       resultOfOperation = b + c; 
    }
    else if (a == '-')
    {
        resultOfOperation = b - c;
    }
    else if (a == '*')
    {
        resultOfOperation = b*c;
    }
    else {resultOfOperation = b / c;
    }
    
}


int main()
{
 char manipulation = '+';
 int num1 = 6;
 int num2 = 6;
 int num3 = 0;
 num3 = result(manipulation , num1 , num2);
 printf("%d" , num3);
}



#include <stdio.h>

int main()
{
   int number , number1  ; 
   scanf("%d%*c%d" , &number, &number1 );
   printf("%dca%d\n" , number , number1);
   printf("%d\n" , number1);
   printf("%d", number);
   
    return 0;
}

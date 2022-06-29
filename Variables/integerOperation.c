#include <stdio.h>

int main()
{
    int num1 , num2 , num3, num4, result ;
  scanf("%d" , &num1 );
  scanf("%d" , &num2 );
  scanf("%d" , &num3 );
  scanf("%d" , &num4 );
  
  result = ((num1 + num2) / num3 ) * num4 ; 
  printf("%d" , result) ; 

    
    return 0;
}

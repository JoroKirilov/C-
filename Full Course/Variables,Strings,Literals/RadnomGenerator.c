

#include <stdio.h>

int randomNumber()
{
    int A ; 
    A ^= A<<13 ;
    A ^= A>>17 ;
    A ^= A<<5 ;
    
}

int main()
{
    int A = 1 ; 
    
  
    printf("%d\n" , randomNumber(A));
    printf("%d\n" , randomNumber(A));
    printf("%d\n" , randomNumber(A));
    printf("%d" , randomNumber(A));

    return 0;
}

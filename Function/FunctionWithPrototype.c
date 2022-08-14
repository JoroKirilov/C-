

#include <stdio.h>
// Prototype
int multiplication() ;


// Program

int main()
{
    int sum = multiplication(4, 6);
    printf("%d" , sum );

    return 0;
}



// Function

int multiplication(int a , int b)
{
    return a * b ; 
}
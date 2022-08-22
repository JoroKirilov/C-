
#include <stdio.h>

int fact(int n )
{
    int result=1;
    for (int i = 1 ; i <= n ; i ++)
    { 
        result *= i;
    }
    return result;
}

int main()
{
    

    int sum ; 
   sum = fact(3) + fact(5);
    printf("%d" , sum);
}
    
    


#include <stdio.h>

    int sum();
    int product();

int main()
{
  
  printf("%d\n" , sum(5 , 3));
  printf("%d\n" , product(sum(4 , 4), 1));
  printf("%d", product(2 , 1));
   
 
   return 0 ;  
}

int sum(int x , int y)
{
    return x + y ;
}

int product(int x , int y)
{
    return x * y ;
}
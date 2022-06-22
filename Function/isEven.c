#include <stdio.h>

int isEven(int num)
{
    if(num % 2 == 0)
    {
    num= 1 ; 
    }
    else
    {
    num = 0 ; 
    }
    return num; 
    
}

int main()
{
    int sumOfEvenOnly = 0 ;
  int numbers[5];
  for(int i = 0 ; i < 5 ; i++)
  {
      scanf("%d\n" , &numbers[i]);
  }
  for(int i = 0 ; i < 5 ; i++)
  {
       
      if (isEven(numbers[i]) == 1)
      {
          sumOfEvenOnly += numbers[i];
      }
  }
  printf("%d" , sumOfEvenOnly); 
  
   
}

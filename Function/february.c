#include <stdio.h>
#include <stdbool.h>
int isYear ()
{
    int Year = 0 ;
    scanf("%d" , &Year);
    return Year;
}
int main()
{
    int feb = 0 ; 
    int trueOrFalse = 0 ;
  int num = isYear();
  if (num % 400 == 0 || num % 4 == 0)
  {
      feb = 29 ; 
      printf("Годината е високосна");
  } 
  else 
  {
      feb = 28 ; 
      printf("Годината не е високосна");
  }
  
  int numberDays = 0 ; 
  scanf("%d" , &numberDays);
  switch(numberDays)
  case: 
  
     
}
 
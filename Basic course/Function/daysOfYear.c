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
      printf("Годината е високосна\n");
  } 
  else 
  {
      feb = 28 ; 
      printf("Годината не е високосна\n");
  }
  int janFeb = feb + 31 ;
  int numberDays = 0 ; 
  scanf("%d" , &numberDays);
  if (numberDays <= 31) {printf("January");}
  else if (numberDays > 31 && numberDays <= janFeb) {printf("February");}
  else if (numberDays > janFeb && numberDays <= janFeb + 31) {printf("March");}
  else if (numberDays > janFeb + 31 && numberDays <= janFeb + 31 + 30) {printf("April");}
  else printf("May ,June ...");
  
  
}
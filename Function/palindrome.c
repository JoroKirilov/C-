#include <stdio.h>

int main()
{
  int n , remainder , original , reversed=0 ;
  printf("Enter a integer number:\n");
  scanf("%d" , &n);
  original = n ; 
  while(n != 0)
  {
      remainder = n % 10 ; 
      reversed = reversed * 10 + remainder;
      n /= 10 ;
  }
  if (original == reversed)
  {
      printf("Number %d is palindrome" , original);
  }
  else
  { 
      printf("Number %d is not a palindrome" , original);
      
  }
  return 0 ;
}


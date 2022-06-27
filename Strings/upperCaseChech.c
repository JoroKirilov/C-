#include <stdio.h>
#include <ctype.h>

int main()
{
    int counterUpperCase = 0 ; 
   int i = 0 ;
 
  char str[50] = "How mUCH uppercases have in That SENTENSE?";
  
  while (str[i] != '\0')
  {
      
      if (isupper(str[i]))
      {
          counterUpperCase += 1;
      }
      
    i++;
  }
  printf("IN THE SENTENSE : %s there are %d uppercases" , str , counterUpperCase);
  
    return 0;
}

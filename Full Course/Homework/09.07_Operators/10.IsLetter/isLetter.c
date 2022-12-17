#include<stdio.h>

void isLetter(char c )
{
   if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
   {
       printf("Is letter");
   }
   else
   {
       printf("Is not letter");
   }

}

int main()
{
    char c ;
    do{
    scanf("%c" , &c);
    isLetter(c);
    } while (c == 0);
}

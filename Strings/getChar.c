#include <stdio.h>
int main(void)
{

 char c;
 
 printf ("Enter text. Include a dot ('.') in a sentence to exit:\n");
 do
 {
 c=getchar(); 
 putchar (c); 
 } while (c != '.');
 putchar('\n');
 return 0 ; 
}
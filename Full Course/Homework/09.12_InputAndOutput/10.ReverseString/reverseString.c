/* Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред. */

#include<stdio.h>

void reverseString(char str[]);


int main()
{
    int c ; 
    char str[200];
    int counter = 0 ;

    while((c = getchar()) != EOF)
          {

              str[counter] = c;
              counter++ ;
          }
          reverseString(str);
        printf("\n");
   /*  while(gets(str) != EOF)
    {
        reverseString(str);
        printf("\n");
    } */
}

void reverseString(char str[])
{
 int i = 0 ;
 int count = 0 ; 
    while (str[i] != '\0' )
    {
        count++ ;
        i++ ;
    }  
    for(int i = count ; i >= 0 ; i-- )
    {
        putchar(str[i]);
    }   
}


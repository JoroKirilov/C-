/* Задача 2. Напишете програма, която чете съобщение от клавиатурата,
 след което го принтира в обратен ред, използвайки адресна аритметика. */


#include<stdio.h>
#include<string.h>


int main()
{
    char str[100] ;
    int i ; 

    scanf("%100[^\n]", str);

    char *ptr = NULL;
    ptr = str ; 
   
          
    for (i = strlen(str)-1  ; i >= 0; i--)
    {
        printf("%c" , *(ptr + i) );  
    }
           
}


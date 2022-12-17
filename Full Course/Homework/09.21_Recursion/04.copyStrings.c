/* Задача 4. Направете функцията :
void copy(char *to, char *from), която копира една
последователност от символи в друга. Разпечатайте на екрана и
двете последователности, за да могат да бъдат сравнени. */

#include<stdio.h>

void copy(char *to , char *from);

int main()
{
    char arr1[] = "abcdefg";
    char arr2[] = "gfedcba";
    copy(arr1 , arr2);

    printf("%s\n" , arr1);
    printf("%s\n" , arr2);


}


void copy(char *to , char *from)
{   
    int i ;
    for ( i = 0; *(from + i) != '\0'; i++)
    {
        *(to + i) = *(from + i) ;
    }
    
}
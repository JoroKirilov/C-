/* Задача 7. Напишете функция void reverse(char src[], char dest[]),
която обръща низа char src[ ], като същевременно го копира в char dest[].
Принтирайте двата низа на екрана, за да могат да бъдат сравнени. */

#include <stdio.h>
#include <string.h>

void reverse(char src[], char dest[] ,int size) 
{
    int i , j ;
    j = size - 1 ;

    for ( i = 0; i <= j ; i++ , j--)
    {
             
            char temp ;  
            temp = *(src+ i);
            *(src+ i) = *(src + j -1 );
            *(src + j -1 ) = temp ;
            *(dest + i) = *(src + i);
            *(dest + j - 1) = *(src + j -1);          
    }
    printf("%s" , src) ;
    printf("\n%s\n" , dest);
}  
 
int main()
{
    char src[] = "Lokomotiv Plovdiv";
    char dest[20] ;
    int size = sizeof(src) / sizeof(src[0]);
  
    reverse(src , dest , size);

    return 0;
}
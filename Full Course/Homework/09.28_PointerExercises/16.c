/* 16. Напишете функция-аналог на стандартната С функция strcmp(), като
използвате указатели.
 */

#include<stdio.h>
#include<string.h>

int myStrcmp(char str1[] , char str2[])
{
    while(*str1 != '\0')
    {
        if (*str1 != *str2)
        {
            if (*str1 > *str2)
            {
                return 1 ;
            }
            else
            return -1 ;
            
        }
        str1++; 
        str2++;
    }
    return 0 ; 
}

int main()
{
    char str1[] = "Hello world" ;
    char str2[] = "Hello world" ;

    printf("%d" , myStrcmp(str1 , str2)); 
}
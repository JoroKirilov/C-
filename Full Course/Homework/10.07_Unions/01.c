/* Задача 1. Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги изведете
на екрана.
 */

#include<stdio.h>
#include<string.h>

union myUnion
{
    int number ; 
    float number1 ;
    char string[10]; 
} uni ;

int main()
{
    uni.number = 10 ; 
    uni.number1 =5.11 ; 
    strcpy( uni.string, "pLOVEdiv");
    
    
    printf("%d , %f , %s ", uni.number , uni.number1 , uni.string ); 
}
/* Задача 4. Дефинирайте тип указател към функция, която изпълнява
определена операция върху две целочислени променливи. Дефинирайте
функции, които изпълняват операциите +, -, *, /. Използвайте новия тип, за да
извикате всяка една от функциите.
 */

#include<stdio.h>

typedef int (*ptr) (int a , int b) ; 
 
int sum (int a , int b)
{
    return a + b ; 
}

int substract ( int a , int b )
{
    return a - b ;
}


int main()
{   
    int a = 10 ; 
    int b = 6 ; 
    ptr pointer ; 
    pointer = sum ; 
    printf("%d\n" , pointer(a , b)) ;
    pointer = substract ; 
    printf("%d\n" , pointer(a , b)) ;
}
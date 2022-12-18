/* Задача 2. Създайте нов потребителски тип към тип long long int. Използвайте го
във функцията printf, отпечатайте размера.
 */

#include<stdio.h>

typedef long long int lld ; 

int main()
{
    lld longNUmber = 9223372036854775807 ; 
    printf("%lld" , longNUmber) ;
}
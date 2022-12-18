/* Задача 3. Дефинирайте потребителски тип към указател.Създайте променлива,
насочете указателя към нея, използвайки новия потребителски тип.
 */
#include<stdio.h>

typedef int * pointer;

int main()
{
    pointer ptr ; 
    int number = 5 ; 
    ptr = &number;
    *ptr = 10 ; 
    printf("%d" , number) ;  


}
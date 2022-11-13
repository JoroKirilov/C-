//Създайте функция setBit. Тя получава следните
//параметри - число и индекс. Функцията трябва да "вдига"
//бита на съответния индекс в числото .


#include<stdio.h>

int setBit(int num , int i)
{
    return (1 << i) | num ;
}

int main()
{
    printf("%d" , setBit(125 , 5));
}

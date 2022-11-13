//Създайте функция reverseBit. Тя получава следните
//параметри - число и индекс. Като резултат функцията
//обръща бита на съответната позиция в числото


#include<stdio.h>

int reverseBit(int num , int i)
{
    return (1 << i) ^ num ;
}

int main()
{
    printf("%d" , reverseBit(125 , 6));
}

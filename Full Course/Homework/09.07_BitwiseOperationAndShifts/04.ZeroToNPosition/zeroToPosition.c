//Създайте функция clearBit. Тя получава като
//параметър число и индекс, и прави на нула бита на
//съответния индекс в числото.

#include<stdio.h>

int clearBit (int num, int i)
{
   return  (~(1 << i) & num) ;
}

int main()
{
    printf("%d" , clearBit(125, 5));
}




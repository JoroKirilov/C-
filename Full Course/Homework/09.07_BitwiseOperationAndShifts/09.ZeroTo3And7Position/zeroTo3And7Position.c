//Направете на нула битовете в числа, намиращи се на
//позиции между 3 и 7


#include<stdio.h>

int main()
{
    int number = 125 ;

    for(int i= 4 ; i <=6 ; i++)
    {
       number = ~(1 << i) & number ;

    }
    printf("%d", number);

}

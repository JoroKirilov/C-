/* Задача 4. Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете функция,
която валидира датата.
 */


#include<stdio.h>

struct Bitfields 
{
    unsigned char b1 : 1 ;
    unsigned char b2 : 1 ;
    unsigned char b3 : 1 ;
    unsigned char b4 : 1 ;
    unsigned char reserve : 4 ;
} bits ;

void initBits (struct Bitfields *p)
{
    int input ; 
    scanf("%d" , &input);
    p->b1 = input ;
    scanf("%d" , &input);
    p->b2 = input ;
    scanf("%d" , &input);
    p->b3 = input ;
    scanf("%d" , &input);
    p->b4 = input ;
}

void show (struct Bitfields obj)
{
    printf("Bit #1 = %d\n" ,  obj.b1 );   
    printf("Bit #2 = %d\n" ,  obj.b2 );   
    printf("Bit #3 = %d\n" ,  obj.b3 );   
    printf("Bit #4 = %d\n" ,  obj.b4 );   
}

int main()
{
    initBits(&bits);
    show(bits);

}
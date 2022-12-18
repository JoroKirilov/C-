/* Задача 3. Дефинирайте структура, която да се състои от цели числа, битови
полета и union. Попълнете всички елементи на структурата, като използвате
операторите “.” и “->” за достъп до елементите. Разпечатайте отделните
елементи, както и размера на структурата. */

#include<stdio.h>
#include<string.h>

#define SIZE_OF_ARR 5

struct Bitfield 
{
    unsigned char b1 : 1 ;
    unsigned char b2 : 1 ;
    unsigned char b3 : 1 ;
    unsigned char b4 : 1 ;
    unsigned char reserve : 4 ;

} ;

typedef union test {
    int n ; 
    char c ;
    char str[10]; 
} test ; 

struct data 
{
    int numbers[5] ;
    test info ; 
    struct Bitfield Bits ;
    
} obj ; 

struct data maker ()
{
    struct data tmp ; 
    tmp.info.c = 'A' ;
    tmp.info.n = 5 ; 
    strcpy(tmp.info.str , "Some string" );
    return tmp ;  
}

void initStruct (struct data *p , int size)
{
    for (size_t i = 0; i < size; i++)
    {
        p->numbers[i] = 100 + i ; 
    }
    
}

void initBits (struct data *p , int a , int  b , int c )
{
    p->Bits.b1 = a ; 
    p->Bits.b2 = b ; 
    p->Bits.b3 = c ; 
}

void show (struct data obj)
{
    for (size_t i = 0; i < SIZE_OF_ARR; i++)
    {
        printf("%d\n" , obj.numbers[i]) ;
    }
    printf("%d\n" , obj.info.n) ;
    printf("%s\n" , obj.info.str );
    printf("%d" , obj.Bits.b1);
    printf("%d" , obj.Bits.b2);
    printf("%d" , obj.Bits.b3);
    printf("%d" , obj.Bits.b4);

}    

int main()
{
    
    obj = maker(obj);
    initStruct(&obj , SIZE_OF_ARR) ;
    initBits(&obj , 1 , 0 , 0 );
    int input ; 
    printf("You need to input last bit\n"); 
    scanf("%d" , &input);
    obj.Bits.b4 = input ;
    show(obj);

    
    
}
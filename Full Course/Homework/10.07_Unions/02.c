/* Задача 2. Напишете обединение от число и низ, както и изброим тип за
съдържанието на обединението. Напишете функция, която получава
указател към обединението и изброимия тип и извежда съответно низ или
число. */

#include<stdio.h>
#include<string.h>

union dataUnion {
    int num ; 
    char s[10];
    int count ;
} obj ; 

typedef union dataUnion data ;

data myfunc (data *p)
{
    p->num = 5 ;
    printf("%d\n" , p->num);
    strcpy(p->s , "String");
    printf("%s\n" , p->s); 
    p->count = sizeof(obj) / sizeof(obj.num);
    printf("Elements in union are : %d" , p->count - 1);
}

int main()
{   
    myfunc(&obj);
}
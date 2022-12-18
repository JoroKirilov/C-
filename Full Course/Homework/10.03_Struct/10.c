/* Задача 10*. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към началника
и на втори пас, указване на всеки служител кой е неговият началник.
 */

#include<stdio.h>

#define SIZE_OF_MEMBERS 2


struct workers {
    int number ; 
    char firstname[10] ;
    char middlename[10];
    char lastname[10];
    char role[10];
    int workYears ; 
    float salary ; 
     
} member[SIZE_OF_MEMBERS] ;

typedef struct workers worker ;



worker maker ()
{
    worker tmp ;
    scanf("%d" , &tmp.number);
    scanf("%s" , &tmp.firstname);
    scanf("%s" , &tmp.middlename);
    scanf("%s" , &tmp.lastname);
    scanf("%s" , &tmp.role);
    scanf("%d" , &tmp.workYears);
    scanf("%d" , &tmp.salary);


}

void printMembers (struct workers memmber[] , int size)
{
    int k ;
    for ( k = 0; k < size; k++)
    {
        printf("%d" , member[k].number);
        printf("%s" , member[k].firstname);
        printf("%s" , member[k].middlename);
        printf("%s" , member[k].lastname);
        printf("%s" , member[k].role);
        printf("%d" , member[k].workYears);
        printf("%f" , member[k].salary);
    }
    
}

int main()
{
    int i ; 
    for ( i = 0; i < SIZE_OF_MEMBERS; i++)
    {
        member[i] = maker ();
    }
    
    printMembers(member ,SIZE_OF_MEMBERS);
}
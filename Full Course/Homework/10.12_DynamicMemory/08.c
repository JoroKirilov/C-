/* Задача 8. Напишете програма, в която се въвеждат пореден номер, име,
фамилия, възраст на участници в маратон. Изискването е за името и
фамилията да не се използват масиви с фиксирана дължина. След като
въвеждането завърши, изведете списък с участниците. */


#include<stdio.h>

#define PARTICIPANTS 2


struct members 
{
    int number ;
    char pFirstName[15] ;
    char pLastName[15] ;
    int age ; 
} marathon[PARTICIPANTS] ; 

int main()
{

     
    for (size_t i = 0; i < PARTICIPANTS; i++)
    {
        printf("Enter number: ");
        scanf("%d" , &marathon[i].number);

        printf("Enter first name: ");
        scanf("%s" , marathon[i].pFirstName);

        printf("Enter last name: ");
        scanf("%s" , marathon[i].pLastName);
        
        printf("Enter age: ");
        scanf("%d" , &marathon[i].age);
    }
    printf("%s" , marathon[0].pFirstName) ; 
}
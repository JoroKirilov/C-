#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct student {
    char id[10];
    char firstName[20] ;
    char lastName[20] ;
    int score ;  
} student ;

int main()
{
    student candidate ; 
    student *ptr ; 
    int numberOfStudent = 3 ;
    ptr = (student*) calloc (numberOfStudent , sizeof(candidate));

    scanf("%[^/" "]" , ptr->firstName);
    printf("%s" , ptr->firstName);
}
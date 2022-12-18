#include<stdio.h>
#include<stdlib.h>

typedef struct node_t {
        int number; 
        struct node_t *next_node ;
} node_t ;

void printNode(node_t *head)
{
    node_t *it = head; 
    while (it != NULL)
    {
        printf("%d\n" , it->number);
        it = it->next_node ;
    }
} 




int main()
{
    node_t* student ; 
    student = (node_t*) malloc (sizeof(node_t));
    student->number = 13 ;
    student->next_node = NULL;
    printNode(student) ;

    node_t* student1 ;
    student1 = (node_t*) malloc (sizeof(node_t));
    student1->number = 14 ;
    student1->next_node = NULL; 

    student->next_node = student1 ;
    free(student) ;
}
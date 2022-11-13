#include <stdio.h>
#include<stdlib.h>

#include "DynArray.h"

bool initArray (Vector *vector , size_t capacity )
{
    vector->data = (Vector*) malloc (sizeof(vector->data) * capacity);
    if (vector == NULL)
    {
        fprintf(stderr , "Not enough memory");  
        return false ;
    }   
    vector->size = 0 ; 
    vector->capacity = capacity;
    return true ; 
}


size_t getSize(const Vector *const v)
{
     return v->size ; 
}

size_t getCapacity(const Vector *const v)
{
    return v->capacity ; 
}

bool myRealloc (Vector *v)
{
    v->data = (Vector*) realloc (v->data , (v->capacity * 2) * sizeof(elem_t));
    if (v->data == NULL)
    {
        fprintf(stderr , "Not enough memory"); 
        return false; 
    }
    v->capacity = v->capacity * 2 ; 
} 

bool pushBack(Vector *v , elem_t element)
{
    if(v == NULL)
    {
        fprintf(stderr , "Null pointer");
        return false ; 
    }
    if(v->size == v->capacity)
    {
        printf("\nrealloc memory"); 
        myRealloc(v);
    }

    (v->data)[v->size] = element ;
    v->size++ ;
    return true ;
}

elem_t popBack(Vector *v) 
{
    if (v->size == 0)
    {
        fprintf(stderr , "Array is empty ");
        return 1 ;
    }
    v->size -= 1; 
    return (v->data)[v->size];
}

bool pushFront (Vector *v, elem_t element)
{
    if (v == NULL)
    {
        fprintf(stderr , "Ponter is NULL");
        return false ;
    }

    for (size_t i = v->size ; i > 0 ; i--)
    {
        v->data[i] = v->data[i - 1] ; 
    }

    v->data[0] = element ; 
    v->size ++ ;   
}

bool printVector(const Vector *const v)
{
    if (v == NULL)
    {
        fprintf(stderr , "Ponter is null"); 
        return false ; 
    }

    for (size_t i = 0; i < v->size; i++)
    {
        printf("%d\n" , v->data[i]) ;
    }
    printf("\n"); 
    
}

bool freeMemory (Vector * v)
{
    free(v->data);
    v->data = 0 ; 
    return true ; 
}







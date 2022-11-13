#ifndef DynArray
#define DynArray

#include<stdbool.h>

typedef int elem_t ;

typedef struct Vector {
    elem_t *data ; 
    size_t size ; 
    size_t capacity ; 
} Vector ; 

bool initArray (Vector *vector , size_t capacity );

size_t getSize(const Vector *const v);

size_t getCapacity(const Vector *const v); 

bool myRealloc (Vector *v); 

bool pushBack(Vector *v , elem_t element); 

elem_t popBack(Vector *v); 

bool pushFront (Vector *v, elem_t element);

bool printVector(const Vector *const v);





#endif  ///DynArray
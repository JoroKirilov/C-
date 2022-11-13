#include <stdio.h>

#include "DynArray.h"

int main()
{   
    int n ;     
    Vector v ;

    initArray( &v , 10); 
    pushBack(&v, 10);
    pushBack(&v, 9);
    pushBack(&v, 8);
    pushBack(&v, 7);
    pushBack(&v, 6);
    pushBack(&v, 5);
    pushBack(&v, 4);
    pushBack(&v, 3);
    pushBack(&v, 2);
    pushBack(&v, 1); 
    printVector(&v) ;
    pushBack(&v, 55) ; 
    printVector(&v) ; 
    

}
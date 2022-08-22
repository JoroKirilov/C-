#include <stdio.h>

int main()
{
    int * p  ;
    int a ; ;  
    p = &a ; 
    *p = 10 ;
     
    printf("%d\n" , a ) ;
    
    int x ;
    int *ptr ;
    int **p_ptr ; 
   ptr = &x ; 
   p_ptr = &ptr ;
   **p_ptr = 20 ; 
    printf("%d\n" , x) ; 
    
    int b[5] ; 
    int *c ;
    c = &b ;
    
    for (int i = 0 ; i < 5 ; i ++)
    {
        c[i] = i ;
    }
    for (int f = 0 ; f < 5 ; f ++)
    {
        printf("b[%d] =  %d\n", f , f); 
    }
    
    
    return 0;
}

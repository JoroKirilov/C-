#include <stdio.h>

int main()
 
{
    int array [] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
    printf("Size of bytes = %ld\n" , sizeof(array));
    printf("Elements in array = %ld" , (sizeof(array) / sizeof(int)));
    return 0 ;
}



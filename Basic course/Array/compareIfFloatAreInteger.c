
#include <stdio.h>
int main()
{   int i;
    int counter = 0 ; 
    float arr [10] = {-1 , 5, -3.4, 4.6, -55, 5, -6, 7, 5, 9 } ; 
    for (i = 0 ; i < 10 ; i ++)
    {
        if (arr[i] == (int) arr[i])
        {
            counter ++ ; 
        }
    }
    printf(" %d" , counter) ; 
    
    
    return 0 ; 

}

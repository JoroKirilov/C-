
#include <stdio.h>
int main()
{   int i;
    int maxNum = 0 ; 
    int arr [10] = {1 , 2, 3, 4, 55, 5, 6, 7, 8, 9 } ; 
    for(i = 0 ; i < 10 ; i ++ )
    {
        if (maxNum < arr[i])
        {
            maxNum = arr[i];
        } 
    }
    printf("%d" , maxNum);
    
    return 0 ; 

}

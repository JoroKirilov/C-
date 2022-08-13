
#include <stdio.h>
int main()
{   
    char arr [10] = {'!', '3','E','4','5','!','%','^','&','6' };
    
    for ( int i = 0 ; i < 10 ; i ++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            printf("arr[%d]\n" , i );
        }
    }
    
    
    return 0 ; 

}

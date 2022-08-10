

#include <stdio.h>

int main()
{
    int i = 8;
    
    for (i; i <= 16 ; i++)
    {
        if (i % 2 == 0)
        {
          printf("%d\n" , i );
        }
        
    }
    
    int b = 8 ;
    for (b ; b <= 16 ; b += 2)
    {
        printf("%d\n" , b );
    }
    

    return 0;
}

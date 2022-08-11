

#include <stdio.h>

int main()
{
     
    int row = 0; 
    for (row ; row <= 3 ; row++)
    {
        if(row == 0 )
        { 
            printf("   *    \n");
        }
        if(row == 1)
        {
            printf("  * *  \n");
        }
        if (row == 2)
        { 
            printf(" *   * \n");
        }
        if( row == 3)
        {
            printf("* * * *");
        }
    
    }
    
    

    return 0;
}

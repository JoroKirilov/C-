

#include <stdio.h>

int main()
{
     
    int row = 0; 
    for (row ; row < 5 ; row++)
    {
        if(row == 0 || row == 4 )
        {
            printf("*****\n");
        }
        else 
        {
            printf("*   *\n");
        }
    }
    

    return 0;
}

#include <stdio.h>

int main()
 
{
    int row , columns ; 
    int RowAndColumns [3][4] = {
                                {1, 2, 3, 4 },
                                {5, 6 ,7 ,8},
                                {9, 10 ,11 ,12}
                            } ;
    for (row = 0 ; row < 3 ; row++)
    {
        for (columns = 0 ; columns < 4 ; columns++)
        {
            printf("%d\t" , RowAndColumns[row][columns] );
            if (columns == 3)
            {
                printf("\n");
            }
        }
    }
    
}



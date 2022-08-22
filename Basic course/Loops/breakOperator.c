

#include <stdio.h>

int main()
{
    int i = 10 ; 
    for (i ; i <= 50 ; i +=5 )
    {
        if(i > 39)
        {
            break;
        }
        printf("%d\n" , i );
    }

    return 0;
}

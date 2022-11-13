#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int t , p ;
    t = x == y ;
    p = x != y ;

    printf("%d\n" , t); // return 1 (true)
    printf("%d" , p);   // return 0 (false)

    return 0;
}

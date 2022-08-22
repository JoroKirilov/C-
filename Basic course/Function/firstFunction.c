
#include <stdio.h>

int sum (int a ,int b )
{
    return a + b ; 
}
int main()
{
    int x , y ;
    scanf ( "%d",  &x);
    scanf (" %d" , &y);
    
    int extra =sum(x , y);
    printf("%d" , extra);

    return 0;
}

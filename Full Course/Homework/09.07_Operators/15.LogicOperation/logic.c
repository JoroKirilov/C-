#include<stdio.h>


int main()
{
    int a = 40 ;
    int b = 20 ;
    int c = 20 ;
    int d = 30 ;

    if(b == c && b < d && a + b > c + d && d + b == d + c && a / b != d)
    {
        printf("Every condition is true .\n");
    }

    if (a > b && a != 0 )
    {
        printf("Both conditions are true.\n");
    }
    if (c > d || c == 20)
    {
        printf("Only one condition is true.\n");
    }
    if( ! (a > b && b != 0)) // the opposite ;
    {
        printf("Both condition are true : operator !\n");
    }
    else
    {
        printf("Both condition are true."); // this condition is return ;
    }

}

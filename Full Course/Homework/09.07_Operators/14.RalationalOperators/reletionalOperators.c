#include <stdio.h>
int main() {
 int a ;
 int b ;
 printf("Enter two digits for compare :");
 scanf("%d %d" , &a , &b);
    if (a == b)
    {
        printf("%d and %d are equal\n", a, b);
    }
    else
    {
        printf("%d and %d are not equal\n", a, b);
    }
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else
    {
        printf("%d is greater than %d\n" , b ,a );
    }
    if (a + b == 10)
    {
        printf("Sum of %d and %d = 10" , a , b );
    }
}


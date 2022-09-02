#include <stdio.h>

int main ()
{
    int a;
    long b;
    long long c;
    double d;
    long double f;

    printf("%d\n" , sizeof(a));
    printf("%Ld\n" , sizeof(b));
    printf("%Ld\n" , sizeof(c));
    printf("%d\n" , sizeof(d));
    printf("%Ld\n", sizeof(f));
}

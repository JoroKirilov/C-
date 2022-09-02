#include <stdio.h>

int main (void)

{
  /*  printf("%d\n" , sizeof(short int));
    printf("%d\n" , sizeof(int));
    printf("%ld\n" ,sizeof(long));
    printf("%lld\n" ,sizeof(long long));
    printf("%c\n" , sizeof(char));
    printf("%d\n" , sizeof(float));
    pritnf("%d")
    printf("%d\n" , sizeof(long double));
    printf("%Ld\n" , sizeof(long double));
*/

    float f = 4.93 ;
    printf("f = %f , fe = %e , fg = %g\n" , f , f , f );
    double d = 4.0876409e23;
    printf("d= %lf , de = %le, dg = %lg" , d , d , d );
    return 0 ;


}




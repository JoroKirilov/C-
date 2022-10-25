#include<stdio.h>

void test(void)
{
    static int staticVar = 1 ;
    printf("%d\n" , staticVar);
    staticVar++;
}

int main()
{

    test();
    test();
    test();

    return 0 ;

}

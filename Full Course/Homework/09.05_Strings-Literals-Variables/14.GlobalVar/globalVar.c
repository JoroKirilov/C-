/*Зада 14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива. */


#include<stdio.h>

int globalVar = 0 ;

void test()
{
    printf("%d\n" , globalVar);
    globalVar ++ ;
}

int main ()

{
    for(int i = 0 ; i < 5 ; i++)
    {
        test();
    }

}

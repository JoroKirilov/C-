//Пребройте символите, подавани на конзолата, с функцията getchar();

#include<stdio.h>

int main()
{
    int count = 0 ;

    while(getchar() != EOF)
    {
        count++ ;
    }
    printf("\n");
    printf("%d" , count);

}

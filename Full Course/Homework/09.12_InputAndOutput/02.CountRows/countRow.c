//Пребройте редовете, подадени чрез текст на конзолата.
//Използвайте функцията getchar();


#include<stdio.h>

int main()
{
    int countRows = 0 ;
    char c ;
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            countRows++;
        }
    }

    printf("\n");
    printf("%d" , countRows);

}

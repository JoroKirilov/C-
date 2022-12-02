//12. Напишете програма, която отпечатва първите n реда от триъгълника на Флойд, където
//n се въвежда


#include<stdio.h>

int main()
{
    int rows ;
    int k = 1;
    printf("Enter numbers of rows: \n");
    scanf("%d", &rows);

    for(int i= 0 ; i <rows ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if((i+j) % 2 == 0 )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}

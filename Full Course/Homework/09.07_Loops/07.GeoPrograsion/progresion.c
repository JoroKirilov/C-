//7. Да се изведат първите N числа на една редица (геометрична прогресия), ако са дадени първиятчлен на редицата и частното между първите два елемента. Да се напише програма.
//Числата са на вход.


#include<stdio.h>

int main()
{
    int n ;
    double firtsElement ;
    double multiplier ;

    printf("Elements : \n");
    scanf("%d" , &n);

    printf("First elements:\n");
    scanf("%lf" , &firtsElement);

    printf("Multiplier :\n");
    scanf("%lf", &multiplier);

    printf("%.2lf\n", firtsElement);

    for(int i = 0 ; i < n ; i++)
    {
        firtsElement *= multiplier;
        printf("%.2lf\n" , firtsElement);
    }

}

#include<stdio.h>

struct car {
    char model[20] ;
    char madeIn[10];
    char color[10] ;
    int year ;
} ;


void show(struct car obj)
{
    printf("INFORMATION\n");
    printf("%s\n" , obj.model);
    printf("%s\n" , obj.madeIn);
    printf("%s\n" , obj.color);
    printf("%d\n" , obj.year); 
  
}


int main()
{
    struct car car1 ; 
    

    printf("Enter model of the car :\n");
    scanf("%s" , car1.model);
    printf("Enter country of manufacture of the car :\n");
    scanf("%s" , car1.madeIn);
    printf("Enter color of the car :\n");
    scanf("%s" , car1.color);
    printf("Enter year of manufacture :\n");
    scanf("%d" , &car1.year);

    show(car1);




}
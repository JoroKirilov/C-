/* Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и крайна
точка (15, 15). Запълнете пространството между тях с тирета.P */



#include<stdio.h>

struct point 
{
    int x ;
    int y ;

} ;

void makepoint (struct point* p , int x , int y)
{
    p->x = x ;
    p->y = y ;
}

struct rect
{
    struct point firstPoint ; 
    struct point secondPoint ; 
} ; 

int main()
{
    int i , j ; 
    struct rect screen ; 
    
    makepoint(&screen.firstPoint , 0 , 0 );
    makepoint(&screen.secondPoint , 15 , 15 );

    for ( i = screen.firstPoint.y ; i < screen.secondPoint.y; i++)  
    {
        for ( j = screen.firstPoint.x ; j < screen.secondPoint.x; j++)
        {
            printf(" - ");
        }
        printf("\n");
        
    }
    

}
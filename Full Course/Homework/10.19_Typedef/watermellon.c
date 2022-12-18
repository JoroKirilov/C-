/* Задача 10. Създайте структура диня с два елемента - диаметър и дебелина на кората заделете динамично с malloc() 
за масив от А на брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с функцията rand(), 
за всяка една диня в масива и дебелина на кората между 0.5 и 3.5 см. 
Създайте структура диня с два елемента - диаметър и дебелина на кората заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин
и попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка една диня в масива и дебелина на кората между 0.3 и 0.9 см. 
Намерете средната големина на динята и средната дебелина на кората и ги съпоставете с тези от втория масив.
Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход: По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D см вместо ... дини с диаметър ... см и дебелина на кората D1 см. */

#include<stdio.h>
#include<stdlib.h>

#define A 5 

struct watermelons 
{
    float d ; 
    float width ;
} ;

void initMelon (struct watermelons *obj);
void initPumkin (struct watermelons *obj);

int main()
{
    struct watermelons melon[A] = {0} ;
    struct watermelons pumkin[A] = {0} ;

    struct watermelons *ptrMelon = NULL;
    struct watermelons *ptrPumkin = NULL;

    ptrMelon = (struct watermelons*) malloc (A * sizeof(melon[0]));
    if (ptrMelon == NULL)
    {
        return 1 ;
    }
    
    ptrPumkin = (struct watermelons*) malloc (A * sizeof(melon[0]));
     if (ptrPumkin == NULL)
    {
        return 1 ;
    }

    initMelon(melon);
    initPumkin(pumkin);


}

void initMelon (struct watermelons *obj)
{
    float width = 0.0 ;
    float diameter ;


    for (size_t i = 0; i < A; i++)   
    {
         
       
        diameter = rand () % 95 ;
        if (diameter >= 35)             // before i know how 
        {
        (obj + i)->d = diameter ;
        }
        else
        {
            i-- ;
        }  
    }

    for (size_t i = 0; i < A; i++)
    {
        
       width = rand () % 9 ;
        width /= 10 ; 
        if (width >= 0.3)
        {
            (obj + i)->width = width; 
        }
        else
        {
            i--;
        }     
    }             
}


void initPumkin (struct watermelons *obj)
{
    float width = 0.0 ;
    float diameter ;


    for (size_t i = 0; i < A; i++)   
    {
         
       
        diameter = rand () % 140 ;
        if (diameter >= 15)             // before i know how 
        {
        (obj + i)->d = diameter ;
        }
        else
        {
            i-- ;
        }  
    }

    for (size_t i = 0; i < A; i++)
    {
        
       width = rand () % 35 ;
        width /= 10 ; 
        if (width >= 0.5)
        {
            (obj + i)->width = width; 
        }
        else
        {
            i--;
        }     
    }             
}
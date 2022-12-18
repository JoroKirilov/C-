/* 
 -Да се направи програма, която заделя динамичен масив с брой
елементи зададени от потребителя. За всеки елемент от масива се очаква
потребителят да въведе цяло и число и след това се изчислява сумата на
всички елементи от масива.
-Разширяване на заделена памет с realloc.

 */
#include<stdio.h>
#include<stdlib.h>

int func(int *p)
{
    int sum = 0 ;
    int tmp; 
    for (int i = 0; i < 4 ; i++)
        {
        printf("Input number :\n");
        scanf("%d" , &tmp);
        *p = tmp ;
        sum += tmp ;
        p ++ ;
        }
        return sum ;
}



int main()
{
    size_t tmp ;
    
    unsigned numOfElements = 0 ; 
    scanf("%d" , &numOfElements);

    int *ptr = NULL  ;
    ptr = (int*) malloc (numOfElements * sizeof(int));
    
    if (ptr == NULL)
        {
        return -1 ;
        }

    

    printf("%d" , func(ptr));
    
    int *ptr1 ;
    ptr1 = realloc (ptr , (numOfElements + 5) * sizeof(int)); 

    if (ptr == NULL)
        {
        return -1 ;
        }
/* 
    for (size_t i = 0; i < numOfElements + 5 ; i++)
        {
        printf("Input number :\n");
        scanf("%ld" , &tmp);
        *ptr = tmp ;
        sum += tmp ;
        ptr ++ ;
        }

    printf("%d" , sum);  */
}
    
    
    
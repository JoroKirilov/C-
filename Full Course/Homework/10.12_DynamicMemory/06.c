/* Задача 6. Напишете програма, която пита потребителя колко памет иска и заделя
съответният блок памет. След това попитайте потребителя за нов размер и
използвайте функция, която прави това.
 */


#include<stdio.h>
#include<stdlib.h>

int* resizeMemory (int n , int *ptr)
{
    ptr = (int*) realloc (ptr , n * sizeof(int));
}

int main()
{  
    int *ptr = NULL ; 
    int n = 0 ; 
    scanf("%d" , &n); 
    ptr = resizeMemory(n , ptr);
    


}
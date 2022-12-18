/* Задача 9. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)
 */


#include<stdio.h>

#define concat(a, b) a##b


int main(void)
{
   
    printf("%d", concat(4, 5));
    return 0;
}
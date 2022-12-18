/* Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.
 */

#include<stdio.h>
#define DEBUG
#ifdef DEBUG
#define print(a) printf(#a)
#endif



int main ()
{

    print(love coding\n); 
}
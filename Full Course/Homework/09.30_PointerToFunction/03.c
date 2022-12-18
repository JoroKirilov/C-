/* Задача.3. Направете масив от указатели към функции по следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от горните функции
иска да използва – събиране, изваждане, умножение и деление. След това
попитайте за числата, които да участват в тази операция, и извикайте
функцията, която да извърши желаната операция.
 */

#include<stdio.h>

typedef int (*Ptr) (int, int );

int fcPLus(int a , int b )
{
     return a + b ;
}
int fcMinus(int a , int b) 
{ 
    return a - b ;
}
int fcMulti(int a , int b) 
{ 
    return (a * b) ;
}
int fcDivide(int a , int b) 
{ 
    return (a / b) ;
}


int main()

{
    int a , b ;
    char choice ; 
    int (*pFunc[])(int , int ) = {fcPLus , fcMinus , fcMulti , fcDivide};

    enum Operation
    {
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE

    };

    printf("Chooce operation : \n");
    printf("1--> add\n2-->sub\n3-->multiply\n4-->divide\n");
    scanf("%c" , &choice);
    Ptr p = NULL;
    switch (choice)
    {
        case '1':
        p = pFunc[ADD];
        break;
        case '2':
        p = pFunc[SUBTRACT];
        break;
        case '3':
        p = pFunc[MULTIPLY];
        break;
        case '4':
        p = pFunc[DIVIDE];
        break;
    
    default:p = NULL ;
        break;
    }

    printf("Enter two numbers for operation :\n");
    scanf("%d %d", &a, &b);
   
  

    printf("%d" , p(a ,b));
    
    return 0 ;
}
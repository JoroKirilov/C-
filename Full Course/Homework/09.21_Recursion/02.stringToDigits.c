/* Задача 2. Напишете функцията double atof(char *s), която
преобразува стринг в число с десетична запетая.  */

#include<stdio.h>
#include<math.h>

double atof(char *s)
{
    static double num = 0 ; 
    static int count = 0 ; 

    if ((*s == '\0'))       
    {
        return num / (count / 10)  ;
    }
    if (*s == '.')
    {
        count = 10; 
    }
    else
    {
        num = num * 10 + ( *s - 48 );
        if (count >= 10)
        {
            count *= 10 ;
        }
        
    }
    atof(s + 1) ;
    
}

int main()
{
    char str[] = "13.56788" ;
    
    printf("%f" , atof(str));

}

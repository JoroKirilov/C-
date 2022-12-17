/* Задача 3.* Добавете проверка във функцията doble atof(char *s)
дали числото е отрицателно, и ако е, добавете знака. */

#include<stdio.h>

double atof ( char *s )
{
    static double num = 0.0 ; 
    static int count = 0 ; 
    static int sign = 1 ;

    
    if (*s == '\0')
    {   
        return num / (count / 10) * sign;
    }
    if(*s == '.')
    {
        count = 10 ;
    }
    else
    {
        if (*s == '-')
        {
        sign = -1 ; 
        } 
        else
        {
            num = num * 10 + (*s - 48);
        }
        if(count >= 10 )
        {
            count *= 10 ; 
        }
    }
    atof(s + 1);
}


int main()
{
    char str[] = "-3.14" ; 
    printf("%f\n" , atof(str));


}
/* Задача 8. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). 
*/

#include <stdio.h>


void itoa(int num , char *str , int idx);
int countDigits(int num);


int main()
{
    int num = 1133 ; 
    char str[countDigits(num)+1] ; 
    
    itoa( num , str , countDigits(num)); 
   
    printf("%s\n",str);
    
}

void itoa(int num , char *str , int idx)
{
    int i = 1 ;
    do
    {
    
    int digit = (num / i) % 10 ;
    
    switch (digit)
    {
    case 1:
        *(str + idx) = '1';
        break;
        case 2:
        *(str + idx) = '2';
        break;
        case 3:
        *(str + idx) = '3';
        break;
        case 4:
        *(str + idx) = '4';
        break;
        case 5:
        *(str + idx) = '5';
        break;
        case 6:
        *(str + idx) = '6';
        break;
        case 7:
        *(str + idx) = '7';
        break;
        case 8:
        *(str + idx) = '8';
        break;
        case 9:
        *(str + idx) = '9';
        break;
        case 0:
        *(str + idx) = '0';
        break;
            default:
            break;
    }
    i *= 10 ; 
    idx--;  
   }
   while(idx >= 0);
}

int countDigits(int num)
{
    int count = 0 ;
    while(num > 10 )
    {
        num = num / 10 ; 
        count ++ ; 
    }
    return count ;
}    
    
//10. Напишете програма, която обръща стринг, въведен от клавиатурата, използвайки указатели.


#include<stdio.h>


int  sizeOfStr(char str[])
{
    int count = 0 ; 
    while (*str != '\0')
    {
        count++ ;
        str++ ;
    }
    return count - 1  ;
}

void reverseStr(char str[] , int size )
{
    char temp ; 
    char *p = str ; 
    char *pEnd = &str[size  ];

    for ( ; p <= pEnd ; p++ , pEnd--)
    {
        temp = *p ; 
        *p = *pEnd ;
        *pEnd = temp ; 
    }
   
    
}

int main()
{
    char str[100];
    printf("Input string : \n");
    fgets( str, sizeof(str), stdin);

    reverseStr(str , sizeOfStr(str));
    printf("%s" , str);

}
//Напишете програма на С, която чрез функция да обръща
//десетични числа в двоични.


#include<stdio.h>

void reverseDecimalToBinary (int a )
{
    int i = 0 ;
    char toBinary[100] ;
    char reverse[100];
    while(a != 0 )
    {
      toBinary[i] = a % 2;
      a = a / 2 ;
      i++ ;
    }
    for(int j = i-1 ; j >= 0 ; j--)
    {
        int a = 0 ;
        reverse[a] = toBinary[j];

        printf("%d" , reverse[a]);
         a++;
    }

}

int main()
{
    reverseDecimalToBinary(348);
}

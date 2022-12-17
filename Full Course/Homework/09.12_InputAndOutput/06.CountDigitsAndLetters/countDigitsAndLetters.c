/*Задача 6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF. Текстът има
букви и цифри. Пребройте колко са въведените букви и колко са
въведените цифри. Определeте броя на цифрите в стринга, като
използвате оператор continue. */

#include<stdio.h>

int main()
{
    char c ;
    int countLetters ;
    int countDigits ;

    while((c = getchar()) != EOF)
    {
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            countLetters++ ;
        }
        if(c >= '0' && c <= '9')
        {
            countDigits++ ;
        }
    }

    printf("\nLetters -- > %d\n", countLetters);
    printf("Digits  -- > %d" ,countDigits);

}

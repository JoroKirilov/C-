/* Задача 7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа. */


#include<stdio.h>

    int main()
    {
    char str[100];
    char c ;
    int counter = 0 ;



    while((c = getchar()) != EOF)
          {

              str[counter] = c;
              counter++ ;
              if(c == '\n' &&  counter <= 80)
              {
                  for(int a = 0 ; a <= counter ; a++)
                  {
                      str[a] = '\0';
                  }
                  counter = 0 ;
              }

              if(c == '\n' && counter > 80)
              {
                  for(int j= 0 ; j <= counter  ; j++)
                  {
                      printf("%c" , str[j]);
                  }
                  for(int a = 0 ; a <= counter ; a++)
                  {
                      str[a] = '\0';
                  }
                  counter = 0 ;

              }

          }
}

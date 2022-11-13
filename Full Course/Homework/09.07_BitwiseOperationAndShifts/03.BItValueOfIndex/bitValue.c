//Създайте функция bitAt. Функцията получава параметър число и индекс. Тя връща стойността на бита
// а съответния индекс


#include<stdio.h>

int main()
{
   int number , position , result ;
   printf("Enter one number:\n");
   scanf("%d" ,&number);
   printf("Enter index of bit position:\n");
   scanf("%d" , &position);

   result = number >> position ;
   result = result & number ;
   printf("%d" , result);

}

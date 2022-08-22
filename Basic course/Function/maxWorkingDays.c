#include <stdio.h>
int numbersOfDaysArray ()
{
    int number = 0 ; 
    scanf("%d" , &number);
    return number; 
}
int main()
{
    int num = numbersOfDaysArray();
    int workingDays = (num / 7)* 5 + num % 7 ; 
    printf("%d" , workingDays);
     
}
 
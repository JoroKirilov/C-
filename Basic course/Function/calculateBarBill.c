
#include <stdio.h>

float calculateBarBill(float a , int b )
{
   if (a == 1) {a =1.5;}
   else if (a==2) {a=1.0;}
   else if (a==3){a=1.4;}
   else {a = 0;}
   float bill = a * b;
   return bill;
}


int main()
{
    int yourChoice , quantity;
   printf("Enter drink you wish:\n1.Coffe\n2.Water\n3.Coke\n");
   scanf("%d" , &yourChoice);
   printf("How much of this do you want:\n");
   scanf("%d" , &quantity);
   printf("Your bill is : %.2f lv" , calculateBarBill(yourChoice ,quantity ));
   
}
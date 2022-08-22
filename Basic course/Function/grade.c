#include <stdio.h>

int grade(float a)
{
   if (a > 2.00 && a < 2.5) return 2;
   else if (a >= 2.5 && a < 3.5) return 3;
   else if (a >= 3.5 && a < 4.5) return 4;
   else if (a >= 4.5 && a < 5.5) return 5;
   else if (a >= 5.5 && a <= 6) return 6;
   else return 0 ; 
   
   
}


int main()
{
 float num = 4.50;
 int gradeNum = grade(num);
 printf("%d" , gradeNum);
 
 
}

#include <stdio.h>

void grade(float a)
{
   if (a > 2.00 && a < 2.5) printf("Fail");
   else if (a >= 2.5 && a < 3.5) printf("Poor");
   else if (a >= 3.5 && a < 4.5) printf("Good");
   else if (a >= 4.5 && a < 5.5) printf("Very Good");
   else if (a >= 5.5 && a <= 6) printf("Excellent");
  
}


int main()
{
 float num = 5.7;
 grade(num);

}


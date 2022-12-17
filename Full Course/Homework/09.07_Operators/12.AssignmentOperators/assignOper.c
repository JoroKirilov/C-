# include <stdio.h>


int main()
 {

 int a = 5, b = 5, c = 10;
 int Result = 16;
 int X = 0;
 Result <<= X;

 printf("Result = %d\n", Result);
 Result += X;
 printf("Result += %d = %d\n", X, Result);
 Result = 1;
 Result <<= X;
 printf("Result <<= %d = %d\n", X, Result);



    printf("%d == %d is %d \n", a, b, a == b);
     printf("%d == %d is %d \n", a, c, a == c);
      printf("%d > %d is %d \n", a, b, a > b);
       printf("%d > %d is %d \n", a, c, a > c);
        printf("%d < %d is %d \n", a, b, a < b);
         printf("%d < %d is %d \n", a, c, a < c);
          printf("%d != %d is %d \n", a, b, a != b);
           printf("%d != %d is %d \n", a, c, a != c);
            printf("%d >= %d is %d \n", a, b, a >= b);
             printf("%d >= %d is %d \n", a, c, a >= c);
              printf("%d <= %d is %d \n", a, b, a <= b);
               printf("%d <= %d is %d \n", a, c, a <= c);



 }


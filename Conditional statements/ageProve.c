#include <stdio.h>
#include <string.h>

int main ()
{
    int age ; 
    printf("Enter your age:\n");
    scanf("%d" , &age);
    if (age <= 14 ) {printf("drink toddy");}
    else if (age > 14 && age <= 18) {printf("drink coke");}
    else if (age > 18 && age <= 21) {printf("drink beer");}
    else {printf ("drink whisky");}
 
}

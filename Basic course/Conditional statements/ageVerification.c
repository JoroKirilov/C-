#include <stdio.h>


int main ()
{
    int age;
   
    scanf("%d", &age);
    
    if (age == 0 && age <= 2 )
    {
        printf("baby");
    }
    else if (age > 2 && age <= 13)
    {
        printf("child");
    }
    else if (age > 13 && age < 20)
    {
        printf("teen");
    }
    else if (age >= 20 && age <= 65)
    {
        printf("adult");
    }
    else if (age >= 66)
    {
        printf("elder");
    }
    
    
    
 
}

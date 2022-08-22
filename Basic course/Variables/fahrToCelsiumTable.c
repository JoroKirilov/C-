#include <stdio.h>

int main()
{
 
 float farh , celsium ; 
 float lower , upper , step ;
 
 lower = 0 ; 
 upper = 100 ; 
 step = 10 ; 
 
 farh = lower; 
 while (farh <= upper)
 {
     celsium = (5.0/9.0) * (farh - 32.0);
     printf("%.0f^F ----------> %.2f^C\n" , farh , celsium );
     farh += step;
 }
 return 0 ;
    
}

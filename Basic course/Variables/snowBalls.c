#include <stdio.h>
#include <math.h>

int main()
{ 
    int numOfBalls = 0 ;
    int weightBalls = 0 ; 
    int timeNeeded = 0;
    int qualityOfBalls = 0;
    int result = 0 ; 
    int maxValue = 0 ;
    int maxQuality = 0 ;
    int maxWeight = 0 ;
    int maxTimeNeeded = 0 ;
   scanf("%d" , &numOfBalls);
   for (int i = 0 ; i < numOfBalls ; i++)
   {
       scanf("%d %d %d" , &weightBalls , &timeNeeded , &qualityOfBalls);
       result = pow ((weightBalls / timeNeeded) , qualityOfBalls);
       if (result > maxValue)
       {
           maxValue = result;
           maxQuality = qualityOfBalls; 
           maxWeight = weightBalls;
           maxTimeNeeded = timeNeeded;
       }
       // result = pow ( base, exp); 
   }
   
   printf ("%d" , result) ;
   printf("{%d} : {%d} = {%d} ({%d})" , maxWeight , maxTimeNeeded , maxValue , maxQuality);
   
    return 0;
}

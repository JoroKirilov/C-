#include <stdio.h>


int main()
{
    int numberOfPeople , capacity ; 
    scanf("%d %d" , &numberOfPeople  , &capacity);
     int courses = numberOfPeople / capacity ;
    int leftOutcide = numberOfPeople % capacity ; 
    
    if (capacity > numberOfPeople)
    {
        printf ("All the persons fit inside the elevator.Only one course is needed.");
    }
    else if (numberOfPeople % capacity == 0)
    {
        printf("%d courses * %d people" , courses , capacity);
    }
    
    else    
    {  
    printf("%d courses * %d people \n+ 1 course * %d person",courses , capacity , leftOutcide);
    }
   
    
    return 0;
}

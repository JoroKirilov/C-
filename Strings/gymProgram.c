
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char kindOfTraining[10] ; 
    printf("Choose what you want to do in gym:\n");
    scanf("%s" , kindOfTraining);
    if (strcmp (kindOfTraining , "Power") == 0)
    {
      printf("You must doing exersice with max weight and do six reps");
    }
    else if(strcmp (kindOfTraining , "Endurance") == 0 )
    {
        printf("You must doing exersice with light weights and do more reps");
    }
    else if (strcmp (kindOfTraining , "Tonus") == 0 )
    {
        printf("Go to do some yoga exersice");
    }
    else
    {
        printf("There is no kind training");
    }
    
    
    return 0;
}

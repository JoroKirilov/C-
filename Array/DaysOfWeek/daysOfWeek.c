#include <stdio.h>

#define WEEK_DAYS 7
#define LENGTH 10

int main()
 
{
    char daysOfWeek [WEEK_DAYS] [LENGTH] = 
    {
        "Monday", 
        "Thuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };
    
    for (int i = 0 ; i < WEEK_DAYS ; i++)
    {
       printf("%s\n" , daysOfWeek[i]);
    }
    return 0 ;
}



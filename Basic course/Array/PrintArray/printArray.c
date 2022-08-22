#include <stdio.h>

int main()
 
{
    char months [12] [10] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    for(int i = 0 ; i < 12 ; i ++)
    printf("%s\n" , months[i]);
}



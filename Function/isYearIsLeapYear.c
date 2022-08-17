#include <stdio.h>

void month(int);
int leap_year = 0 ;

int main()
{
   int year = 0 ; 
   int days = 0 ;
   
   scanf("%d" , &year);
   if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
   {
       leap_year = 1 ; 
   }
   scanf("%d" , &days);
   
   month(days);
   
   

    return 0;
}

void month (int days)
{
    if(days <= 31) printf("January");
    if(days > 31 && days <= 59+leap_year) printf("February");
    if(days > 59+leap_year && days <= 90+leap_year) printf("March");
    if(days > 90+leap_year && days <= 120+leap_year) printf("April");
    if(days > 120+leap_year && days <= 151+leap_year) printf("May");
    if(days > 151+leap_year && days <= 181+leap_year) printf("June");
    if(days > 181+leap_year && days <= 212+leap_year) printf("July");
    if(days > 212+leap_year && days <= 243+leap_year) printf("August");
    if(days > 243+leap_year && days <= 273+leap_year) printf("September");
    if(days > 273+leap_year && days <= 304+leap_year) printf("Octomber");
    if(days > 304+leap_year && days <= 334+leap_year) printf("November");
    if(days > 334+leap_year && days <= 365+leap_year) printf("December");
}

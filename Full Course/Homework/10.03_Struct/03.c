/* Задача 3. Напишете програма, която калкулира разликата на два времеви
периода, изразени във векове, години, месеци, дни, минути, секудни.
Принтирайте изходните периоди и резултата. */

#include<stdio.h>

struct time {
    double century ;
    double years ;
    double mounth ;
    double days ; 
    double min ; 
    double sec ; 
} ;

struct time maker(double cen , double year , double mon , double day , double min , double sec)
{
    struct time temp = {.century = cen , .years = year , .mounth = mon , .days = day, .min = min , .sec = sec};
    return temp ;
}

long double calculateTime (struct time time)
{
   long double sum = (time.century * 3155695200 + time.years * 31556952 + time.mounth * 2592000 + time.days * 86400 + time.min * 60 + time.sec) ;
    return sum ;
}



int main()
{
    struct time time1 ;
    struct time time2 ;
    time1 = maker(0 , 0 , 1 , 0 , 0 , 0);
    time2 = maker(1 , 0 , 1 , 0 , 0 , 0);
  

    long double firstPeriod = calculateTime(time1); 
    long double secondPeriod = calculateTime(time2); 

    if (firstPeriod > secondPeriod)
    {
        printf("%Lf" , firstPeriod - secondPeriod);
    }
    else
    {
        printf("%Lf" , secondPeriod - firstPeriod) ;
    } 
}
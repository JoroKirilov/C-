/* Задача 2. Напишете програма, която събира две дистанции, които са
изразени в километри, метри, сантиметри. Дистанциите трябва да бъдат
въведени от потребителя. Принтирайте изходните и резултатната
дистанция.
 */

#include<stdio.h>

struct distance {
    double km ; 
    double meters ; 
    double centimeters ; 
} ;

struct distance maker (int n , int n1 , int n2)
{
    struct distance temp = {.km = n , .meters = n1, .centimeters =n2}; 
    return temp ;
}

double sum (struct distance o)
{
    return ((o.km * 100000) + (o.meters * 100) + o.centimeters) / 100 ; 
}

int main()
{
    struct distance dist1 ; 

    struct distance dist2 ;
    dist1 = maker(1 , 100 , 90);
    dist2 = maker(1 , 100 , 110);
    printf("Centimeters = %.2f m" , sum(dist1) + sum(dist2));
 
}
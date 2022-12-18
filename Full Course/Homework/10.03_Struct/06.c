/* Задача 6. Напишете програма, която да изчислява средния успех на всеки
студент и целия курс, използвайки структури. Входните данни за студентите
трябва да бъдат въведени от потребителя. Принтирайте резултатите за
всеки студент поотделно, както и за целия курс. */

#include<stdio.h>

struct student {
    char name[15];
    float grade[5];
    float averageGrade; 
}student[5] ;

void maker (struct student *student)
{
     int i;
    float temp ; 
    for ( i = 0; i < 5; i++)
    {
        printf("Enter name:\n");
        scanf("%s" , student[i].name);
        for (int j = 0; j < 5; j++)
        {
        printf("Enter five grades :\n");
        scanf("%f" , &student[i].grade[j]);
        temp += student[i].grade[j];
        }
        student[i].averageGrade = temp / 5  ;
        temp = 0 ;        
    }
}


int main()
{
    float classAverageGrade = 0 ;
    maker(student); 
    for (int i = 0; i < 5; i++)
    {
        classAverageGrade += student[i].averageGrade ;
        printf("%s -- %.2f\n" ,student[i].name , student[i].averageGrade); 
    }
    printf("Average grades for all class :%f\n" , (classAverageGrade / 5)); 
    
         
}
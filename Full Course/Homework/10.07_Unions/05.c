/* Задача 5. Дефинирайте структура с 4 полета (int. char[10], double, enum), направете масив от 20 структури и ги попълнете.
 Изведете масива от структури на стандартния изход в CSV формат.

 */
#include<stdio.h>
#include<string.h>

#define SIZE_OF_ARR 20

typedef enum myEnum 
        {
            January ,
            February , 
            March , 
            April, 
            May , 
            June , 
            July , 
            August,
            September ,
            Octomber, 
            November ,
            December,
        } Enum ; 

const char *monthString[12] = {
            "January" ,
            "February" , 
            "March" , 
            "April", 
            "May" , 
            "June" , 
            "July" , 
            "August",
            "September" ,
            "Octomber", 
            "November" ,
            "December" 
} ;

struct mystruct 
{
    int facNumber ; 
    char *name;
    double grade ; 
    Enum months ; 
};

Enum Parsemonth(char *str)
{
    for (size_t i = 0; i < 12; i++)
    {
            if  (strcmp (str , monthString[i]) == 0)
            {
                return i ;
            }
    }
    
}


int main()
{
    char month[20] ; 
  
    struct mystruct student[SIZE_OF_ARR] ;

  
   for (int i = 0; i < SIZE_OF_ARR; i++)
   {
        student[i].facNumber = 100 + i ;
        student[i].name = "Georgi Kirilov";
        student[i].grade = 6 ;
        scanf("%s" , month);
        student[i].months = Parsemonth(month);
        
        
   }
   for (int j = 0; j < SIZE_OF_ARR  ; j++)
   {
        printf("%d, " , student[j].facNumber);
        printf("%s, " , student[j].name);
        printf("%lf, " , student[j].grade);
        printf("%d" , student[j].months);
        

        printf("\n");
   }
}
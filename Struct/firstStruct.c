#include <stdio.h>

struct mystruct 
{
    int i ; 
    char ch ;
};

struct thirdStruct

{
    int q ; 
    char ch2;
};

int main()
{
   struct mystruct s ; 
   
   s.ch = 'C';
   s.i = 8 ; 
   
   printf ("First option of using struct  : %c = %d\n" , s.ch , s.i );
   
   
   struct 
   {
       int b ; 
       char ch1;
   }secondStruct;
   
   secondStruct.b = 7;
   secondStruct.ch1 = 'T';
   
   printf ("Second option of using struct  : %c = %d\n" , secondStruct.ch1 , secondStruct.b );
   
   struct thirdStruct structMember = {1 , 'P'};
   
   printf ("Third option of using struct  : %d = %c" , structMember.q , structMember.ch2 );
   
   
   
   
   

    return 0;
}

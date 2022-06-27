#include <stdio.h>
#include <string.h>

int main()
{
   int counterCoffe = 0 ;
   char command[10] ; 
   scanf("%s" , command);
   while (strcmp(command , "END") != 0)
   {
       if (strcmp(command , "coding") == 0 || strcmp(command , "dog") == 0 || 
       strcmp(command , "cat") == 0 || strcmp(command , "movie") == 0 )
       {
         counterCoffe += 1; 
       }
       else if (strcmp(command , "CODING") == 0 || strcmp(command , "DOG") == 0 || 
       strcmp(command , "CAT") == 0 || strcmp(command , "MOVIE") == 0 )
       {
           counterCoffe += 2;
       }
     
        scanf("%s" , command);  
       
   }
   if (counterCoffe > 5 )
   {
       printf("You need extra sleep");
   }
   else {
       printf("%d" , counterCoffe);
   }
   
    

    return 0;

}

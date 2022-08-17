

#include <stdio.h>

int minNum (int n , int b);


int main()
{   
   
   int a , b , c ;
   scanf("%d\n%d\n%d" , &a,&b,&c);
   
   if(minNum(a ,  b) < c) printf ("%d" , minNum(a , b));
   else printf("%d" , c);
 

    return 0;
}


int minNum (int n , int b)
{
    if (n < b)
    {
        return n;
    }
    else 
    {
        return b;
    }
    
}
#include<stdio.h>

int main()
{
    char name[10];
    for (int i = 0 ; i < 10 ; i++)
    {
        name[i] = '.';
    } 
    
    int persent = 0 ; 
    scanf("%d" , &persent );
    int loadingPersent = persent / 10;
    for (int i = 0 ; i < loadingPersent ; i ++)
    {
        name[i] = '%';
    
    }
    
    if (persent == 100)
    {
        printf("100%% Complete\n[");
       for (int i = 0 ; i < 10 ; i++)
        {
        printf("%c" , name[i]);
        }
        printf("]");
    }
    else
    {printf("%d persent [" , persent);
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%c" , name[i]);
    }
     printf("]\n");
     printf("Still loading");
    }
     
     
}
    
    

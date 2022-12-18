#include<stdio.h>
#include<stdlib.h>


int* Init(const unsigned blocks , const unsigned numOfBytes)
{
    return calloc(blocks , numOfBytes); 
}

int* Reunit(int* old , const long long numOfBytes)
{
    return realloc(old , numOfBytes);
}

int main()
{
    long long blocks = 4 ; 
    int *ptr = Init(blocks , sizeof(int));
    if (ptr == NULL)
    {
        return -1 ;
    }

    long long count = 0 ; 
    while (1)
    {
        printf("%d" , ptr[count++]);
        if (count > blocks - 1 )
        {
            ptr = Reunit(ptr , (count + blocks) * sizeof(int));
            if (ptr == NULL)
            {
                return -1 ;
            }
            blocks = count + blocks; 
            
        }
        
    }
    
}
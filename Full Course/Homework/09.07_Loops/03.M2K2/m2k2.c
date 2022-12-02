//3. По зададено естествено число N, да се намерят всички двойки естествени числа М и К, за
//които М2+К2=N.

#include<stdio.h>

int main()

{
    int n ;
    scanf("%d" , &n);
    for(int m = 0 ; m < n ; m++)
    {
        for(int k= 0 ; k < n ; k++)
        {
            if(m*m + k*k == n)
                printf("m = %d , k = %d\n" , m , k);
        }
    }
}

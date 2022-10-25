#include<stdio.h>

int main()
{

int x = 10;
int y = 10;
int z = 30;
int t = x==y + (z < y) != 20; //x == y = 1 , z < y = 0 , 1 != 20 = 1 ;

printf("%d" , t) ;

}

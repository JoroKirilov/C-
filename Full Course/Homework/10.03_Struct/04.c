/* Задача 4. Напишете произволна програма, която да демонстрира уменията
ви да боравите с nested structure */

#include<stdio.h>

struct name {
    struct info 
    {
        int year;
        char position[10] ;
    } obj;
    char name[10];
};

void showInfo (struct info player)
{
    printf("%d\n" , player.year);
    printf("%s\n" , player.position);
}

void showNames (struct name names)
{
    showInfo(names.obj);
    printf("%s\n" , names.name);
}
int main()
{
    struct info player1 = {87 , "finisher"};
    showInfo(player1) ; 
    struct name player2 = {{88 , "defender"} , .name = "Georgi"};
    showNames(player2); 
   
    player2.obj.year = 1987 ;
    
    showNames(player2);
}
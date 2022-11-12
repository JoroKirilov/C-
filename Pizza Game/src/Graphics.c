#include "../include/Graphics.h"
#include "../include/restaurant.h"
#include "../include/defines.h"
#include <stdio.h>


#define height 30 
#define width 60 

void displayCurrentPoints(const uint16_t score,
                          const uint16_t round,
                          const uint16_t chefNumOfDishesPerRound) {

    printf("---------------------------------------------PIZZA GAME----------------------------------------------\n");
    Sleep(GAME_SPEED);
    printf("|  round %hu  |  chef is cooking %d  |                              score %d \n", round , chefNumOfDishesPerRound , score);
    Sleep(GAME_SPEED);
    printf("-----------------------------------------------------------------------------------------------------\n");
    Sleep(GAME_SPEED);
    printf("\n");
}

void printTable(Table **tables)
{
    for (size_t i = 0; i < MAX_TABLES; i++)
    {
        if(tables[i]->status == FREE) {
        printf("%d|FREE|\t" , i + 1);
        Sleep(GAME_SPEED);
        } 
        else if(tables[i]->status == BUSY) {
        printf("%d| ☻ |\t", i + 1); 
        Sleep(GAME_SPEED);
        }
    }
    Sleep(GAME_SPEED);
    printf("\n\n") ;   
}

void printPeopleThisRound(uint16_t peopleThisRound)
{
    printf("BOSS , Incomming customers... \n\n"); 
    Sleep(GAME_SPEED); 
    for (size_t i = 0; i < peopleThisRound; i++)
    {
        printf("☻ \t");
        Sleep(GAME_SPEED);
    }
    printf("\nCustomers this round : %hu", peopleThisRound);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n"); 
}

void printfTableStatus(uint16_t numOfFreeTables)
{
    if(numOfFreeTables == 1) {
    printf("We have only one table free\n"); 
    }
    else if(numOfFreeTables == 0)
    {
        printf("Тhe restaurant is full\n");
    }
    else{
        printf("We have %hu tables free\n", numOfFreeTables); 
    }
    printf("-----------------------------------------------------------------------------------------------------\n\n");
}


void printDivider(void)
{
    printf("-----------------------------------------------------------------------------------------------------\n\n");
}


void printGameOver(void)
{
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------GAME OVER---------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
}

void printGameResult(void)
{
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("--------------------------------------YOU GOT THE JOB------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    printf("-----------------------------------------------------------------------------------------------------\n\n"); 
}






 


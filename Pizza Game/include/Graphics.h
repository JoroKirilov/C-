#include <stdint.h>
#include "tables.h"

//Replace following with Windows.h if on Windows OS
//#include <unistd.h>
#include <Windows.h>

typedef struct coord Coord ;

void displayCurrentPoints (const uint16_t score, 
                           const uint16_t round,
                           const uint16_t chefNumOfDishesPerRound) ;

void printTable(Table **tables);

void printPeopleThisRound(uint16_t peopleThisRound);

void printfTableStatus(uint16_t numOfFreeTables); 

void printDivider(void);

void printGameOver(void);

void printGameResult(void);




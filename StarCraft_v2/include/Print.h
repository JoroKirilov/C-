#ifndef PRINT_H_
#define PRINT_H_
 
#include <stdint.h>
#include "Vector.h"
#include "TerranShip.h"
#include "ProtossShip.h"


void printReportForDestroyedShip(const Ship *const currentAttackingShip,
                                 const size_t idxOfAttackingShip ,
                                 const Vector *const enemiesFleet);

char *shipType(const uint8_t shipToPrint);

void printReportAfterTerranProcess(const Vector *const protossFleet);

void printReportAfterProtossProcess(const Vector *const terranFleet);
 
#endif // PRINT_H_
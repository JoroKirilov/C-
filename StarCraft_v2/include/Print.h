#ifndef PRINT_H_
#define PRINT_H_
 
#include <stdint.h>
#include "Vector.h"
#include "TerranShip.h"
#include "ProtossShip.h"


void printReportForDestroyedShip(const size_t attackingShip,
                                 const size_t idxOfAttackingShip ,
                                 const Vector *const enemiesFleet);

char *shipType(const uint8_t shipToPrint);

void printReportAfterTerranProcess(const ProtossShip *const enemiesFleet, const size_t EnemyAirShipId);

void printReportAfterProtossProcess(const TerranShip *const enemiesFleet, const size_t EnemyAirShipId);
 
#endif // PRINT_H_
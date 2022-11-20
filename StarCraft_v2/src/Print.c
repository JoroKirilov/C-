//#include "Fleet.h"
#include "Print.h"
//#include "Vector.h"

#include <stdio.h>
//#include <stdlib.h>

/**
 * Prints battle report for destroyed ship .   
 * @param TypeOfShip 
 * @param ID size_t of ship ID
 * @param ID syze_t of destroyed ship ID
 * example "Phoenix with ID: 0 killed enemy airship with ID: 2"
 */
void printReportForDestroyedShip(const size_t attackingShip,
                                 const size_t idxOfAttackingShip ,
                                 const Vector *const enemiesFleet)
{
    printf("%s with ID: %zu killed enemy airship with ID: %zu\n", shipType(attackingShip),
                                                                  idxOfAttackingShip ,
                                                                  enemiesFleet->size - 1); 
}


/**
 * Get type of ship 
 * @param enum ID 
 */ 
char *shipType(const uint8_t shipToPrint)
{
    char *arrShips[] = {"BattleCruiser" , "Viking" , "Carrier" , "Phoenix"};
    
    return arrShips[shipToPrint];
}
 


/**
 * Prints terrans battle report after each of their turn.   
 * @param ProtossShip pointer to struct of protoss ship.
 * @param ID - size_t of enemy ship ID
 * example "Last Protoss AirShip with ID: 0 has 200 health and 110 shield left"
 */ 
void printReportAfterTerranProcess(const ProtossShip *const enemiesFleet, const size_t EnemyAirShipId)
{
    printf("Last Protoss AirShip with ID: %zu has %hd health and %hd shield left\n", EnemyAirShipId ,
                                                                                     enemiesFleet->ship.health,
                                                                                     enemiesFleet->shield );
}


/**
 * Prints protoss battle report after each of their turn.  
 * @param Terran pointer to struct of terran ship.
 * @param ID - size_t of enemy ship ID
 * example "Last Terran AirShip with ID: 0 has 386 health left"
 */
void printReportAfterProtossProcess(const TerranShip *const enemiesFleet, const size_t EnemyAirShipId)
{
    printf("Last Terran AirShip with ID: %zu has %hd health left\n", EnemyAirShipId , enemiesFleet->ship.health);
}
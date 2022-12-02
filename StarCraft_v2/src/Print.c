//#include "Fleet.h"
#include "Print.h"
#include "Ship.h"
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
void printReportForDestroyedShip(const Ship *const currentAttackingShip,
                                 const size_t idxOfAttackingShip ,
                                 const Vector *const enemiesFleet)
{
    char *attackingShipType = shipType(getTypeShip(currentAttackingShip));

    printf("%s with ID: %zu killed enemy airship with ID: %zu\n", attackingShipType,
                                                                  idxOfAttackingShip,
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
 * @param protossFleet pointer to Vector which is fleet of Protoss.
 * example "Last Protoss AirShip with ID: 0 has 200 health and 110 shield left"
 */ 
void printReportAfterTerranProcess(const Vector *const protossFleet)
{
    size_t lastShipID = vectorGetSize(protossFleet) - 1;
    Ship *lastShipInFleet = vectorBack(protossFleet);
    int16_t lastShipHealth = getHealth(lastShipInFleet);
    int16_t lastShipShield = getShield((ProtossShip *)lastShipInFleet);
    printf("Last Protoss AirShip with ID: %zu has %hd health and %hd shield left\n", lastShipID,
                                                                                    lastShipHealth,
                                                                                    lastShipShield);
}


/**
 * Prints protoss battle report after each of their turn.  
 * @param terranFleet pointer to Vector which is fleet of terrans.
 * example "Last Terran AirShip with ID: 0 has 386 health left"
 */
void printReportAfterProtossProcess(const Vector *const terranFleet)
{
    size_t lastShipID = vectorGetSize(terranFleet) - 1;
    Ship *lastShipInFleet = vectorBack(terranFleet);
    int16_t lastShipHealth = getHealth(lastShipInFleet);
    printf("Last Terran AirShip with ID: %zu has %hd health left\n", lastShipID, lastShipHealth);
}
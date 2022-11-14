#include<stdio.h>
#include "fleet.h"
#include "Vector.h"

void printStatus(int attackingShip,
                 protossShip **destroyedShip ,
                 size_t idxOfAttackingShip ,
                 Vector *enemiesFleet) {

char *arrShips[] = {"Battle cruiser" , "Viking" , "Carrier" , "Phoenix"};

//Phoenix with ID: 0 killed enemy airship with ID: 2

printf("%s with ID: %zu killed enemy airship with ID: %d\n", 
                                                            arrShips[attackingShip] ,
                                                            idxOfAttackingShip ,
                                                            enemiesFleet->size - 1); 

vectorPop(enemiesFleet);
free(*destroyedShip);
destroyedShip = NULL ;
}
    


                

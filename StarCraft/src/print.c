#include<stdio.h>
#include "fleet.h"

char *arrShips[] = {"Battle cruiser" , "Viking" , "Carrier" , "Phoenix"};
printf("%s" , arrShips[VIKING]);  

void printStatus(int attackingShip,
                 protossShip **destroyedShip ,
                 size_t idxOfAttackingShip ,
                 int idxOfDestroyedShip,
                 battleField ) {

//Phoenix with ID: 0 killed enemy airship with ID: 2

printf("%s with ID: %zu killed enemy airship with ID: %d\n" , arrShips[attackingShip] , idxOfAttackingShip , idxOfDestroyedShip); 

vectorPop()

}
    


                

#include "Fleet.h"
#include "Defines.h"
#include <stdlib.h>
#include <stdint.h>


terranShip *initViking(void){
    terranShip *tmpShip = (terranShip*) calloc (1, sizeof(terranShip));
    if (tmpShip == NULL)
    {
        //ERROR HANDLING
    }
    tmpShip->damage = VIKING_DAMAGE ; 
    tmpShip->health = VIKING_HEALTH ;
    tmpShip->typeShip = VIKING ;
    return tmpShip ;
}

/* terranShip *initBattleCruiser(void){

 if ( condition )
    {
        
    }
  
} */

//TODO : MAKE STRUCT FOR ANOTHER SHIPS 
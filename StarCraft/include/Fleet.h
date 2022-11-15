#ifndef FLEET_H_
#define FLEET_H_


#include "Defines.h"
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    int numberOfInterceptors; 
} interceptors ; 

typedef struct {
    uint16_t typeShip ;
    int damage ;  
    int health ;
    int turns_made ;   
} terranShip ;

typedef struct {
    int typeShip ;
    int damage ; 
    int health ;
    int shield ; 
    int shieldRegenerateRate ;
} protossShip ;


terranShip *initViking(void);


/* 
    if (* condition */
    
        /* code */
    
    


//TODO : MAKE STRUCT FOR ANOTHER SHIPS  */


#endif // FLEET_H_
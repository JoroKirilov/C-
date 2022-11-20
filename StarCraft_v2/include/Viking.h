#ifndef STARCRAFT_VIKING_H
#define STARCRAFT_VIKING_H

#include "ErrorHandler.h"


#include "TerranShip.h"



typedef struct viking{
    TerranShip terranShip ;
}Viking;

Error initViking(Viking **self);

#endif //STARCRAFT_VIKING_H

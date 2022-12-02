#include "TerranShip.h"
#include <stdlib.h>
#include <ErrorHandler.h>

Error initTerranShip(TerranShip *self, const int16_t shipID, const int16_t typeShip, const int16_t health, const int16_t damage)
{
    Error err = NO_ERROR;
    
    err = initShip(&self->ship, shipID, typeShip, health, damage);

    return err;
}

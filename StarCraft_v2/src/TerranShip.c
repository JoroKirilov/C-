#include "TerranShip.h"
#include <stdlib.h>
#include <ErrorHandler.h>

Error initTerranShip(TerranShip *self, int16_t typeShip, int16_t health, int16_t damage)
{
    Error err = NO_ERROR;
    if(self == NULL)
    {
        self = (TerranShip *) calloc(1, sizeof(TerranShip));
        if(self == NULL)
        {
            checkForError(self, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
        }
    }
    err = initShip(&self->ship, typeShip, health, damage);

    return err;
}

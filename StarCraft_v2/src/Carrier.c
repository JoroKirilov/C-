#include <TerranShip.h>
#include <ProtossShip.h>
#include "Carrier.h"
#include "Defines.h"
#include <stdlib.h>

Error initCarrier(Carrier *self)
{
    Error err = NO_ERROR;
    if(self == NULL)
    {
        self = (Carrier *) calloc(1, sizeof(Carrier));
        if(self == NULL)
        {
            checkForError(self, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
        }
    }
    initProtossShip(&self->protossShip, CARRIER, CARRIER_HEALTH, CARRIER_DAMAGE, CARRIER_SHIELD);
    self->interceptors = MAX_INTERCEPTORS;

    return err;
}


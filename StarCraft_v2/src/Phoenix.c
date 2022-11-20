//#include <stddef.h>
#include <stdlib.h>

#include "Phoenix.h"
#include "ProtossShip.h"
#include "Defines.h"


Error initPhoenix(Phoenix *self) {

    Error err = NO_ERROR;
    if(self == NULL)
    {
        self = (Phoenix *) calloc(1, sizeof(Phoenix));
        if(self == NULL)
        {
            checkForError(self, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
        }
    }
    initProtossShip(&self->protossShip, PHOENIX, PHOENIX_HEALTH, PHOENIX_DAMAGE, PHOENIX_SHIELD);

    return err;
}


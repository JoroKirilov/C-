#include <stddef.h>
#include <stdlib.h>

#include "Viking.h"
#include "Defines.h"

Error initViking(Viking **self)
{
    Error err = NO_ERROR;
    if(*self == NULL)
    {
        *self = (Viking*) calloc (1, sizeof(Viking));
        if (*self == NULL)
        {
            err = checkForError(*self, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
            return err;
        }
    }
    initTerranShip(&(*self)->terranShip, VIKING, VIKING_HEALTH, VIKING_DAMAGE);

    return err;
}


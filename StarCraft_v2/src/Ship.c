#include "Ship.h"
#include <stdint.h>
#include <stdlib.h>
#include <ErrorHandler.h>


Error initShip(Ship *self, int16_t typeShip, int16_t health , int16_t damage)
{
    Error err = NO_ERROR;
    if(self == NULL)
    {
        self = (Ship*) calloc (1, sizeof(Ship));
        {
            if(self == NULL)
            {
                checkForError(self, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
                return err;
            }
        }
    }
    self->typeShip = typeShip;
    self->health = health;
    self->damage = damage;

    return  err;
}



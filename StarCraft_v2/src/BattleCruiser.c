#include <stddef.h>
#include <stdlib.h>

#include "BattleCruiser.h"
#include "Defines.h"

Error initBattleCruiser(BattleCruiser **self)
{
   Error err = NO_ERROR;
   if(*self == NULL)
   {
       *self = (BattleCruiser*) calloc(1, sizeof(BattleCruiser)); // self = 0xac341
       if(*self == NULL)
       {
          err = checkForError(*self, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
          return err;
       }
   }
   initTerranShip(&(*self)->terranShip, BATTLE_CRUISER, BATTLE_CRUSER_HEALTH, BATTLE_CRUSER_DAMAGE);

    return err;
}
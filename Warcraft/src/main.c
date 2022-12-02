#include "Hero.h"
#include "GameLogic.h"
#include "ErrorHandler.h"

int main()
{
    Party party;
    Error err = NO_ERROR;

    err = getInputHeroes(&party);

    if(err == NO_ERROR)
    {
        err = getActionsInput(&party);
    }
    if(err == NO_ERROR)
    {
        err = startGame(&party);
    }
    if(err == NO_ERROR)
    {
        deinit(&party);
    }

    return err;
}
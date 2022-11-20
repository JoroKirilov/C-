#include "ErrorHandler.h"
#include <stdio.h>

Error checkForError(const void *const pointerToCheck, const enum error errorType, const char *funcName)
{
    Error err = NO_ERROR;
    if (pointerToCheck == NULL)
    {
        err = errorType;
        printError(errorType, funcName);
    }

    return err;
}

void printError(const int errType, const char *funcName)
{
    char* errors[] = {"NO_ERROR", "NULL_PARAMETER", "ALLOCATION_ERROR", "INVALID_TYPE"};

    fprintf(stderr, "%s() failed: received %s error.\n", funcName, errors[errType]);

}

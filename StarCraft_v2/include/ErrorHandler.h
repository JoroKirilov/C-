#ifndef STARCRAFT_ERRORHANDLER_H
#define STARCRAFT_ERRORHANDLER_H

#define CURRENT_FUNC_NAME __func__

typedef enum error{
    NO_ERROR = 0,
    NULL_PARAMETER,
    ALLOCATION_ERROR,
    INVALID_TYPE_SHIP
}Error;


/**
 * Check for eventual errors
 * @param pointer to void pointer
 * @param int error type
 * @param current funcName
 * return type of error or NO_ERROR
 */
Error checkForError(const void *const pointerToCheck, const enum error errorType, const char *funcName);


/**
 * Print type of error
 * @param int error type
 * @param char name of current function
 */
void printError(const int errType, const char *funcName);

#endif //STARCRAFT_ERRORHANDLER_H

#ifndef WARCRAFT_ERRORHANDLER_H
#define WARCRAFT_ERRORHANDLER_H


#define CURRENT_FUNC_NAME __func__


typedef enum error {
    NO_ERROR = 0, NULL_PARAMETER, ALLOCATION_ERROR, INVALID_INPUT
}Error;

void printError(const Error typeOfError, const char *funcName);

Error checkForError(const void * const ptrToCheck, const Error typeOfError, const char *funcName);

// Error checkSizeOfName(const char* name);

#endif //WARCRAFT_ERRORHANDLER_H

#include "Utilities.h"
#include "Defines.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * Fixes some bugs with no return values in release build
 * @param unused_result number returned from a function, to be ignored here
 */
//
static inline void ignore_result(long long int unused_result){
    (void)unused_result;
}

bool isValidSizeOfName(const char *name)
{
    if((strlen(name) > MAX_HERO_NAME_SIZE) || (name == 0))
    {
        return INVALID;
    }

    return VALID;
}

int getValidNumberInput()
{
    char numberInput[MAX_USER_INPUT_DATA] = {'\0'};
    int numberFromInput = 0;

    bool validNumInput = VALID;
    do
    {
        validNumInput = VALID;
        ignore_result(scanf("%s", numberInput));
        int length = strlen(numberInput);
        for (int i = 0; i < length; i++)
        {
            if (!isdigit(numberInput[i]))
            {
                printf("Please, enter a natural number ( >= 0 ): ");
                validNumInput = INVALID;
                break;
            }
        }
    }
    while(!validNumInput);
    
    numberFromInput = atoi(numberInput);
    
    return numberFromInput;
}

void trimWhitespaceAtStartAndEnd(char text[])
{
    int length = strlen(text);

    if (length == 0)
    {
        return;
    }

    char trimmedText[length];
    int indexInString = 0;
    int trimmedStringLength = length;

    for ( ; indexInString < length; indexInString++)
    {
        if (text[indexInString] != ' ' && text[indexInString] != '\n')
        {
            break;
        }
        trimmedStringLength--;
    }

    for ( ; indexInString <= length; indexInString++)
    {
        int indexInTrimmedString = trimmedStringLength - length + indexInString;
        trimmedText[indexInTrimmedString] = text[indexInString];
    }

    for (int i = trimmedStringLength - 1; i > 0; i--)
    {
        if (trimmedText[i] == ' ' || trimmedText[i] == '\n')
        {
            trimmedText[i] = '\0';
        }
        else
        {
            break;
        }
    }

    strcpy(text, trimmedText);
}

int clearInputBuffer(){
    int leftNumsInBuffer = 0;
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            leftNumsInBuffer++;
        }
    }

    return leftNumsInBuffer;
}

void readHeroName(char name[])
{
    ignore_result(scanf("%[^0-9]s", name));
    trimWhitespaceAtStartAndEnd(name);
}

void handleNameValidation(char textInput[], bool *validData)
{
    if (!isValidSizeOfName(textInput))
    {
        printf("Not valid name.");
        *validData = false;
    }
}

void handleNumbersCount(bool *validData)
{
    if (clearInputBuffer() > 0)
        {
            printf("You entered too many numbers!");
            *validData = false;
        }
}

void readHeroInput(char name[], int *maxMana, int *baseManaRegenRate){
    
    bool validData = true;
    char textInput[MAX_USER_INPUT_DATA] = "";
    
    do
    {
        validData = true;

        readHeroName(textInput);
        *maxMana = getValidNumberInput();
        *baseManaRegenRate = getValidNumberInput();
    
        handleNameValidation(textInput, &validData);
        handleNumbersCount(&validData);

        if (!validData)
        {
            printf("Please enter all data for this hero again: ");
        }
   }
    while (!validData);
   
    strcpy(name, textInput);
}

void readArchmageHeroInput(char name[], int *maxMana, int *baseManaRegenRate, int *manaRegenModifier){
    
    bool validData = true;
    char textInput[MAX_USER_INPUT_DATA] = "";
    
    do
    {
        validData = true;

        readHeroName(textInput);
        *maxMana = getValidNumberInput();
        *baseManaRegenRate = getValidNumberInput();
        *manaRegenModifier = getValidNumberInput();

        handleNameValidation(textInput, &validData);
        handleNumbersCount(&validData);

        if (!validData)
        {
            printf("Please enter all data for this hero again: ");
        }
    }
    while (!validData);
   
    strcpy(name, textInput);
}

int getValidActionInput(){
    int actionInput = -1;
    
    do
    {
        actionInput = getValidNumberInput();

        if (actionInput > COUNT_ACTIONS - 1)
        {
            printf("Enter valid action number: ");
        }
    }
    while (actionInput > COUNT_ACTIONS - 1);

    return actionInput;
}

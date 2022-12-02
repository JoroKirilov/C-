#ifndef WARCRAFT_UTILITIES_H
#define WARCRAFT_UTILITIES_H

#include <stdbool.h>

#define MAX_NUMBER_STRING_SIZE 5
#define MAX_USER_INPUT_DATA 200

enum validation{
    INVALID = 0, VALID
};

/**
 * Checks if name is valid size(between 0 and MAX_HERO_NAME_SIZE)
 * @param name string to be checked if is valid
 */
bool isValidSizeOfName(const char *name);

/**
 * Gets number from stdin, loops until function has valid number ( >= 0)
 * returns the number
 */
int getValidNumberInput();

/**
 * Clears all whitespaces at beginning and at the end of a string
 * @param text string
 */
void trimWhitespaceAtStartAndEnd(char text[]);

/**
 * Reads input for Hero from stdin - reads the following data:
 * @param name string(char array) name of Hero
 * @param maxMana int pointer
 * @param baseManaRegenRate int pointer
 */
void readHeroInput(char name[], int *maxMana, int *baseManaRegenRate);

/**
 * Reads input for Hero from stdin about the following data:
 * @param name string name of Hero
 * @param maxMana int pointer
 * @param baseManaRegenRate int pointer
 * @param manaRegenModifier int pointer
 */
void readArchmageHeroInput(char name[], int *maxMana, int *baseManaRegenRate, int *manaRegenModifier);

/**
 * Reads input for action from stdin (loops until get valid input)
 * returns the number of action (>= 0) && (< COUNT_ACTIONS)
 */
int getValidActionInput();

#endif //WARCRAFT_UTILITIES_H

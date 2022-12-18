#include "headers/getInput.h"
#include "headers/validInput.h"
#include "isInputInCorrectRange.h"
#include <stdlib.h>
#include <stdio.h>


#define BUFFER_SIZE 100


void getInput (uint16_t inputDataArr[] )

{
    uint16_t rowCount = 0 ; 
    bool isValidInput = false ; 
    char buffer[BUFFER_SIZE] ; 
    FILE* filePointer;
    filePointer = fopen("inputOutput/fruitsIn.txt", "r"); 

    if (filePointer == NULL)
    {
        printf("%s failed. Open the file failed\n" , __func__);
        return ;
    }
    else 
    {
        while (!feof(filePointer))                      // until reach end of the file
        {   
            fgets(buffer, BUFFER_SIZE, filePointer);    // read input line by line and save string in buffer            
            isValidInput = validInput(buffer);          // call function validInput() to check the input and return true or false
            if (isValidInput)
            {
                inputDataArr[rowCount] = atoi(buffer) ;   // cast string to digit and add to array on rowCount index
                rowCount++ ;
            }
            else
            {
                printf("%s failed. Incorrect input\n" , __func__);
                fclose(filePointer);
                return ;
            }
        }   

        IsInCorrectRange(inputDataArr , rowCount);  // check input is in the allowable range
    }
    fclose(filePointer);
}
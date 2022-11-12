#include "../include/tables.h"

#include<stdio.h>
#include<stdlib.h>




struct customer {
    uint16_t tableId;                //TODO :need add more things
    uint16_t nr_orders;
    uint16_t *menuIDs;
    CustomerStatus status;      //enum in customer.h
};


/**
 * Create new table
 * @return Pointer to table
 */
Table *newTable() {
    static uint16_t numberOfTable = 1;
    Table *tmpTable = (Table *) malloc(sizeof(Table));  /// TODO : Check pointer is NULL ???
    if(tmpTable == NULL){
        puts("Error allocating table!");
    }
    tmpTable->tableNumber = numberOfTable ;
    tmpTable->status = FREE ;
    tmpTable->customer = NULL ;
    numberOfTable++;
    return tmpTable;
}

/**
 * Generate max table
 * @param Table - Pointer to table
 */
void GenTables (Table **Tables)
{
    for (int i = 0; i < MAX_TABLES; i++)
        {
            Tables[i] = newTable( );              //ADD 8 TABLES WITH NO VALUES
        }
}

/**
 * Number of free table
 * @param Table - Pointer to table
 * @return Returns number of free table
 */
/* int numberOfFreeTable (const Table *const Tables)
{
    int freeTableCount = 0 ;
    for (size_t i = 0; i < MAX_TABLES; i++)
        {
            if(Tables[i].status == FREE)
            {
                freeTableCount++ ;                     //Check numbers of free tables 
            }
        }
        return freeTableCount ;
} */

/**
 * Fill tables with customers
 * @param Table - Pointer to table
 * @param QueueCustomer - Pointer to queue of customers
 */
void fillTable(Table **tables ,  QueueCustomer *customersQ )
{
    for (size_t i = 0; i < MAX_TABLES; i++)
    {
        if(tables[i]->status == FREE )
        {
            tables[i]->customer = dequeue(customersQ);
            if(tables[i]->customer  == NULL)
            {
                break;
            }
            tables[i]->status = BUSY;
            tables[i]->customer->tableId = tables[i]->tableNumber;
            tables[i]->customer->status = SEATED;
        }
    }
}

/**
 * Print all tables
 * @param Table - Pointer to table
 */
void printBusyTables(Table **Tables)
{
    puts("Tables: ");
    for(uint16_t i = 0; i < MAX_TABLES; i++)
    {
        if(Tables[i]->status == BUSY)
        {
            printf("%lu ", Tables[i]->customer->menuIDs[0]);
            if(Tables[i]->customer->nr_orders == 2)
            {
                printf("%lu ", Tables[i]->customer->menuIDs[1]);
            }
            printf("|");
        }
    }
    printf("\n");
}

uint16_t getNumOfFreeTables (Table **tables)              /// must set const here 
{
  uint16_t freeTables = 0 ; 
  for (size_t i = 0; i < MAX_TABLES; i++)
  {
    if (tables[i]->status == FREE)
    {
        freeTables++;
    }
  }
  return freeTables;    
}
#include "tables.h"

#include<stdio.h>
#include<stdlib.h>

#include "Customer.h"
#include "defines.h"
#include "utility.h"

/**
 * Struct to hold info regarding each table and its orders.
 */

struct customer {
    int tableId;                //TODO :need add more things
    int nr_orders;
    int *menuIDs;
    CustomerStatus status;      //enum in customer.h
};


struct table {
    int tableNumber ;
    TableStatus status ;
    Customer *customer ;
};


Table *newTable() {
    static int numberOfTable = 1;
    Table *tmpTable = (Table *) malloc(sizeof(Table));  /// TODO : Check pointer is NULL ???

    tmpTable->tableNumber = numberOfTable ;
    tmpTable->status = FREE ;
    tmpTable->customer = NULL ;
    numberOfTable++;
    return tmpTable;
}

void GenTables (Table **Tables)
{
    for (int i = 0; i < MAX_TABLES; i++)
        {
            Tables[i] = newTable( );              //ADD 8 TABLES WITH NO VALUES
        }
}

int numberOfFreeTable (const Table *const Tables)
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
}

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




Order *newOrder (int numberOfTable, int *menuIDs , int nr_orders )   // add one more argument .
{
    Order *tmpOrder = (Order *) malloc(sizeof(Order));
    tmpOrder->nr_orders = nr_orders; 
    tmpOrder->menuIDs = menuIDs ;
    tmpOrder->tableNumber = numberOfTable ;
    return tmpOrder;
}



void takeOrder (QueueOrders *orderQ , Table **Tables )
{
    for (size_t i = 0; i < MAX_TABLES ; i++)
    {
        if(Tables[i]->status == BUSY && Tables[i]->customer->status == SEATED)
        {
            Order *tempOrder = newOrder ( Tables[i]->tableNumber , Tables[i]->customer->menuIDs, Tables[i]->customer->nr_orders);
            enqueueOrders(orderQ, tempOrder);
            Tables[i]->customer->status = ORDERED ;
        }
    }

}
void printAllTable(Table **Tables)
{
    puts("Tables: ");
    for(int i = 0; i < MAX_TABLES; i++)
    {
        if(Tables[i]->status == BUSY){
            printf("%d ", Tables[i]->customer->menuIDs[0]);
            if(Tables[i]->customer->nr_orders == 2) {
                printf("%d ", Tables[i]->customer->menuIDs[1]);
            }
            printf("|");
        }
    }
    printf("\n");
}
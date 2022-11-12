#ifndef GROUP_TASK1_TABLES_H
#define GROUP_TASK1_TABLES_H

#include "Customer.h"


#define MAX_TABLES 8
#define MAX_ORDERS_TABLE 2

typedef  struct table {
    int tableNumber ;
    TableStatus status ;
    Customer *customer ;
}Table;


Table *newTable();
/* int numberOfFreeTable (const Table *const Tables); */
void GenTables (Table **Tables);
void fillTable(Table **tables , QueueCustomer *customersQ);           /// tables with lowercase ???
uint16_t getNumOfFreeTables (Table **tables);
void printBusyTables(Table **Tables);                                // const ?? 



#endif //GROUP_TASK1_TABLES_H
#ifndef GROUP_TASK1_TABLES_H
#define GROUP_TASK1_TABLES_H

#include "Customer.h"


#define MAX_TABLES 8
#define MAX_ORDERS_TABLE 2

typedef struct table Table;

typedef struct order {
    int tableNumber ;
    int nr_orders;
    int *menuIDs;
} Order;

typedef struct queueOrders
{
    int size;
    int front;
    int rear;
    Order *orders;
} QueueOrders;


Table *newTable();
int numberOfFreeTable (const Table *const Tables);
void GenTables (Table **Tables);
void fillTable(Table **tables , QueueCustomer *customersQ );
void takeOrder (QueueOrders *orderQ , Table **Tables);
void printAllTable(Table **Tables);
Order *newOrder (int numberOfTable, int *menuIDs , int nr_orders );






#endif //GROUP_TASK1_TABLES_H
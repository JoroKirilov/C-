#ifndef ORDER_HEADER
#define ORDER_HEADER

#include "tables.h"


#define SIZE_OF_QUEUE_ORDERS 100

typedef struct order {
    uint16_t tableNumber ;
    uint16_t nr_orders;
    uint16_t *menuIDs;
} Order;

typedef struct queueOrders
{
    uint16_t size;
    uint16_t front;
    uint16_t rear;
    Order *orders;
} QueueOrders;

Order *newOrder (uint16_t numberOfTable, uint16_t *menuIDs , uint16_t nr_orders );
void takeOrder (QueueOrders *orderQ , Table **Tables);

void createQueueOrders(QueueOrders *order, uint16_t size);
void enqueueOrders(QueueOrders *orderQ, Order *order);
Order* dequeueOrders(QueueOrders *orderQ);
void dequeueOrdersD(QueueOrders *orderQ);
//void DisplayOrders(QueueOrders *orderQ);
void DisplayOrders(Table **tables);



#endif //ORDER_HEADER
#include "../include/order.h"
#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>


struct customer {
    uint16_t tableId;               
    uint16_t nr_orders;
    uint16_t *menuIDs;
    CustomerStatus status;     
};

/**
 * Number of free table
 * @param numberOfTable - id of table
 * @param menuIDs - Pointer to chosen dishes of customer
 * @param nr_orders - Count of ordered dish
 * @return Pointer to order
 */
Order *newOrder (uint16_t numberOfTable, uint16_t *menuIDs , uint16_t nr_orders )
{
    Order *tmpOrder = (Order *) malloc(sizeof(Order));
    tmpOrder->menuIDs = menuIDs ;
    tmpOrder->tableNumber = numberOfTable ;
    tmpOrder->nr_orders = nr_orders;
    return tmpOrder;
}

/**
 * Number of free table
 * @param QueueOrders - pointer to queue of orders
 * @param Table - Pointer to array of tables
 */
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

/**
 * Create Queue of Customer
 * @param QueueOrders - Pointer to queue of orders
 */
void createQueueOrders(QueueOrders *order, uint16_t size)
{
    order->size=size;
    order->front = order->rear=0;
    order->orders = (Order *) malloc( order->size * sizeof(Order));
}

/**
 * Create Add on queue of customer
 * @param QueueOrders - Pointer to queue of orders
 * @param Customer - Pointer to order
 */
void enqueueOrders(QueueOrders *orderQ, Order *order)
{
    if((orderQ->rear + 1) % orderQ->size == orderQ->front)
        printf("Queue is Full");
    else
    {
        orderQ->rear = (orderQ->rear + 1) % orderQ->size;
        orderQ->orders[orderQ->rear] = *order;
    }
}

/**
 * Take first customer from queue
 * @param QueueOrders - Pointer to queue of orders
 */
Order* dequeueOrders(QueueOrders *orderQ)
{
    Order *x;
    if(orderQ->front == orderQ->rear)
    {

        x = NULL;
    }
    else{
        x = &(orderQ->orders[(orderQ->front+1) % orderQ->size]);
    }
    return x;
}

/**
 * Delete first customer from queue
 * @param QueueOrders - Pointer to queue of orders
 */
void dequeueOrdersD(QueueOrders *orderQ)
{
    orderQ->front = (orderQ->front+1) % orderQ->size;
}

/**
 * Display customer in queue
 * @param QueueOrders - Pointer to queue of orders
 */

void DisplayOrders(Table **tables )
{
    for (size_t i = 0; i < MAX_TABLES ; i++)
    {
        if(tables[i]->status == BUSY && tables[i]->customer->status != ORDERED)
        {
            if (tables[i]->customer->nr_orders == 1)
            {
                printf("One dish for table # %hu: " , tables[i]->tableNumber);
                printf("%hu\n" , tables[i]->customer->menuIDs[0]);
                Sleep(GAME_SPEED + 1000);
            }
            else if(tables[i]->customer->nr_orders == 2)
            {
                printf("Two dishes for table # %hu: " , tables[i]->tableNumber);
                printf("%hu and " , tables[i]->customer->menuIDs[0]);
                printf("%hu\n" , tables[i]->customer->menuIDs[1]);
                Sleep(GAME_SPEED + 1000);
            }
            else
            {
                printf("Error"); 
            }    
        }
    }
    
}

/* void DisplayOrders(QueueOrders *orderQ)
{
    uint16_t i = orderQ->front + 1;
    do
    {
        if(orderQ->orders[i].nr_orders == 2 ){
            printf("%hu ",orderQ->orders[i].menuIDs[0]);
            printf("%hu ",orderQ->orders[i].menuIDs[1]);
            printf("|");
        }
        else if (orderQ->orders[i].nr_orders == 1){
            printf("%hu ",orderQ->orders[i].menuIDs[0]);
            printf("|");
        }

        i = (i + 1) % orderQ->size;
    }while(i != (orderQ->rear + 1) % orderQ->size);
    printf("\n");
}   */
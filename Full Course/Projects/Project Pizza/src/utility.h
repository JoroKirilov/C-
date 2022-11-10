#ifndef UTILITY_HEADER
#define UTILITY_HEADER

#include "tables.h"
#include "Customer.h"

//#include "restaurant.h"

#define SIZE_OF_QUEUE 50
#define SIZE_OF_QUEUE_ORDERS 50





void createQueueCustomer(QueueCustomer *customer, int size);
void enqueue(QueueCustomer *customersQ, Customer *customer);
Customer* dequeue(QueueCustomer *customersQ);
void Display(QueueCustomer *customersQ);

void createQueueOrders(QueueOrders *order, int size);
void enqueueOrders(QueueOrders *orderQ, Order *order);
Order* dequeueOrders(QueueOrders *orderQ);
void dequeueOrdersD(QueueOrders *orderQ);
void DisplayOrders(QueueOrders *orderQ);




#endif //UTILITY_HEADER
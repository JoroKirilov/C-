#ifndef GROUP_TASK_RESTAURANT_CUSTOMER_H
#define GROUP_TASK_RESTAURANT_CUSTOMER_H

#include "defines.h"
#include <stdbool.h>
#include <stdint.h>
#define SIZE_OF_QUEUE_CUSTOMER 100

typedef struct customer Customer;

typedef struct queueCustomer{
    uint16_t size;
    uint16_t front;
    uint16_t rear;
    Customer *customerInQ;
}QueueCustomer ;


Customer *newCustomer(void);         // create customer           

bool angryFlipLeave(Customer *client);

bool getCustomerStatus(const Customer *const client);

void createQueueCustomer(QueueCustomer *customer, uint16_t size);

void enqueue(QueueCustomer *customersQ, Customer *customer);

Customer* dequeue(QueueCustomer *customersQ);

void DisplayCustomersQueue(QueueCustomer *customersQ);

uint16_t getNumOfCustomerQueue(QueueCustomer *customerQueue) ;

void printQueueOfWaitingPeople (uint16_t waitingCustomersOutside) ; 

#endif //GROUP_TASK_RESTAURANT_CUSTOMER_H
#ifndef GROUP_TASK_RESTAURANT_CUSTOMER_H
#define GROUP_TASK_RESTAURANT_CUSTOMER_H

#include "defines.h"
typedef struct customer Customer;    // forward declaration 
typedef struct queueCustomer
{
    int size;
    int front;
    int rear;
    Customer *customerInQ;
}QueueCustomer ;
Customer *newCustomer(void);         // create customer           

short angryFlipLeave(Customer *client);

int getCustomerStatus(Customer *client);

#endif //GROUP_TASK_RESTAURANT_CUSTOMER_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <time.h>

#include "../include/Customer.h"

struct customer {    
    uint16_t tableId;                
    uint16_t nr_orders;
    uint16_t *menuIDs;
    CustomerStatus status;     
};
/**
 * Create New Customer
 * @return Returns Customer
 */
Customer *newCustomer(void) { 
    Customer *tmpCustomer = (Customer *) malloc(sizeof(struct customer));
    if(tmpCustomer == NULL){
        puts("Error allocating customer!");
    }
    srand(time(0));
    tmpCustomer->tableId = 0 ;
    tmpCustomer->status = NO_STATUS;
    tmpCustomer->nr_orders = (rand() % MAX_ORDERS) + 1;
    tmpCustomer->menuIDs = (uint16_t *) calloc(tmpCustomer->nr_orders, sizeof(uint16_t));

    for (int  i = 0; i < tmpCustomer->nr_orders; i++) {
        tmpCustomer->menuIDs[i] = (rand() % MAX_ORDER_ID) + 1;
        //printf("MenuID chosen: %d \n", tmpCustomer->menuIDs[i]);
    }
    return tmpCustomer;
}

/**
 * Get status of Customer
 * @param Customer - Pointer to customer
 * @return Returns Customer status
 */
bool getCustomerStatus(const Customer * const client) {
    return client->status;
}

bool angryFlipLeave(Customer *client) {
    if (client->status == ORDERED) {
        printf("(╯°□°）╯\n\n");
        return true;
    }
    return false;
}

/**
 * Create Queue of Customer
 * @param CustomerQueue - Pointer to queue of customer
 */
void createQueueCustomer(QueueCustomer *customer, uint16_t size)
{
    customer->size=size;
    customer->front = customer->rear=0;
    customer->customerInQ = (Customer *) malloc( customer->size * sizeof(Customer));
}

/**
 * Create Add on queue of customer
 * @param CustomerQueue - Pointer to queue of customer
 * @param Customer - Pointer to customer
 */
void enqueue(QueueCustomer *customersQ, Customer *customer)
{
    if((customersQ->rear + 1) % customersQ->size == customersQ->front)
        printf("Queue is Full");
    else
    {
        customersQ->rear = (customersQ->rear+1) % customersQ->size;
        customersQ->customerInQ[customersQ->rear] = *customer;
    }
}

/**
 * Take and delete first customer from queue
 * @param CustomerQueue - Pointer to queue of customer
 */
Customer* dequeue(QueueCustomer *customersQ)
{
    Customer *customerOnTable;
    if(customersQ->front == customersQ->rear)
    {
        customerOnTable = NULL;
    }
    else{
        customersQ->front = (customersQ->front+1) % customersQ->size;
        customerOnTable = &(customersQ->customerInQ[customersQ->front]);
    }
    return customerOnTable;
}

/**
 * Display customer in queue
 * @param CustomerQueue - Pointer to queue of customer
 */
void DisplayCustomersQueue(QueueCustomer *customersQ)
{

    uint16_t i = customersQ->front + 1;
    do
    {
        if(customersQ->customerInQ[i].nr_orders == 2){

            printf("%hu ",customersQ->customerInQ[i].menuIDs[0]);
            printf("%hu ",customersQ->customerInQ[i].menuIDs[1]);
            printf("|");
        }
        if(customersQ->customerInQ[i].nr_orders == 1){
            printf("%hu ",customersQ->customerInQ[i].menuIDs[0]);
            printf("|");
        }
        i = (i + 1) % customersQ->size;
    }while(i != (customersQ->rear + 1) % customersQ->size);
    printf("\n");

}


uint16_t getNumOfCustomerQueue(QueueCustomer *customerQueue)
{
    if(customerQueue->front == customerQueue->rear)
    {
        return 0 ;
    }
    uint16_t i = customerQueue->front + 1;
    uint16_t waitingCustomersOutside = 0 ; 
 
    
    do
    {
        waitingCustomersOutside++;
        i = (i + 1) % customerQueue->size;
    }while(i != (customerQueue->rear + 1) % customerQueue->size);
    
    return waitingCustomersOutside ;
}

void printQueueOfWaitingPeople (uint16_t waitingCustomersOutside)
{
    if(waitingCustomersOutside == 0)
    {
        printf("Boss, we did it well ");
        printf("(Аll customers are accomodate)\n");                                     
    }
    else if(waitingCustomersOutside == 1 )
    {
        printf("There is only one customer outside\n");
        printf("☻\n");
    }
    else if(waitingCustomersOutside > 1 && waitingCustomersOutside <= 6)
    {
        printf("CHEF,hurry up... \n");
        for (size_t i = 0; i < waitingCustomersOutside ; i++)
        {   
            printf("|");
            printf("☻ "); 
        }
        printf("\n");
    }
    else if(waitingCustomersOutside > 6 && waitingCustomersOutside <= 12)
    {
        printf("CHEF,hurry up.People outside are getting angry !!! \n");
        for (size_t i = 0; i < waitingCustomersOutside ; i++)
        {   
            printf("|");
            printf("☻ "); 
        }
        printf("\n");
    }
    else
    {
        printf("People outside started destroying the garden\n");
         for (size_t i = 0; i < waitingCustomersOutside ; i++)
        {   
            printf("|");
            printf("☻ "); 
        }
        printf("\n");
    }
}
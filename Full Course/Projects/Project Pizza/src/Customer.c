#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "Customer.h"


/*UNFINISHED. FINISH SO IT WORKS*/

struct customer {    
    int tableId;                //TODO :need add more things 
    int nr_orders;
    int *menuIDs;
    CustomerStatus status;      //enum in customer.h
};

Customer *newCustomer(void) { 
    Customer *tmpCustomer = (Customer *) malloc(sizeof(struct customer));
    srand(time(0));
    tmpCustomer->tableId = 0 ;
    tmpCustomer->status = NO_STATUS;
    tmpCustomer->nr_orders = (rand() % MAX_ORDERS) + 1;
    tmpCustomer->menuIDs = (int *) calloc(tmpCustomer->nr_orders, sizeof(int));
              

    for (int i = 0; i < tmpCustomer->nr_orders; i++) {
        tmpCustomer->menuIDs[i] = (rand() % MAX_ORDER_ID) + 1;
        printf("MenuID chosen: %d \n", tmpCustomer->menuIDs[i]);
    }
    return tmpCustomer;
}

int getCustomerStatus(Customer *client) {
    return client->status;
}

short angryFlipLeave(Customer *client) {
    if (client->status == NO_STATUS) {
        printf("(╯°□°）╯\n\n");
        return TRUE;
    }

    return FALSE;
}
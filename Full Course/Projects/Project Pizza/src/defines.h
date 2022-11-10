#ifndef GROUP_TASK1_DEFINES_H
#define GROUP_TASK1_DEFINES_H

#define string char*

#define EXIT_OK 0        // not good error handling
#define EXIT_NOK 1       // TODO :REMOVE THIS AND WRITE GOOD ERROR HANDLING    
#define TRUE 1
#define FALSE 0

#define MAX_ROUNDS 10
#define MAX_ORDERS 2
#define MAX_ORDER_ID 12
#define MAX_CUSTOMERS 10

typedef enum CustomerStatus {
    NO_STATUS = 0,
    WAITING_IN_QUEUE,   // when all table is not free , we set customer in queue
    SEATED,         
    ORDERED,            //custumer make a order and chef have free slot 
    WELL_FED,           // last status 
    LEAVING             //  
} CustomerStatus;

typedef enum TableStatus {
    FREE = 0,
    BUSY,             
} TableStatus;

#endif //GROUP_TASK1_DEFINES_H
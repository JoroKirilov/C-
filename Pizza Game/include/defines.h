#ifndef GROUP_TASK1_DEFINES_H
#define GROUP_TASK1_DEFINES_H

#define string char*
#define GAME_SPEED 200    //lower value is faster 

#define EXIT_OK 0         
#define EXIT_NOK 1        // TODO :REMOVE THIS AND WRITE GOOD ERROR HANDLING    

#define MAX_ROUNDS 10
#define MAX_ORDERS 2
#define MAX_ORDER_ID 12
#define MAX_CUSTOMERS 10

typedef enum CustomerStatus {
    NO_STATUS = 0,
    WAITING_IN_QUEUE,       // when all table is not free , we set customer in queue
    SEATED,         
    ORDERED,                //custumer make a order 
    WELL_FED,               // last status 
} CustomerStatus;

typedef enum TableStatus {
    FREE = 0,
    BUSY,             
} TableStatus;

typedef enum GameResult {
    GOOD_GAME = 0 ,         //message when we haven't queue of customers 5 rounds ;
    LOSE,                  // when our score is lower than 1 ; 
} GameResult ;

#endif //GROUP_TASK1_DEFINES_H
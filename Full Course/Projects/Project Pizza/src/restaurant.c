#include<Windows.h>
#include <time.h>
#include <stdlib.h>
#include<stdio.h>

//Replace following with Windows.h if on Windows OS
//#include <unistd.h>

#include "utility.h"
#include "restaurant.h"
#include "tables.h"
#include "Dish.h"
#include "defines.h"


struct customer {
    int tableId;                //TODO :need add more things
    int nr_orders;
    int *menuIDs;
    CustomerStatus status;      //enum in customer.h
};

/*UNFINISHED. FINISH SO IT WORKS. ENTRY POINT FOR THE TASK*/


short openForBusiness(void) {                 // TODO : bool variables
    static int i = 0;
   
   // static int score = 0;

    Customer *ClientsIncoming[MAX_CUSTOMERS] ;
    QueueCustomer customersQ ;
    Table *Tables[MAX_TABLES] ;
    static Dish *dishes[MAX_ORDER_ID];
    QueueOrders ordersQ ;
    if(i == 0){

        createQueueCustomer(&customersQ, SIZE_OF_QUEUE);
        GenTables (Tables) ;
        createQueueOrders(&ordersQ, SIZE_OF_QUEUE_ORDERS);
        generateMaxDish(dishes, MAX_ORDER_ID);
        hireChef("Ivan");
    }
    printf("Chef Max dish: %d\n", ChefMaxDish(callChef()));


    for (; i < MAX_ROUNDS;) {
        int BlackFridayWave = rand() % MAX_CUSTOMERS + 1;
            printf("Customers in round %d : %d \n" , i + 1 ,BlackFridayWave ); 

        for (int j = 0; j < BlackFridayWave; j++) {
            ClientsIncoming[j] = newCustomer();
            enqueue(&customersQ, ClientsIncoming[j]);
            Sleep(500);
        }
        puts("Customer queue orders");
        Display(&customersQ);

        fillTable(Tables ,  &customersQ);
        
        takeOrder(&ordersQ, Tables);
        puts("Order queue");
        DisplayOrders(&ordersQ);
        printAllTable(Tables);
        makeOrder(callChef(), &ordersQ, dishes, Tables);

        //puts("Arr of chef");
        //printCookedDish(callChef());
        puts("");



       // for (int k = 0; k < BlackFridayWave; k++) {
//            if (angryFlipLeave(ClientsIncoming[k])) {
//                score -= 1;
//            }

//            if (getCustomerStatus(ClientsIncoming[k]) >= 2) {
//                score += 1;
//            }
//        }

        i++;
        return TRUE;
    }
    return FALSE;
}
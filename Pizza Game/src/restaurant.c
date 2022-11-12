#include "../include/restaurant.h"
#include "../include/Graphics.h"
#include "../include/Score.h"

#include <stdlib.h>
#include<stdio.h>
//Replace following with Windows.h if on Windows OS
//#include <unistd.h>
#include <Windows.h>

bool openForBusiness(void) {                
    static uint16_t round = 1;                   // start game round
    static int16_t score = 200;                  // start game with points of trust 
    Customer *ClientsIncoming[MAX_CUSTOMERS] ;
    QueueCustomer customersQ ;                    
    Table *Tables[MAX_TABLES] ;
    static Dish *dishes[MAX_ORDER_ID];
    QueueOrders ordersQ ;
    if(round == 1)
    {
        char name[] = "Ivan";
        createQueueCustomer(&customersQ, SIZE_OF_QUEUE_CUSTOMER);
        GenTables (Tables) ;
        createQueueOrders(&ordersQ, SIZE_OF_QUEUE_ORDERS);
        generateMaxDish(dishes, MAX_ORDER_ID);
        hireChef(name);
    }

    for (; round <= MAX_ROUNDS;) {
        int BlackFridayWave = rand() % MAX_CUSTOMERS + 1;

        for (int j = 0; j < BlackFridayWave; j++)
        {
            ClientsIncoming[j] = newCustomer();
            enqueue(&customersQ, ClientsIncoming[j]);
            Sleep(GAME_SPEED);
        } 
        displayCurrentPoints(score , round , getChefMaxDish(callChef()));
        printf("START ROUND\n"); 
        printf("Boss, i prepare tables...(SALON REPORT)\n\n"); 
        printTable(Tables);
        printfTableStatus(getNumOfFreeTables(Tables)); 
        Sleep(GAME_SPEED);
        printPeopleThisRound(BlackFridayWave);
        fillTable(Tables ,  &customersQ);
        printf("BOSS, I accommodate customers...\n\n"); 
        Sleep(GAME_SPEED);
        printTable(Tables);
        printfTableStatus(getNumOfFreeTables(Tables));
        printf("\nBOSS, i am taking orders\n\n");
        Sleep(3000);
        printf("Chef, new orders is coming.Listen carefully...\n"); 
        DisplayOrders(Tables);
        takeOrder(&ordersQ, Tables);
        printDivider();
        printf("\nSERVICE\n");
        makeOrder(callChef(), &ordersQ, dishes, Tables);
        printDivider();
        printQueueOfWaitingPeople(getNumOfCustomerQueue(&customersQ));
        printDivider();
        puts("");
        scoreCalculation(getNumOfCustomerQueue(&customersQ) , &score);

        if(checkGameResult(score) == LOSE)
        {
            printGameOver();
            return false ; 
        }
        round++;
        return true;
    }
        printGameResult();
        return false;
}
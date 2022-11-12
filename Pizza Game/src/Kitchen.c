#include "../include/Kitchen.h"
#include "../include/tables.h"

#include <stdbool.h>                 
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


#define MAX_DISH_COUNT 6


/**
 * This is your Chef. The heart of your business. He is defined by his Name and the maximum number of dishes he can cook.
 * To work, he needs to have free CookingSlots and know the Dish he is making. Slots are tracked via dishCounter.
 */
struct chef {
    int maxDishes;
    int dishCounter;
    bool isCooking;
    string ChefName;
    Dish *DishesCooked[];
};

struct customer
{
    int tableId;
    int nr_orders;
    int *menuIDs;
    CustomerStatus status;      
};

static Chef *chef = NULL;


/**
 * If the restaurant has no Chef, you can hire one. Otherwise you will have to fire him first. You can have a SINGLE one!
 * @param Name - Name of the newly hired Chef
 * @param maxDishes - How many dishes can he cook at once
 */
void hireChef(char *Name)
{
    time_t t;
    srand( (unsigned)time(&t));
    if (chef == NULL)
    {
        chef = (Chef *) malloc(sizeof(Chef));
        if(chef == NULL)
        {
            puts("Error allocating chef!");
        }
        chef->isCooking = true;
        chef->maxDishes = rand() % MAX_DISH_COUNT + 1;
        chef->dishCounter = 0;
        chef->ChefName = Name;
        for (int i = 0; i < chef->maxDishes; i++)
        {
            chef->DishesCooked[i] = (Dish *) malloc(sizeof(Dish *));
            if(chef->DishesCooked[i] == NULL)
            {
                puts("Error allocating dish!");
            }
        }
    }
}

/**
 * Calls your Chef. "You rang, Boss?" - he answers
 * @return Returns a pointer to your Chef
 */
Chef *callChef(void)
{                      
    return chef;
}
/**
 * Calls your max dish of chef
 * @return Returns a pointer to your Chef
 */
uint16_t getChefMaxDish(const Chef *chefs)
{
    return chefs->maxDishes;
}

/**
 * Cook and serve dishes to customer
 * @param Chef - Pointer to chef
 * @param QueueOrders - Pointer to queue of orders
 * @param Dish - Pointer to the array of Dish
 * @param Table - Pointer to the Dish ordered
 */
void makeOrder(Chef *chefs, QueueOrders *orderQ, Dish **dishes, Table **table) {
    Order cookedOrder = {0};

    static int flag = 0;

    for(size_t i = 0 ; i < chefs->maxDishes; i++)
    {
        Order *tempOrder = dequeueOrders(orderQ);
        if(tempOrder == NULL)
        {
            break;
        }
        if(flag == 1 )
        {
            chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[1], dishes);
            cookedOrder = *tempOrder;
            dequeueOrdersD(orderQ);
            flag = 0;
        }
        else
        {
            if(tempOrder->nr_orders == 1)
            {
                chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[0], dishes);
                cookedOrder = *tempOrder;
                dequeueOrdersD(orderQ);
            }
            if(tempOrder->nr_orders == 2 )
            {
                chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[0], dishes);
                i++;
                if(i == chefs->maxDishes)
                {
                    flag = 1;
                    break;
                }
                chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[1], dishes);
                cookedOrder = *tempOrder;
                dequeueOrdersD(orderQ);
            }
        }

        if (cookedOrder.nr_orders == 1)
        {
            printf("The dish for table %hu (%hu) is ready.\n", cookedOrder.tableNumber , cookedOrder.menuIDs[0]);
        }
        else{
            printf("The dishs for table %hu (%hu and %hu) are ready.\n", cookedOrder.tableNumber , cookedOrder.menuIDs[0] , cookedOrder.menuIDs[1]);
        }
        
            for(int j = 0; j < MAX_TABLES; j++  )
            {
                if(table[j]->tableNumber == cookedOrder.tableNumber)
                {
                    table[j]->customer->status = WELL_FED ;
                    table[j]->status = FREE;
                    free(table[j]->customer->menuIDs);
                    table[j]->customer->menuIDs = NULL;
                    table[j]->customer = NULL;
                    break;
                }
            }
    }
}



//**
// * Checks if a Dish is cooked.
// * @return Returns TRUE if Dish is ready. If not decreases the cooking timer by 1 unit.
// */
//int cookingTimer(void) {                                     // TODO : make function return bool
//    int tmpTime = 0;
//    Dish *tmpDish = NULL;
//
//    for (int i = 0; i < chef->dishCounter; i++) {
//        if (getDishTimer(chef->DishesCooked[i]) == 0) {
//            chef->DishesCooked[i] = NULL;
//            return TRUE;
//        } else {
//            tmpDish = chef->DishesCooked[i];
//            tmpTime = getDishTimer(tmpDish);
//            tmpTime--;
//            setCookingTime(&tmpDish, tmpTime);
//        }
//    }
//
//    return FALSE;
//}
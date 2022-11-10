#include "Kitchen.h"
#include "utility.h"
#include "Dish.h"
#include "stdio.h"
#include <stdbool.h>                 
#include <stdlib.h>
#include <time.h>

#define MAX_DISH_COUNT 6

/*UNFINISHED. FINISH SO IT WORKS*/

/**
 * This is your Chef. The heart of your business. He is defined by his Name and the maximum number of dishes he can cook.
 * To work, he needs to have free CookingSlots and know the Dish he is making. Slots are tracked via dishCounter.
 */
struct cook {
    int maxDishes;
    int dishCounter;
    bool isCooking;
    string ChefName;
    Dish *DishesCooked[];
};
struct dish {
    int menuID;
    int numIngredients;
    int cookingTime;
    float dishPrice;
    string dishName;
    string* ingerdientsList;   // TODO : read from file (maybe first hardcore)
};
struct table {
    int tableNumber ;
    TableStatus status ;
    Customer *customer ;
};
struct customer {
    int tableId;                //TODO :need add more things
    int nr_orders;
    int *menuIDs;
    CustomerStatus status;      //enum in customer.h
};
static Chef *chef = NULL;

/**
 * If the restaurant has no Chef, you can hire one. Otherwise you will have to fire him first. You can have a SINGLE one!
 * @param Name - Name of the newly hired Chef
 * @param maxDishes - How many dishes can he cook at once
 */
void hireChef(char *Name) {
    time_t t;
    srand( (unsigned)time(&t));
    if (chef == NULL) {
        chef = (Chef *) malloc(sizeof(Chef));   // replace struct cook with Chef
        chef->isCooking = FALSE;
        chef->maxDishes = rand() % MAX_DISH_COUNT + 1;
        printf("Boss i can cook %d dishes per round\n" , chef->maxDishes);
        chef->dishCounter = 0;
        chef->ChefName = Name;
        for (int i = 0; i < chef->maxDishes; i++) {
            chef->DishesCooked[i] = (Dish *) malloc(sizeof(Dish *));
        }
    }
}

/**
 * Calls your Chef. "You rang, Boss?" - he answers
 * @return Returns a pointer to your Chef
 */
Chef *callChef(void) {                      // ??? 
    return chef;
}

int ChefMaxDish(Chef *chefs)
{
    return chefs->maxDishes;
}
/**
 * If the cook has free slots, he can take another Dish to cook
 * @param Dish - Pointer to the Dish ordered
 */
void makeOrder(Chef *chefs, QueueOrders *orderQ, Dish **dishes, Table **table) {
    
    //Order cookedOrder = {0};

    int orderI = 0;
    static int flag = 0;

    int a = 0 ; 
    for(int i = 0 ; i < chefs->maxDishes; i++)     
    {
        Order *tempOrder = dequeueOrders(orderQ);

        if(tempOrder == NULL){
            break;
        }

        if(flag == 1 )
        {
            chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[1], dishes);
            //cookedOrder = *tempOrder;
            table[tempOrder->tableNumber - 1]->status = FREE ;
            table[tempOrder->tableNumber - 1]->customer->status = WELL_FED;
            orderI++;
            flag = 0 ; 
            dequeueOrdersD(orderQ);
           // break;
        }
        else
        {
            if(tempOrder->nr_orders == 1){
            chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[0], dishes);
           // cookedOrder = *tempOrder;
            table[tempOrder->tableNumber - 1]->status = FREE ;
            table[tempOrder->tableNumber - 1]->customer->status = WELL_FED;
            orderI++;
            dequeueOrdersD(orderQ);
            }
            if(tempOrder->nr_orders == 2 ){
            chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[0], dishes);
            i++;
            if(i == chefs->maxDishes)
            {
                flag = 1;
                break;
            }
            chefs->DishesCooked[i] = findDishById(tempOrder->menuIDs[1], dishes);
            //cookedOrder = *tempOrder;
            table[tempOrder->tableNumber - 1]->status = FREE ;
            table[tempOrder->tableNumber - 1]->customer->status = WELL_FED;
            orderI++;
            dequeueOrdersD(orderQ);
            }
        }

        printf("Cooked order on table :%d\n", tempOrder->tableNumber );

           /*  for(int j = 0; j < MAX_TABLES; j++  )
            {
                if(table[j]->tableNumber == cookedOrder.tableNumber)
                {
                    table[j]->status = FREE;
                    free(table[j]->customer->menuIDs);
                    table[j]->customer->menuIDs = NULL;
                    table[j]->customer = NULL;
                    break;
                }
            } */

        
    }
}

void printCookedDish(Chef *chefs)
{
    printf("Boss i cooked this round : ");
    for(int i = 0; i < chefs->maxDishes; i++)
    {
        int dishID = chefs->DishesCooked[i]->menuID;
        if(dishID == 0){
            break;
        }
        printf("%d ", dishID);

    }
    printf("\n"); 
}

/**
 * Checks if a Dish is cooked.
 * @return Returns TRUE if Dish is ready. If not decreases the cooking timer by 1 unit.
 */
int cookingTimer(void) {                                     // TODO : make function return bool 
    int tmpTime = 0;
    Dish *tmpDish = NULL;

    for (int i = 0; i < chef->dishCounter; i++) {
        if (getDishTimer(chef->DishesCooked[i]) == 0) {
            chef->DishesCooked[i] = NULL;
            return TRUE;
        } else {
            tmpDish = chef->DishesCooked[i];
            tmpTime = getDishTimer(tmpDish);
            tmpTime--;
            setCookingTime(&tmpDish, tmpTime);
        }
    }

    return FALSE;
}


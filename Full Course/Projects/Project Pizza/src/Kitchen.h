#ifndef GROUP_TASK1_KITCHEN_H
#define GROUP_TASK1_KITCHEN_H

#include "defines.h"
#include "Dish.h"
#include "tables.h"


typedef struct cook Chef;

void hireChef(char *Name);

Chef *callChef(void);
int ChefMaxDish(Chef *chefs);


void makeOrder(Chef *chefs, QueueOrders *orderQ, Dish **dishes, Table **table);


int cookingTimer(void);

void printCookedDish(Chef *chefs);

#endif //GROUP_TASK1_KITCHEN_H
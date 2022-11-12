#ifndef GROUP_TASK1_KITCHEN_H
#define GROUP_TASK1_KITCHEN_H

#include "Dish.h"
#include "order.h"


typedef struct chef Chef;

void hireChef(char *Name);

Chef *callChef(void);
uint16_t getChefMaxDish(const Chef *chefs);


void makeOrder(Chef *chefs, QueueOrders *orderQ, Dish **dishes, Table **table);


int cookingTimer(void);
void printCookedDish(Chef *chefs);

#endif //GROUP_TASK1_KITCHEN_H
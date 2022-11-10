#include "utility.h"

#include "Customer.h"
#include "tables.h"
#include "restaurant.h"

#include "stdlib.h"
#include "stdio.h"
struct customer {
    int tableId;                //TODO :need add more things
    int nr_orders;
    int *menuIDs;
    CustomerStatus status;      //enum in customer.h
};

struct dish {
    int menuID;
    int numIngredients;
    int cookingTime;
    float dishPrice;
    string dishName;
    string* ingerdientsList;   /* TODO : read from file (maybe first hardcore)*/
};




//Queue of Customer
void createQueueCustomer(QueueCustomer *customer, int size)
{
    customer->size=size;
    customer->front = customer->rear=0;
    customer->customerInQ = (Customer *) malloc( customer->size * sizeof(Customer));
}

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
Customer* dequeue(QueueCustomer *customersQ)
{
    Customer *x;
    if(customersQ->front == customersQ->rear)
    {
        x = NULL;
    }
    else{
        customersQ->front = (customersQ->front+1) % customersQ->size;
        x = &(customersQ->customerInQ[customersQ->front]);
    }
    return x;
}

void Display(QueueCustomer *customersQ)
{

    int i = customersQ->front + 1;
    do
    {
        if(customersQ->customerInQ[i].nr_orders == 2){
            printf("%d ",customersQ->customerInQ[i].menuIDs[0]);
            printf("%d ",customersQ->customerInQ[i].menuIDs[1]);
            printf("|");
        }
        if(customersQ->customerInQ[i].nr_orders == 1){
            printf("%d ",customersQ->customerInQ[i].menuIDs[0]);
            printf("|");
        }
        i = (i + 1) % customersQ->size;
    }while(i != (customersQ->rear + 1) % customersQ->size);
    printf("\n");

}



//Queue of orders
void createQueueOrders(QueueOrders *order, int size)
{
    order->size=size;
    order->front = order->rear=0;
    order->orders = (Order *) malloc( order->size * sizeof(Order));
}

void enqueueOrders(QueueOrders *orderQ, Order *order)
{
    if((orderQ->rear + 1) % orderQ->size == orderQ->front)
        printf("Queue is Full");
    else
    {
        orderQ->rear = (orderQ->rear + 1) % orderQ->size;
        orderQ->orders[orderQ->rear] = *order;
        
    }
}

Order* dequeueOrders(QueueOrders *orderQ)
{
    Order *x;
    if(orderQ->front == orderQ->rear)
    {

        x = NULL;
    }
    else{
        x = &(orderQ->orders[(orderQ->front+1) % orderQ->size]);
    }
    return x;
}

void dequeueOrdersD(QueueOrders *orderQ)
{
    orderQ->front = (orderQ->front+1) % orderQ->size;
}

void DisplayOrders(QueueOrders *orderQ)
{
    int i = orderQ->front + 1;
    do
    {
        if(orderQ->orders[i].nr_orders == 2 ){
            printf("%d ",orderQ->orders[i].menuIDs[0]);
            printf("%d ",orderQ->orders[i].menuIDs[1]);
            printf("|");
        }
        else if (orderQ->orders[i].nr_orders == 1){
            printf("%d ",orderQ->orders[i].menuIDs[0]);
            printf("|");
        }

        i = (i + 1) % orderQ->size;
    }while(i != (orderQ->rear + 1) % orderQ->size);
    printf("\n");
}
#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CAPACITY 100 

int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;   // Initally assumed that rear is at end
unsigned int front = 0;

int enqueue(int data)
{
    // Queue is full throw Queue out of capacity error.
    if (isFull()) 
    {
        return 0;
    }

    // Ensure rear never crosses array bounds
    rear = (rear + 1) % CAPACITY;

    // Increment queue size
    size++;

    // Enqueue new element to queue
    queue[rear] = data;

    // Successfully enqueued element to queue
    return 1;
}


int dequeue()
{
    int data = INT_MIN;

    // Queue is empty, throw Queue underflow error
    if (isEmpty())
    {
        return INT_MIN;
    }

    // Dequeue element from queue
    data = queue[front];

    // Ensure front never crosses array bounds
    front = (front + 1) % CAPACITY;

    // Decrease queue size
    size--;

    return data;
}


int main()
{
    enqueue(12) ;
    printf("%d", queue[0]); 
}
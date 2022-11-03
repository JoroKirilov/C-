#include <stdio.h>

typedef int (*ftype)(void* a, void* b);

int getOption() {
    puts("Choose an option");
    puts("1. Sort in ascending order");
    puts("2. Sort in descending order");
    int option;
    scanf("%d", &option);

    return option;
}

void initArr(void* arr, int size) {
    int* ptr = arr;

    puts("Insert 5 elements");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr+i));
    }
}

void printArr(void* arr, int size) {
    int* ptr = arr;
    for (long i = 0; i < size; i++)
    {
        printf("%d ", *(ptr+i));
    }
}

int ascendingSortF(void* a, void* b) {
    // return 1 if b < a
    return *(int*)b < *(int*)a ? 1 : 0;
}

int descendingSortF(void* a, void* b) {
    // return 1 if b > a
    return *(int*)b > *(int*)a ? 1 : 0;
}

ftype initFptr(int option) {
    ftype fp = NULL;
    switch (option)
    {
    case 1:
        fp = ascendingSortF;
        break;
    case 2:
        fp = descendingSortF;
        break;
    default:
        puts("Invalid option");
        break;
    }
    return fp;
}

void swap(void* a, void* b) {
    // swap a and b
    int temp = *((int*)a);
    *((int*)a) = *((int*)b);
    *((int*)b) = temp;
}

void sort_arr(void* arr, int size, ftype fp) {
    int* ptr = arr;

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (fp(ptr+i,ptr+j))   // if fp returns 1 we must swap
            {
                swap(ptr+i, ptr+j); // ptr+i = a, ptr+b = b
            }
        }
    }
}

int main() {
    int arr[5] = {};
    int arrSize = sizeof(arr) / sizeof(*arr);
    initArr(arr, arrSize); // get elements from console

    int option = getOption(); // client chooses ascending or descending order

    ftype fp = NULL;
    fp = initFptr(option); // make the fptr ascending or descending func

    sort_arr(arr, arrSize, fp);
    printArr(arr, arrSize);

    return 0;
}
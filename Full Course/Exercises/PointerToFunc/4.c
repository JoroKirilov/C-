#include <stdio.h>

typedef void (*ftype)(void *A, int n, int dir);

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

    puts("Insert 10 elements");

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

void ascendingSortF(void *A, int n, int dir) {
    int* ptr = A;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(ptr+j) < *(ptr+i))
            {
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
            
        }
    }
}

void descendingSortF(void *A, int n, int dir) {
    int* ptr = A;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(ptr+j) > *(ptr+i))
            {
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
            
        }
    }
}

void sort_arr(void *A, int n, int dir, ftype fp) {
    switch (dir)
    {
    case 1:
        fp = ascendingSortF;
        break;
    case 2:
        fp = descendingSortF;
        break;
    default:
        puts("Invalid option");
        return;
    }

    fp(A, n, dir);
}

int main() {
    int arr[10] = {};
    int arrSize = sizeof(arr) / sizeof(*arr);
    initArr(arr, arrSize);

    ftype fp = NULL;

    int option = getOption();

    sort_arr(arr, arrSize, option, fp);
    printArr(arr, arrSize);

    return 0;
}
/* Задача 4. Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
където А е обикновен масив от цели числа, n - размера на масива, dir -
посоката, в която да бъде сортиран масива, и ftype - указател към функция,
която приема масив, неговия размер и в каква посока да бъде сортиран
входния масив. ftype трябва да сортира масива във възходящ или низходящ
ред в зависимост от третия параметър на функцията. Принтирайте изходния
и резултатни масиви. */

#include<stdio.h>
#include <stddef.h>

#define ARRAY_ELEMENT_FORMAT "%f"
#define SIZE_OF_ARRAY 5
typedef float arr_el_t;

enum sort_dir
{
    DIR_ASCENDING = 1,
    DIR_DESCENDING = -1
};
typedef void (* sort_func_t) (arr_el_t* arr, size_t n);

static void sort_arr_ascending(arr_el_t* arr, size_t n);
static void sort_arr_descending(arr_el_t* arr, size_t n);

static sort_func_t sort_arr_direction = NULL;

void set_sort_direction(int dir)
{
    if (dir == DIR_ASCENDING) {
        sort_arr_direction = sort_arr_ascending;
    }
    else if (dir == DIR_DESCENDING) {
        sort_arr_direction = sort_arr_descending;
    }
    else
    {
        fprintf(stderr, "Invalid sorting direction %d!\n", dir);
    }
}

void sort_arr(arr_el_t* A, size_t n){
    if (sort_arr_direction != NULL)
    {
        sort_arr_direction(A, n);
    }
    else
    {
        fprintf(stderr, "Sorting direction not set!\n");
    }
}

void print_array(arr_el_t arr[], size_t n) {
    for(size_t i = 0; i < n; i++) {
        printf(ARRAY_ELEMENT_FORMAT " ", arr[i]);
    }
    printf("\n");
}

static void sort_arr_ascending(arr_el_t* arr, size_t n){
    arr_el_t temp = 0;
    for(size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n ; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

static void sort_arr_descending(arr_el_t* arr, size_t n){
    arr_el_t temp = 0;
    for(size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}



int main() {
    arr_el_t arr[SIZE_OF_ARRAY] = {1.5, 6.2, 1.2, 1.9, 9};
    print_array(arr, SIZE_OF_ARRAY);

    enum sort_dir directions[] = {
        DIR_DESCENDING,
        DIR_ASCENDING
    };

    const int dir_count = sizeof(directions)/sizeof(directions[0]);
    for (int dir_idx = 0; dir_idx < dir_count; dir_idx++)
    {
        set_sort_direction(directions[dir_idx]);
        sort_arr(arr, SIZE_OF_ARRAY);
        print_array(arr, SIZE_OF_ARRAY);
    }
}
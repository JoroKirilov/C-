#ifndef VECTOR_H_
#define VECTOR_H_

#include <stddef.h>
#include <stdbool.h>
#include "ErrorHandler.h"


typedef struct {
  void **items;
  size_t capacity;
  size_t size;
} Vector;

/**
 * initialize vector
 * @param Vector pointer to struct vector
 * @param size_t size of desired capacity
 * @return Error
 */
Error vectorInit(Vector *vec, size_t initialCapacity);
/**
 * Get size of vector
 * @param Vector pointer to struct vector
 */
size_t vectorGetSize(Vector *vec);
/**
 * Get capacity of vector
 * @param Vector pointer to struct vector
 */
size_t vectorGetCapacity(Vector *vec);

/**
 * Check vector if it is empty
 * @param Vector pointer to struct vector
 */

bool vectorIsEmpty(Vector *vec);

/**
 * Realloc more memory
 * @param Vector pointer to struct vector
 * @param size_t new desired size of capacity
 */
Error vectorResize(Vector *vec, size_t newSize);
/**
 * Add element in vector on next index
 * @param Vector pointer to struct vector
 * @param Element void pointer to item
 */
void vectorPush(Vector *vec, void *item);
/**
 * Add element in vector on desired index position
 * @param Vector pointer to struct vector
 * @param Size_t desired index
 * @param Element void pointer to item
 */
void vectorSet(Vector *vec, size_t idx, void *elem);
/**
 * Get element in vector from desired index position
 * @param Vector pointer to struct vector
 * @param Size_t desired index
 */
void* vectorGet(Vector *vec, size_t idx);
/**
 * Get last element in vector
 * @param Vector pointer to struct vector
 */
void* vectorBack(Vector *vec);
/**
 * Delete element on wanted index
 * @param Vector pointer to struct vector
 * @param Size_t desired index
 */
void vectorDelete(Vector *vec, size_t idx);
/**
 * Decrease size of vector
 * @param Vector pointer to struct vector
 */
void vectorPop(Vector *vec);
/**
 * Free allocated memory
 * @param Vector pointer to struct vector
 */
void vectorFree(Vector *vec);


#endif /* VECTOR_H_ */
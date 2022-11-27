#include "Vector.h"

#include <stdlib.h>


/**
 * initialize vector
 * @param Vector pointer to struct vector 
 * @param size_t size of desired capacity
 */
void vectorInit(Vector *vec, size_t initialCapacity) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);

  vec->capacity = initialCapacity;
  vec->size = 0;
  vec->items = malloc(sizeof(void*) * vec->capacity);

  //exitIfError(vec->items, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
}


/**
 * Get size of vector 
 * @param Vector pointer to struct vector 
 */
size_t vectorGetSize(Vector *v) 
{
  return v->size;
}


/**
 * Check vector if it is empty 
 * @param Vector pointer to struct vector 
 */
bool vectorIsEmpty(Vector *vec)
{
  return vec->size == 0;
}


/**
 * Realloc more memory 
 * @param Vector pointer to struct vector
 * @param size_t new desired size of capacity  
 */
void vectorResize(Vector *vec, size_t capacity) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);

  void **items = realloc(vec->items, sizeof(void*) * capacity);

  //exitIfError(vec->items, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
  
  if (items) {
    vec->items = items;
    vec->capacity = capacity;
  }

  if (vec->size >= capacity)
  {
    vec->size = capacity;
  }
}


/**
 * Add element in vector on next index
 * @param Vector pointer to struct vector
 * @param Element void pointer to item  
 */
void vectorPush(Vector *vec, void *item) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);

  if (vec->capacity == vec->size) {
    vectorResize(vec, vec->capacity * 2);
  }

  vec->items[vec->size] = item;
  vec->size++;
}


/**
 * Add element in vector on desired index position
 * @param Vector pointer to struct vector
 * @param Size_t desired index
 * @param Element void pointer to item   
 */
void vectorSet(Vector *vec, size_t idx, void *item) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);

  if (idx < vec->size) 
  {
    vec->items[idx] = item;
  }
}


/**
 * Get element in vector from desired index position
 * @param Vector pointer to struct vector
 * @param Size_t desired index    
 */
void* vectorGet(Vector *vec, size_t idx) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);

  if (idx < vec->size) 
  {
    return vec->items[idx];              
  }
  return NULL;
}


/**
 * Get last element in vector 
 * @param Vector pointer to struct vector    
 */
void* vectorBack(Vector *vec) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);


  if (0 == vec->size) 
  {
    return NULL;
  }

  return vec->items[vec->size - 1];
}


/**
 * Delete element on disered index 
 * @param Vector pointer to struct vector 
 * @param Size_t desired index   
 */
void vectorDelete(Vector *vec, size_t idx) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);

  if (idx >= vec->size) 
  {
    return;
  }

  vec->items[idx] = NULL;

  for (size_t i = idx; i < vec->size - 1; ++i) 
  {
      vec->items[i] = vec->items[i + 1];
      vec->items[i + 1] = NULL;
  }

  vec->size--;
}


/**
 * Decreise size of vector
 * @param Vector pointer to struct vector 
 */
void vectorPop(Vector *vec) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);

  if (vec->size == 0) 
  {
    return;
  }

  vec->size--;
}


/**
 * Free allocated memory
 * @param Vector pointer to struct vector 
 */
void vectorFree(Vector *vec) 
{
  //exitIfError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);
  
  if (vec->items != NULL) 
  {
    free(vec->items);
    vec->items = NULL;
    vec->size = 0;
    vec->capacity = 0;
  }
}
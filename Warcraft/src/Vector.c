#include "Vector.h"
#include "ErrorHandler.h"

#include <stdlib.h>


/**
 * initialize vector
 * @param Vector pointer to struct vector 
 * @param size_t size of desired capacity
 */
Error vectorInit(Vector *vec, size_t initialCapacity)
{
    Error err = NO_ERROR;

    err = checkForError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);
    if(err != NO_ERROR)
    {
        return err ;
    }

    vec->capacity = initialCapacity;
    vec->size = 0;
    vec->items = malloc(sizeof(void*) * vec->capacity);

    checkForError(vec, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
    err = checkForError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);
    if(err != NO_ERROR)
    {
        return err ;
    }

    return err;
}


/**
 * Get size of vector 
 * @param Vector pointer to struct vector 
 */
size_t vectorGetSize(Vector *vec) 
{
  return vec->size;
}

/**
 * Get capacity of vector 
 * @param Vector pointer to struct vector 
 */
size_t vectorGetCapacity(Vector *vec)
{
  return vec->capacity;
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
Error vectorResize(Vector *vec, size_t capacity)
{
    Error err = NO_ERROR;

    err = checkForError(vec, NULL_PARAMETER, CURRENT_FUNC_NAME);
    if(err != NO_ERROR)
    {
        return err;
    }

    void **items = realloc(vec->items, sizeof(void*) * capacity);

    err = checkForError(vec, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
    if(err != NO_ERROR)
    {
        return err;
    }
  
    if (items)
    {
        vec->items = items;
        vec->capacity = capacity;
    }

    if (vec->size >= capacity)
    {
        vec->size = capacity;
    }

    return err;
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
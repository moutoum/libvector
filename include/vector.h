/*
** vector.h for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/include
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 18:22:38 2017 moutoum
** Last update Mon Nov 13 19:00:29 2017 Maxence Moutoussamy
*/

#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

# define VECTOR_ALLOCATION_INIT 1024

typedef struct s_vector
{
  void 	        *data;
  size_t 	esize;
  size_t 	nsize;
  size_t 	nsize_alloc;
} vector_t;

typedef enum e_vector_error {
        VE_OK = 1,
        VE_INDEX_OUT_OF_RANGE = 2,
        VE_INVALID_VECTOR = 3,
        VE_INVALID_ITEM_POINTER = 4,
        VE_MALLOC_FAILED = 5,
        VE_INVALID_ELEM_SIZE = 6,
        VE_VECTOR_IS_EMPTY = 7
} vector_error_t;

/**
* [FOREACH description]
* @method FOREACH
* @param  item    [description]
* @param  vector  [description]
*/
# define FOREACH(item, vector) for (item = vector_begin(vector); item != vector_end(vector); item++)

/**
 * [vector_init description]
 * @method vector_init
 * @param  v           [description]
 * @param  esize       [description]
 * @return             [description]
 */
int 	vector_init(vector_t * const v, size_t esize);

/**
 * [vector_delete description]
 * @method vector_delete
 * @param  [name]        [description]
 * @return               [description]
 */
int	vector_delete(vector_t * const v);

/**
 * [vector_size description]
 * @method vector_size
 * @param  v           [description]
 * @return             [description]
 */
size_t 	vector_size(const vector_t *v);

/**
 * [vector_clear description]
 * @method vector_clear
 * @param  v            [description]
 * @return              [description]
 */
int	vector_clear(vector_t * const v);

/**
 * [vector_push_back description]
 * @method vector_push_back
 * @param  v                [description]
 * @param  data             [description]
 * @return                  [description]
 */
int	vector_push_back(vector_t * const v, void const * const data);

/**
 * [vector_push_front description]
 * @method vector_push_front
 * @param  v                 [description]
 * @param  data              [description]
 * @return                   [description]
 */
int	vector_push_front(vector_t * const v, void const * const data);

/**
 * [vector_pop_back description]
 * @method vector_pop_back
 * @param  v               [description]
 * @return                 [description]
 */
int     vector_pop_back(vector_t * const v);

/**
 * [vector_pop_front description]
 * @method vector_pop_front
 * @param  v                [description]
 * @return                  [description]
 */
int     vector_pop_front(vector_t * const v);

# define ITERATOR(type) type*

/**
 * [vector_begin description]
 * @method vector_begin
 * @param  v            [description]
 * @return              [description]
 */
void	*vector_begin(const vector_t *v);

/**
 * [vector_end description]
 * @method vector_end
 * @param  v          [description]
 * @return            [description]
 */
void	*vector_end(const vector_t *v);

/**
 * [vector_remove description]
 * @method vector_remove
 * @param  v             [description]
 * @param  iterator      [description]
 * @return               [description]
 */
int	vector_remove(vector_t *v, void *iterator);

/**
 * [vector_get_last description]
 * @method vector_get_last
 * @param  v               [description]
 * @param  buffer          [description]
 * @return                 [description]
 */
int     vector_get_last(vector_t * const v, void * const buffer);

/**
 * [vector_get_first description]
 * @method vector_get_first
 * @param  v                [description]
 * @param  buffer           [description]
 * @return                  [description]
 */
int     vector_get_first(vector_t * const v, void * const buffer);

/**
 * [vector_qsort description]
 * @method vector_qsort
 * @param  v            [description]
 * @param  compar       [description]
 * @return              [description]
 */
int	vector_qsort(vector_t *v,
		     int (*compar)(const void *, const void *));

/**
 * [vector_strerror description]
 * @method vector_strerror
 * @return                 [description]
 */
char *vector_strerror(void);

#endif

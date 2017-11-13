/*
** vector.h for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/include
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 18:22:38 2017 moutoum
** Last update Sun Nov 12 22:14:51 2017 Maxence Moutoussamy
*/

#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

# define VECTOR_ALLOCATION_INIT 1024
# define FOREACH(item, vector) for (item = vector_begin(vector); item != vector_end(vector); item++)

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
        VE_INVALID_ITEM_POINTER = 4
} vector_error_t;

int 	vector_init(vector_t * const v, size_t esize);
int	vector_delete(vector_t *);

size_t 	vector_size(const vector_t *v);
int	vector_clear(vector_t *v);

int	vector_push_back(vector_t *v, const void *data);
int	vector_push_front(vector_t *v, const void *data);

# define ITERATOR(type) type*

void	*vector_begin(const vector_t *v);
void	*vector_end(const vector_t *v);
void	*vector_incr(const vector_t *v, void *it);

int	vector_pop_back(vector_t *v, void *buffer);
int	vector_pop_front(vector_t *v, void *buffer);
int	vector_remove(vector_t *v, void *iterator);

void    *vector_get_by_idx(const vector_t * const v, size_t idx);

int	vector_qsort(vector_t *v,
		     int (*compar)(const void *, const void *));

char *vector_strerror(void);

#endif

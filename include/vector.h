/*
** vector.h for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/include
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 18:22:38 2017 moutoum
** Last update Sat Nov  4 11:08:01 2017 Maxence Moutoussamy
*/

#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

# define VECTOR_ALLOCATION_INIT 1024

struct s_vector
{
  void 	        *data;
  size_t 	esize;
  size_t 	nsize;
  size_t 	nsize_alloc;
};

int 	vector_init(struct s_vector *v, size_t esize);
int	vector_delete(struct s_vector *);

size_t 	vector_size(const struct s_vector *v);
int	vector_clear(struct s_vector *v);

int	vector_push_back(struct s_vector *v, const void *data);
int	vector_push_front(struct s_vector *v, const void *data);

# define ITERATOR(type) type*

void	*vector_begin(const struct s_vector *v);
void	*vector_end(const struct s_vector *v);
void	*vector_incr(const struct s_vector *v, void *it);

int	vector_pop_back(struct s_vector *v, void *buffer);
int	vector_pop_front(struct s_vector *v, void *buffer);
int	vector_remove(struct s_vector *v, void *iterator);

void    *vector_get_by_idx(const struct s_vector * const v, size_t idx);

int	vector_qsort(struct s_vector *v,
		     int (*compar)(const void *, const void *));

#endif

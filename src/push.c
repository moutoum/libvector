/*
** push.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:53:01 2017 moutoum
** Last update Sat Jul  1 10:07:14 2017 moutoum
*/

#include "vector.h"

static int vector_realloc(struct s_vector *v)
{
	if ((v->data = realloc(v->data, v->esize * (v->nsize_alloc * 2)))
	    == NULL) {
		perror("realloc");
		return (EXIT_FAILURE);
	}
	v->nsize_alloc *= 2;
	return (EXIT_SUCCESS);
}

int vector_push_back(struct s_vector *v, const void *data)
{
	if (v->nsize == v->nsize_alloc)
	{
		if (vector_realloc(v) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	}
	memcpy(v->data + (v->esize * v->nsize), data, v->esize);
	v->nsize += 1;
	return (EXIT_SUCCESS);
}

int vector_push_front(struct s_vector *v, const void *data)
{
	if (v->nsize == v->nsize_alloc)
	{
		if (!vector_realloc(v))
			return (EXIT_FAILURE);
	}
	memmove(v->data + v->esize, v->data, v->nsize * v->esize);
	memcpy(v->data, data, v->esize);
	v->nsize += 1;
	return (EXIT_SUCCESS);
}

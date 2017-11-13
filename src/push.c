/*
** push.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:53:01 2017 moutoum
** Last update Mon Nov 13 18:59:11 2017 Maxence Moutoussamy
*/

#include "vector.h"

extern vector_error_t verrno;

static int vector_realloc(vector_t * const v)
{
	size_t size_to_alloc;
	void *ptr;

	if (!v || !v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

	size_to_alloc = v->esize * (v->nsize_alloc * 2);
	ptr = realloc(v->data, size_to_alloc);

	if (!ptr) {
		verrno = VE_MALLOC_FAILED;
		return (-1);
	}

	v->data = ptr;
	v->nsize_alloc *= 2;

	return (0);
}

int	vector_push_back(vector_t * const v, const void * const data)
{
	if (!v || !v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

	if (!data) {
		verrno = VE_INVALID_ITEM_POINTER;
		return (-1);
	}

	if (v->nsize == v->nsize_alloc)
	{
		if (vector_realloc(v) == -1) {
			return (-1);
		}
	}

	memcpy(v->data + (v->esize * v->nsize), data, v->esize);
	v->nsize += 1;

	return (0);
}

int	vector_push_front(vector_t * const v, const void * const data)
{
	if (!v || !v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

	if (!data) {
		verrno = VE_INVALID_ITEM_POINTER;
		return (-1);
	}

	if (v->nsize == v->nsize_alloc)
	{
		if (vector_realloc(v) == -1) {
			return (-1);
		}
	}

	memmove(v->data + v->esize, v->data, v->nsize * v->esize);
	memcpy(v->data, data, v->esize);
	v->nsize += 1;

	return (EXIT_SUCCESS);
}

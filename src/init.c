/*
** init.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:52:45 2017 moutoum
** Last update Mon Nov 13 12:29:53 2017 Maxence Moutoussamy
*/

#include "vector.h"

extern vector_error_t verrno;

int 	vector_init(vector_t * const v, size_t esize)
{
	void *ptr = NULL;

	if (!v) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

	if (esize <= 0) {
		verrno = VE_INVALID_ELEM_SIZE;
		return (-1);
	}

	ptr = malloc(VECTOR_ALLOCATION_INIT * esize);
	if (!ptr) {
		verrno = VE_MALLOC_FAILED;
		return (-1);
	}

	v->data = ptr;
	v->esize = esize;
	v->nsize = 0;
	v->nsize_alloc = VECTOR_ALLOCATION_INIT;
	verrno = VE_OK;
	return (0);
}

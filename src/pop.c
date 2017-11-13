/*
** pop.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:52:54 2017 moutoum
** Last update Mon Nov 13 12:45:39 2017 Maxence Moutoussamy
*/

#include "vector.h"

extern vector_error_t verrno;

int vector_pop_back(vector_t * const v)
{
	if (!v || !v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

	if (!v->nsize) {
		verrno = VE_VECTOR_IS_EMPTY;
		return (-1);
	}

	v->nsize -= 1;

	verrno = VE_OK;
	return (0);
}

int vector_pop_front(vector_t * const v)
{
	if (!v || v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

	if (!v->nsize) {
		verrno = VE_VECTOR_IS_EMPTY;
		return (-1);
	}

	memmove(v->data,
		v->data + v->esize,
		v->esize * (v->nsize - 1));
	v->nsize -= 1;
	verrno = VE_OK;
	return (0);
}

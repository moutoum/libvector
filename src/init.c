/*
** init.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:52:45 2017 moutoum
** Last update Sun Nov 12 21:28:16 2017 Maxence Moutoussamy
*/

#include "vector.h"

int 	vector_init(vector_t * const v, size_t esize)
{
	if (!(v->data = malloc(VECTOR_ALLOCATION_INIT * esize)))
		return (EXIT_FAILURE);
	v->esize = esize;
	v->nsize = 0;
	v->nsize_alloc = VECTOR_ALLOCATION_INIT;
	return (EXIT_SUCCESS);
}

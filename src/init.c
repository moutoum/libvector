/*
** init.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
** 
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
** 
** Started on  Fri May  5 10:52:45 2017 moutoum
** Last update Fri May  5 10:52:45 2017 moutoum
*/

#include "vector.h"

int 	vector_init(struct s_vector *v, size_t esize)
{
	if (!(v->data = malloc(VECTOR_ALLOCATION_INIT * esize)))
		return (EXIT_FAILURE);
	v->esize = esize;
	v->nsize = 0;
	v->nsize_alloc = VECTOR_ALLOCATION_INIT;
	return (EXIT_SUCCESS);
}

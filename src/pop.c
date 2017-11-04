/*
** pop.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:52:54 2017 moutoum
** Last update Fri Jun  2 15:20:46 2017 Maxence Moutoussamy
*/

#include "vector.h"

int vector_pop_back(struct s_vector *v, void *buffer)
{
	if (!v->nsize)
		return (EXIT_FAILURE);
	if (buffer)
		memcpy(buffer, v->data + (v->esize * (v->nsize - 1)), v->esize);
	v->nsize -= 1;
	return (EXIT_SUCCESS);
}

int vector_pop_front(struct s_vector *v, void *buffer)
{
	if (!v->nsize)
		return (EXIT_FAILURE);
	if (buffer)
		memcpy(buffer, v->data, v->esize);
	memmove(v->data, v->data + v->esize, v->esize);
	v->nsize -= 1;
	return (EXIT_SUCCESS);
}

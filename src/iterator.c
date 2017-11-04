/*
** iterator.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
** 
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
** 
** Started on  Fri May  5 10:52:49 2017 moutoum
** Last update Fri May  5 10:52:50 2017 moutoum
*/

#include "vector.h"

void *vector_begin(const struct s_vector *v)
{
	return (v->data);
}

void *vector_end(const struct s_vector *v)
{
	return (v->data + (v->esize * v->nsize));
}

void *vector_incr(const struct s_vector *v, void *it)
{
	return (it + v->esize);
}

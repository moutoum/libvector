/*
** iterator.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:52:49 2017 moutoum
** Last update Mon Nov 13 18:34:43 2017 Maxence Moutoussamy
*/

#include "vector.h"

void *vector_begin(vector_t const * const v)
{
	return (v->data);
}

void *vector_end(vector_t const * const v)
{
	return (v->data + (v->esize * v->nsize));
}

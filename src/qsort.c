/*
** qsort.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
** 
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
** 
** Started on  Fri May  5 10:53:10 2017 moutoum
** Last update Fri May  5 10:53:11 2017 moutoum
*/

#include "vector.h"

int vector_qsort(struct s_vector *v, int (*compar)(const void *, const void *))
{
	qsort(v->data, v->nsize, v->esize, compar);
	return (EXIT_SUCCESS);
}

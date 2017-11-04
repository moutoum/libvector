/*
** size.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
** 
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
** 
** Started on  Fri May  5 10:53:14 2017 moutoum
** Last update Fri May  5 10:53:15 2017 moutoum
*/

#include "vector.h"

size_t 	vector_size(const struct s_vector *v)
{
	return (v->nsize);
}

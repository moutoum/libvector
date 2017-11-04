/*
** delete.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
** 
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
** 
** Started on  Fri May  5 10:52:41 2017 moutoum
** Last update Fri May  5 10:52:42 2017 moutoum
*/

#include "vector.h"

int	vector_delete(struct s_vector *v)
{
	free(v->data);
	return (EXIT_SUCCESS);
}

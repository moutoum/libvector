/*
** delete.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:52:41 2017 moutoum
** Last update Mon Nov 13 18:19:42 2017 Maxence Moutoussamy
*/

#include "vector.h"

extern vector_error_t verrno;

int	vector_delete(vector_t * const v)
{
	if (!v || !v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

	free(v->data);
	return (0);
}

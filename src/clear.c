/*
** clear.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
** 
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
** 
** Started on  Fri May  5 10:52:19 2017 moutoum
** Last update Fri May  5 10:52:35 2017 moutoum
*/

#include "vector.h"

int	vector_clear(struct s_vector *v)
{
  v->nsize = 0;
  return (EXIT_SUCCESS);
}

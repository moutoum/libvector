/*
** remove.c for vector in /home/moutou_m/c/PSU_2016_myirc/lib/libvector/src/
**
** Made by Maxence Moutoussamy
** Login   <moutou_m@epitech.eu>
**
** Started on  Fri May 26 12:00:45 2017 Maxence Moutoussamy
** Last update Fri Jun  2 11:24:04 2017 Maxence Moutoussamy
*/

#include "vector.h"

int	vector_remove(struct s_vector *v, void *iterator)
{

        if (!v || !iterator)
        {
                return (EXIT_FAILURE);
        }
        memmove(iterator,
                iterator + v->esize,
                (v->data + (v->esize * v->nsize)) - (iterator + v->esize));
        v->nsize -= 1;
        return (EXIT_SUCCESS);
}

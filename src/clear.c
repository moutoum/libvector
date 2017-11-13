/*
** clear.c for  in /home/moutou_m/c/PSU_2016_ftrace/lib/libvector/src
**
** Made by moutoum
** Login   <maxence.moutoussamy@epitech.eu>
**
** Started on  Fri May  5 10:52:19 2017 moutoum
** Last update Mon Nov 13 18:15:30 2017 Maxence Moutoussamy
*/

#include "vector.h"

extern vector_error_t verrno;

int	vector_clear(vector_t * const v)
{
        if (!v) {
                verrno = VE_INVALID_VECTOR;
                return (-1);
        }

        v->nsize = 0;
        return (0);
}

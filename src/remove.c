/*
** remove.c for vector in /home/moutou_m/c/PSU_2016_myirc/lib/libvector/src/
**
** Made by Maxence Moutoussamy
** Login   <moutou_m@epitech.eu>
**
** Started on  Fri May 26 12:00:45 2017 Maxence Moutoussamy
** Last update Sun Nov 12 22:22:02 2017 Maxence Moutoussamy
*/

#include "vector.h"

extern vector_error_t verrno;

int vector_remove(vector_t * const v, void *iterator)
{
        if (!v) {
                verrno = VE_INVALID_VECTOR;
                return (-1);
        }
        else if (!iterator
                || iterator >= (v->data + (v->esize * v->nsize))
                || (iterator - v->data) % v->esize != 0) {

                verrno = VE_INDEX_OUT_OF_RANGE;
                return (-1);
        }

        memmove(iterator,
                iterator + v->esize,
                (v->data + (v->esize * v->nsize)) - (iterator + v->esize));
        v->nsize -= 1;
        verrno = VE_OK;
        return (0);
}

/*
** get.c for  in /home/moutou_m/c/PSU_2016_zappy/lib/libvector/src/
**
** Made by Maxence Moutoussamy
** Login   <moutou_m@epitech.eu>
**
** Started on  Sun Jun 25 07:51:13 2017 Maxence Moutoussamy
** Last update Sat Nov  4 10:43:13 2017 Maxence Moutoussamy
*/

#include "vector.h"

void    *vector_get_by_idx(const struct s_vector * const v, size_t idx) {
        return (v->data + (idx * v->esize));
}

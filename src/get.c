/*
** get.c for  in /home/moutou_m/c/PSU_2016_zappy/lib/libvector/src/
**
** Made by Maxence Moutoussamy
** Login   <moutou_m@epitech.eu>
**
** Started on  Sun Jun 25 07:51:13 2017 Maxence Moutoussamy
** Last update Mon Nov 13 18:26:39 2017 Maxence Moutoussamy
*/

#include "vector.h"

extern vector_error_t verrno;

int vector_get_last(vector_t * const v, void * const buffer) {
        if (!v || !v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

        if (!buffer) {
		verrno = VE_INVALID_ITEM_POINTER;
		return (-1);
	}

        if (!v->nsize) {
		verrno = VE_VECTOR_IS_EMPTY;
		return (-1);
	}

        memcpy(buffer,
                v->data + (v->esize * (v->nsize - 1)),
                v->esize);

        verrno = VE_OK;
        return (0);
}

int vector_get_first(vector_t * const v, void * const buffer) {
        if (!v || !v->data) {
		verrno = VE_INVALID_VECTOR;
		return (-1);
	}

        if (!buffer) {
		verrno = VE_INVALID_ITEM_POINTER;
		return (-1);
	}

        if (!v->nsize) {
		verrno = VE_VECTOR_IS_EMPTY;
		return (-1);
	}

        memcpy(buffer,
                v->data,
                v->esize);

        verrno = VE_OK;
        return (0);
}

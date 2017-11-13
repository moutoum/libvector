/*
** verrno.h for  in /home/moutou_m/libvector/src/
**
** Made by Maxence Moutoussamy
** Login   <moutou_m@epitech.eu>
**
** Started on  Sun Nov 12 22:04:19 2017 Maxence Moutoussamy
** Last update Mon Nov 13 12:10:00 2017 Maxence Moutoussamy
*/
#include "vector.h"

vector_error_t verrno = VE_OK;

static char const * const _str_verrno_tab[] = {
        "Everything is OK",
        "The index is out of range",
        "The vector is invalid",
        "The pointer provided is invalid",
        "The allocation failed",
        "The element size must be superior to zero",
        "The vector is empty: invalid action"
};

char * vector_strerror(void) {
        return (strdup(_str_verrno_tab[verrno - 1]));
}

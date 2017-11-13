/*
** test_init.c for  in /home/moutou_m/libvector/unit-test/
**
** Made by Maxence Moutoussamy
** Login   <moutou_m@epitech.eu>
**
** Started on  Mon Nov 13 19:48:27 2017 Maxence Moutoussamy
** Last update Mon Nov 13 20:54:02 2017 Maxence Moutoussamy
*/

#include <criterion/criterion.h>
#include "vector.h"

TestSuite(init);

Test(init, works_with_primitive_type) {
        vector_t v;
        int out = vector_init(&v, sizeof(int));
        cr_assert(out == 0);
}

Test(init, works_with_complexe_type) {
        vector_t v;

        int out = vector_init(&v, sizeof(struct{int a; int b; char *c;}));
        cr_assert(out == 0);
}

Test(init, failed_with_null_vector) {
        extern vector_error_t verrno;
        int out = vector_init(NULL, sizeof(int));
        cr_assert(out == -1 && verrno == VE_INVALID_VECTOR);
}

Test(init, failed_with_null_size) {
        extern vector_error_t verrno;
        vector_t v;

        int out = vector_init(&v, 0);
        cr_assert(out == -1 && verrno == VE_INVALID_ELEM_SIZE);
}

Test(init, failed_with_malloc_error) {
        extern vector_error_t verrno;
        vector_t v;

        int out = vector_init(&v, ~0);
        cr_assert(out == -1 && verrno == VE_MALLOC_FAILED);
}

/*
** test_push.c for  in /home/moutou_m/libvector/unit-test/
**
** Made by Maxence Moutoussamy
** Login   <moutou_m@epitech.eu>
**
** Started on  Mon Nov 13 20:59:09 2017 Maxence Moutoussamy
** Last update Mon Nov 13 22:06:25 2017 Maxence Moutoussamy
*/

#include <criterion/criterion.h>
#include <criterion/theories.h>
#include "vector.h"

TestSuite(push_back);

Test(push_back, works_with_one_push_and_primitive_type) {
        vector_t v;
        int item = 42;
        int out;

        vector_init(&v, sizeof(item));
        out = vector_push_back(&v, &item);
        cr_assert(out == 0);
        cr_assume_arr_eq(&item, v.data, sizeof(item));
}

Test(push_back, works_with_multiple_push_and_primitive_type) {
        vector_t v;
        int items[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int out;

        vector_init(&v, sizeof(int));
        for (unsigned int i = 0; i < sizeof(items) / sizeof(int); i++) {
                out = vector_push_back(&v, &items[i]);
                cr_assert(out == 0);
        }
        cr_assume_arr_eq(items, v.data, sizeof(items));
}

Test(push_back, failed_with_null_vector) {
        extern vector_error_t verrno;
        int item = 42;
        int out;

        out = vector_push_back(NULL, &item);
        cr_assert(out == -1 && verrno == VE_INVALID_VECTOR);
}

Test(push_back, failed_with_null_item) {
        extern vector_error_t verrno;
        vector_t v;
        int out;

        vector_init(&v, sizeof(int));
        out = vector_push_back(&v, NULL);
        cr_assert(out == -1 && verrno == VE_INVALID_ITEM_POINTER);
}

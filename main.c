#include "vector.h"
#include <stdio.h>

int main() {
    IntVector v;
    vec_init(&v);

    for (int i = 1; i <= 10; i++) {
        vec_push_back(&v, i);
    }

    vec_print(&v);

    int x;
    vec_pop_back(&v, &x);
    printf("Deleted value : %d\n", x);

    vec_print(&v);

    vec_free(&v);
    return 0;
}

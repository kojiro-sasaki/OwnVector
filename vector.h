#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h> 

typedef struct {
    int* data;
    size_t size;
    size_t capacity;
} IntVector;

void vec_init(IntVector* v);
void vec_free(IntVector* v);

int vec_push_back(IntVector* v, int value);
int vec_pop_back(IntVector* v, int* out_value);

void vec_print(const IntVector* v);

#endif

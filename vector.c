typedef struct {
    int* data;     
    size_t size;    
    size_t capacity;
} IntVector;

void vec_init(IntVector* v) {
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}
void vec_free(IntVector* v) {
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}
int vec_push_back(IntVector* v, int value) {
    if (v->size == v->capacity) {
        size_t new_capacity = (v->capacity == 0) ? 4 : v->capacity * 2;
        int* new_data = (int*)realloc(v->data, new_capacity * sizeof(int));
        if (!   new_data)return 0;
        v->data = new_data;
        v->capacity = new_capacity;
    }
    *(v->data + v->size) = value;
    v->size++;
    return 1;
}
void vec_print(const IntVector* v) {
    for (size_t i = 0; i < v->size; i++) {
        printf("%d", *(v->data + i));
    }
    printf("\n");
}

int vec_pop_back(IntVector* v, int* out_value) {
    if (!v || v->size == 0) return 0;

    v->size--;
    if (out_value) {
        *out_value = *(v->data+v->size);
    }
    return 1;
}

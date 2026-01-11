# C Dynamic Vector

This is a simple educational implementation of a dynamic array (vector) in pure C, similar to `std::vector` in C++ .

The project demonstrates manual memory management, dynamic resizing using `malloc`/`realloc`, and a basic container API with `push_back` and `pop_back`.

The vector stores three fields: a pointer to heap memory (`data`), the number of elements currently stored (`size`), and the allocated capacity (`capacity`). When the capacity is full, it is automatically increased (doubled).

This implementation is for learning purposes and works only with `int`.

Build:
```gcc main.c vector.c -o vector_test```

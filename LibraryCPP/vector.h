#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <string>

// Vector (dynamic array)
// Stores string values inside
typedef std::string Data;

struct Vector;

// Creates vector
Vector* vector_create();

// Deletes vector structure and internal data
void vector_delete(Vector* vector);

// Retrieves vector element with the specified index
Data vector_get(const Vector* vector, size_t index);

// Sets vector element with the specified index
void vector_set(Vector* vector, size_t index, const Data& value);

// Retrieves current vector size
size_t vector_size(const Vector* vector);

// Changes the vector size (may increase or decrease)
// Should be O(1) on average
void vector_resize(Vector* vector, size_t size);

#endif
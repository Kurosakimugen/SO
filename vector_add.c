#include "vector.h"

vector* vector_add(vector* w1, vector* w2) {
    return vector_new(w1->x + w2->x,w1->y + w2->y,w1->z + w2->z);
}
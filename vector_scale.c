#include "vector.h"

vector* vector_scale(double k, vector* w) {
    return vector_new(k * w->x, k * w->y, k * w->z);
}
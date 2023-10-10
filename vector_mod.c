#include "vector.h"
#include <math.h>

double vector_mod(vector* w) {
    return sqrt(w->x * w->x + w->y * w->y + w->z * w->z);
}
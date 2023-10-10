#include "vector.h"

double vector_sprod(vector* w1, vector* w2){
    return w1->x * w2->x + w1->y * w2->y + w1->z * w2->z;
}

#include "vector.h"

vector* vector_vprod(vector* w1, vector* w2){
    return vector_new(w1->y * w2->z - w1->z * w2->y,w1->x * w2->z - w1->z * w2->x,w1->x * w2->y - w1->y * w2->x);
}

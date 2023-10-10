#include "vector.h"
#include <stdlib.h>


vector* vector_new(double xi, double yi, double zi) {
    vector* w = (vector*) malloc(sizeof(vector));
    w->x = xi;
    w->y = yi;
    w->z = zi;
    return w;
}
#include "list.h"

void list_add_first(int val, list *l) {
    node* res = node_new(val, NULL);
    l->first = res;
    l->size++;
}
#include "list.h"

void list_remove_last(list *l) {
    node* q = l->first;
    int z = l->size;
    for (int i = 1; i  < z-1 ; i++) {
        q = q->next;
    }
    node* p = q->next;
    q->next = NULL;
    free(p);
    l->size--;
}